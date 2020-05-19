// Fill out your copyright notice in the Description page of Project Settings.


#include "SplineObjectsActor.h"
#include "Engine/StaticMesh.h"
#include "Components/SplineComponent.h"
#include "Components/SceneComponent.h"
#include "Components/InstancedStaticMeshComponent.h"
#include "Components/DecalComponent.h"
#include "Components/ArrowComponent.h"
#include "Components/ChildActorComponent.h"
#include "Materials/MaterialInterface.h"
#include "Materials/MaterialInstanceDynamic.h"
#include "Math/Color.h"
#include "Curves/CurveFloat.h"
#include "Curves/CurveVector.h"
#include "Kismet/KismetMaterialLibrary.h"
#include "Kismet/KismetSystemLibrary.h"
#include "Kismet/KismetMathLibrary.h"

ASplineObjectsActor::ASplineObjectsActor()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;
	spline = CreateDefaultSubobject<USplineComponent>("Spline");
}

void ASplineObjectsActor::OnConstruction(const FTransform& transform)
{
	Super::OnConstruction(transform);

	Initialize();
	UpdateSettings();

	spline->SetClosedLoop(Close);

	if (IsSnapping)
	{
		SnapSplinePoint();
	}

	if (!DisableVisual)
	{
		if (IsSnapping)
		{
			CreateObjectsAlongTheSurface();
		}
		else
		{
			CreateObjects();
		}
	}
}

void ASplineObjectsActor::BeginPlay()
{
	Super::BeginPlay();

}

void ASplineObjectsActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ASplineObjectsActor::Initialize()
{
	InstancedStaticMeshes.Empty();

	CurrentScale = Scale;
	CurrentRotation = Rotation;

	switch (Type)
	{
	case ESplineType::Decal:

		break;
	case ESplineType::InstancedStaticMesh:
		for (auto item : StaticMeshes)
		{
			UInstancedStaticMeshComponent* comp = NewObject<UInstancedStaticMeshComponent>(this);
			comp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
			comp->RegisterComponent();
			comp->CreationMethod = EComponentCreationMethod::SimpleConstructionScript;

			if (item.StaticMesh)
			{
				comp->SetStaticMesh(item.StaticMesh);

				if (HasOneUniqueMaterialStaticMesh)
				{
					comp->SetMaterial(0, StaticMeshMaterial);
				}
				else
					comp->SetMaterial(0, item.Material);
			}

			InstancedStaticMeshes.Add(comp);
		}

		break;
	case ESplineType::Actor:
		break;
	case ESplineType::SplineMesh:
		break;
	}
}

void ASplineObjectsActor::UpdateSettings()
{
	if ((IsLocationRandom && IsLocationConstant) ||
		(IsLocationUseCurve && IsLocationRandom) ||
		(IsLocationUseCurve && IsLocationConstant))
	{
		IsLocationRandom = false;
		IsLocationConstant = false;
		IsLocationUseCurve = false;
	}

	if ((IsScaleBetweenTwoConstants && IsScaleRandom) ||
		(IsScaleUseCurve && IsScaleRandom) ||
		(IsScaleUseCurve && IsScaleBetweenTwoConstants) ||
		(IsScaleConstant && IsScaleBetweenTwoConstants) ||
		(IsScaleConstant && IsScaleRandom) ||
		(IsScaleConstant && IsScaleUseCurve))
	{
		IsScaleRandom = false;
		IsScaleBetweenTwoConstants = false;
		IsScaleUseCurve = false;
		IsScaleConstant = false;
	}

	if ((IsRotationBetweenTwoConstants && IsRotationRandom) ||
		(IsRotationUseCurve && IsRotationRandom) ||
		(IsRotationUseCurve && IsRotationBetweenTwoConstants) ||
		(IsRotationConstant && IsRotationBetweenTwoConstants) ||
		(IsRotationConstant && IsRotationRandom) ||
		(IsRotationConstant && IsRotationUseCurve))
	{
		IsRotationRandom = false;
		IsRotationBetweenTwoConstants = false;
		IsRotationUseCurve = false;
		IsRotationConstant = false;
	}

	if (IsDescendingStaticMesh && IsInRandomOrderStaticMesh)
	{
		IsDescendingStaticMesh = false;
		IsInRandomOrderStaticMesh = false;
	}

	if (IsDescendingActor && IsInRandomOrderActor)
	{
		IsDescendingActor = false;
		IsInRandomOrderActor = false;
	}

	if (!FollowDirection && InverseDirection)
	{
		InverseDirection = false;
	}

	if (!IsSnapping && IsAlignToSurface)
	{
		IsAlignToSurface = false;
	}
}

void ASplineObjectsActor::UpdateLocation()
{
	if (IsLocationRandom)
	{
		CurrentOffset.X = UKismetMathLibrary::RandomFloatInRange(minOffsetRandom.X, maxOffsetRandom.X);
		CurrentOffset.Y = UKismetMathLibrary::RandomFloatInRange(minOffsetRandom.Y, maxOffsetRandom.Y);
		CurrentOffset.Z = UKismetMathLibrary::RandomFloatInRange(minOffsetRandom.Z, maxOffsetRandom.Z);
	}
	else if (IsLocationUseCurve && curveOffset)
	{
		float minTime;
		float maxTime;
		curveOffset->GetTimeRange(minTime, maxTime);

		float inTime = ((float)CurrentIndex / (float)PointsNumber) * maxTime;

		FVector curveValue = curveOffset->GetVectorValue(inTime);
		CurrentOffset = curveValue;
	}
	else if (IsLocationConstant)
	{
		CurrentOffset = Offset;
	}
}

void ASplineObjectsActor::UpdateRotation()
{
	if (IsRotationRandom)
	{
		CurrentRotation.Roll = UKismetMathLibrary::RandomFloatInRange(minRotationRandom.Roll, maxRotationRandom.Roll);
		CurrentRotation.Pitch = UKismetMathLibrary::RandomFloatInRange(minRotationRandom.Pitch, maxRotationRandom.Pitch);
		CurrentRotation.Yaw = UKismetMathLibrary::RandomFloatInRange(minRotationRandom.Yaw, maxRotationRandom.Yaw);
	}
	else if (IsRotationBetweenTwoConstants)
	{
		float t = ((float)CurrentIndex / (float)PointsNumber);
		CurrentRotation = FMath::Lerp(minRotationConstant, maxRotationConstant, t);
	}
	else if (IsRotationUseCurve && curveRotation)
	{
		float minTime;
		float maxTime;
		curveRotation->GetTimeRange(minTime, maxTime);

		float inTime = ((float)CurrentIndex / (float)PointsNumber) * maxTime;

		FVector curveValue = curveRotation->GetVectorValue(inTime);
		CurrentRotation.Roll = curveValue.X;
		CurrentRotation.Pitch = curveValue.Y;
		CurrentRotation.Yaw = curveValue.Z;
	}
}

void ASplineObjectsActor::UpdateScale()
{
	if (IsScaleRandom)
	{
		float rand = UKismetMathLibrary::RandomFloatInRange(minScaleRandom, maxScaleRandom);
		CurrentScale = FVector(rand);
	}
	else if (IsScaleBetweenTwoConstants)
	{
		float t = ((float)CurrentIndex / (float)PointsNumber);
		CurrentScale = FVector(FMath::Lerp(minScaleConstant, maxScaleConstant, t));
	}
	else if (IsScaleUseCurve && curveScale)
	{
		float minTime;
		float maxTime;
		curveScale->GetTimeRange(minTime, maxTime);

		float inTime = ((float)CurrentIndex / (float)PointsNumber) * maxTime;

		float curveValue = curveScale->GetFloatValue(inTime);
		CurrentScale = FVector(curveValue);
	}
}

void ASplineObjectsActor::SnapSplinePoint()
{
	FVector CurrentLocation = FVector::ZeroVector;
	FVector CurrentDirection = FVector::ZeroVector;
	FVector Offset1 = FVector(-0.1f, 0.1f, 0.1f);
	FVector Offset2 = FVector(0.1f, 0.1f, 0.1f);
	FHitResult hit;
	float SegmentLength = 0.0f;
	TArray<AActor*> ActorsToIgnore;

	PointsNumber = spline->GetNumberOfSplinePoints();
	SegmentLength = spline->GetSplineLength() / PointsNumber;

	for (int i = 0; i < PointsNumber; ++i)
	{
		CurrentIndex = i;
		CurrentLocation = spline->GetLocationAtSplinePoint(CurrentIndex, ESplineCoordinateSpace::World);
		CurrentDirection = spline->GetDirectionAtSplinePoint(CurrentIndex, ESplineCoordinateSpace::World);

		if (UKismetSystemLibrary::SphereTraceSingle(this, CurrentLocation, CurrentLocation + Offset1, SnappingRadius, ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::None, hit, true))
		{
			spline->SetLocationAtSplinePoint(CurrentIndex, hit.ImpactPoint, ESplineCoordinateSpace::World);
		}
		if (UKismetSystemLibrary::SphereTraceSingle(this, CurrentLocation, CurrentLocation + Offset2, SnappingRadius, ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::None, hit, true))
		{
			spline->SetLocationAtSplinePoint(CurrentIndex, hit.ImpactPoint, ESplineCoordinateSpace::World);
		}
	}
}

void ASplineObjectsActor::AddMultipleDecal(const FTransform& _transform)
{
	UDecalComponent* decalComp = nullptr;
	int index = 0;

	if (Decals.Num() <= 0)
		return;

	if (IsInRandomOrderDecal)
	{
		index = UKismetMathLibrary::RandomIntegerInRange(0, Decals.Num() - 1);
	}
	else if (IsDescendingDecal)
	{
		index = (Decals.Num() - 1) - (CurrentIndex % Decals.Num());
	}
	else
	{
		index = (CurrentIndex % Decals.Num());
	}


	decalComp = NewObject<UDecalComponent>(this);
	decalComp->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepWorldTransform);
	decalComp->SetWorldTransform(_transform);
	decalComp->RegisterComponent();
	decalComp->CreationMethod = EComponentCreationMethod::SimpleConstructionScript;

	if (index >= 0 && index < Decals.Num())
	{
		decalComp->SetFadeIn(Decals[index].FadeInDelay, Decals[index].FadeInDuration);
		decalComp->SetFadeOut(Decals[index].FadeOutDelay, Decals[index].FadeOutDuration, Decals[index].DestroyOwnerAfterFade);
		decalComp->SetFadeScreenSize(Decals[index].FadeScreenSize);
		decalComp->SetSortOrder(Decals[index].SortOrder);

		decalComp->DecalSize = CurrentScale;

		if (!HasOneUniqueMaterialDecal)
		{
			decalComp->SetDecalMaterial(Decals[index].Material);
		}
		else
		{
			decalComp->SetDecalMaterial(DecalMaterial);
		}

	}
}

void ASplineObjectsActor::AddMultipleInstance(const FTransform& _transform)
{
	int index = 0;

	if (InstancedStaticMeshes.Num() <= 0)
		return;

	if (IsInRandomOrderStaticMesh)
	{
		index = UKismetMathLibrary::RandomIntegerInRange(0, InstancedStaticMeshes.Num() - 1);
	}
	else if (IsDescendingStaticMesh)
	{
		index = (InstancedStaticMeshes.Num() - 1) - (CurrentIndex % InstancedStaticMeshes.Num());
	}
	else
	{
		index = (CurrentIndex % InstancedStaticMeshes.Num());
	}

	if (index >= 0 && index < InstancedStaticMeshes.Num())
	{
		InstancedStaticMeshes[index]->AddInstance(_transform);
	}
}

void ASplineObjectsActor::AddMultipleActor(const FTransform& _transform)
{
	int index = 0;

	if (BlueprintActors.Num() <= 0)
		return;

	if (IsInRandomOrderActor)
	{
		index = UKismetMathLibrary::RandomIntegerInRange(0, BlueprintActors.Num() - 1);
	}
	else if (IsDescendingActor)
	{
		index = (BlueprintActors.Num() - 1) - (CurrentIndex % BlueprintActors.Num());
	}
	else
	{
		index = (CurrentIndex % BlueprintActors.Num());
	}

	UChildActorComponent* newChild = NewObject<UChildActorComponent>(this);
	newChild->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
	newChild->SetWorldTransform(_transform);
	newChild->RegisterComponent();
	newChild->CreationMethod = EComponentCreationMethod::SimpleConstructionScript;

	if (index >= 0 && index < BlueprintActors.Num())
		newChild->SetChildActorClass(BlueprintActors[index]);
}

void ASplineObjectsActor::CreateObjectsAlongTheSurface()
{
	FVector CurrentLocation;
	FVector CurrentDirection;
	FVector Offset1 = FVector(-0.1f, 0.1f, 0.1f);
	FVector Offset2 = FVector(0.1f, 0.1f, 0.1f);

	PointsNumber = (spline->GetSplineLength() / Space);

	for (int i = 0; i < PointsNumber; ++i)
	{
		CurrentIndex = i;

		UpdateLocation();
		UpdateScale();
		UpdateRotation();

		CurrentLocation = spline->GetLocationAtDistanceAlongSpline(Space * i, ESplineCoordinateSpace::World);
		CurrentDirection = spline->GetDirectionAtDistanceAlongSpline(Space * i, ESplineCoordinateSpace::World);

		if (!CreateObjectOnOverlapSphere(Offset1, CurrentLocation, CurrentDirection))
		{
			if (!CreateObjectOnOverlapSphere(Offset2, CurrentLocation, CurrentDirection))
			{
				CreateObject(CurrentDirection, CurrentLocation);
			}
		}
	}
}

void ASplineObjectsActor::CreateObjects()
{
	FVector CurrentLocation;
	FVector CurrentDirection;

	PointsNumber = (spline->GetSplineLength() / Space);

	for (int i = 0; i < PointsNumber; ++i)
	{
		CurrentIndex = i;

		UpdateLocation();
		UpdateScale();
		UpdateRotation();

		CurrentLocation = spline->GetLocationAtDistanceAlongSpline(Space * i, ESplineCoordinateSpace::World);
		CurrentDirection = spline->GetDirectionAtDistanceAlongSpline(Space * i, ESplineCoordinateSpace::World);

		CreateObject(CurrentDirection, CurrentLocation);
	}
}

bool ASplineObjectsActor::CreateObjectOnOverlapSphere(const FVector& _offset, const FVector& _location, FVector& _direction)
{
	bool bWasCreated = false;
	FHitResult hit;
	TArray<AActor*> ActorsToIgnore;

	if (UKismetSystemLibrary::SphereTraceSingle(this, _location, _location + _offset, SnappingRadius, ETraceTypeQuery::TraceTypeQuery1, false, ActorsToIgnore, EDrawDebugTrace::None, hit, true))
	{
		CreateSnappingObject(hit, _direction);
		bWasCreated = true;
	}

	return bWasCreated;
}

void ASplineObjectsActor::CreateSnappingObject(const FHitResult& _hit, FVector& _direction)
{
	FVector HitNormal = FVector::ZeroVector;
	FTransform CurrentTransform = FTransform::Identity;

	HitNormal = _hit.ImpactNormal;
	CurrentTransform = UKismetMathLibrary::MakeTransform(CurrentOffset + _hit.ImpactPoint, HitNormal.Rotation(), CurrentScale);

	switch (Type)
	{
	case ESplineType::Decal:
		if (FollowDirection)
		{
			DecalTransformFollow(_direction, HitNormal, CurrentTransform);
		}
		else
		{
			FRotator newRotation = UKismetMathLibrary::ComposeRotators(CurrentRotation, CurrentTransform.Rotator());
			CurrentTransform = UKismetMathLibrary::MakeTransform(CurrentTransform.GetLocation(), newRotation, FVector::OneVector);
		}

		AddMultipleDecal(CurrentTransform);

		break;
	case ESplineType::InstancedStaticMesh:
		if (FollowDirection)
		{
			MeshTransformFollow(_direction, HitNormal, CurrentTransform, IsAlignToSurface);
		}
		else
		{
			_direction = FVector::UpVector;
			MeshTransformFollow(_direction, HitNormal, CurrentTransform, IsAlignToSurface);
		}

		AddMultipleInstance(CurrentTransform);

		break;
	case ESplineType::Actor:
		if (FollowDirection)
		{
			MeshTransformFollow(_direction, HitNormal, CurrentTransform, IsAlignToSurface);
		}
		else
		{
			_direction = FVector::UpVector;
			MeshTransformFollow(_direction, HitNormal, CurrentTransform, IsAlignToSurface);
		}

		AddMultipleActor(CurrentTransform);

		break;
	case ESplineType::SplineMesh:
		break;
	}

	if (ShowArrows)
	{
		UArrowComponent* arrowNormal = NewObject<UArrowComponent>(this);
		arrowNormal->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		arrowNormal->SetWorldTransform(UKismetMathLibrary::MakeTransform(CurrentTransform.GetLocation(), HitNormal.Rotation(), CurrentTransform.GetScale3D()));
		arrowNormal->RegisterComponent();
		arrowNormal->CreationMethod = EComponentCreationMethod::SimpleConstructionScript;

		UArrowComponent* arrowDirection = NewObject<UArrowComponent>(this);
		arrowDirection->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		arrowDirection->SetWorldTransform(UKismetMathLibrary::MakeTransform(CurrentTransform.GetLocation(), _direction.Rotation(), CurrentTransform.GetScale3D()));
		arrowDirection->RegisterComponent();
		arrowDirection->CreationMethod = EComponentCreationMethod::SimpleConstructionScript;

		SetArrow(arrowNormal, ColorNormal, Size, ScreenSize);
		SetArrow(arrowDirection, ColorDirection, Size, ScreenSize);
	}
}

void ASplineObjectsActor::CreateObject(FVector& _direction, const FVector& _location)
{
	FTransform CurrentTransform = FTransform::Identity;

	CurrentTransform = UKismetMathLibrary::MakeTransform(CurrentOffset + _location, FRotator::ZeroRotator, CurrentScale);

	switch (Type)
	{
	case ESplineType::Decal:
		break;
	case ESplineType::InstancedStaticMesh:
		if (FollowDirection)
		{
			MeshTransformFollow(_direction, FVector::UpVector, CurrentTransform, false);
		}
		else
		{
			FRotator newRotation = UKismetMathLibrary::ComposeRotators(CurrentRotation, CurrentTransform.Rotator());
			CurrentTransform = UKismetMathLibrary::MakeTransform(CurrentTransform.GetLocation(), newRotation, CurrentTransform.GetScale3D());
		}

		AddMultipleInstance(CurrentTransform);

		break;
	case ESplineType::Actor:
		if (FollowDirection)
		{
			MeshTransformFollow(_direction, FVector::UpVector, CurrentTransform, false);
		}
		else
		{
			FRotator newRotation = UKismetMathLibrary::ComposeRotators(CurrentRotation, CurrentTransform.Rotator());
			CurrentTransform = UKismetMathLibrary::MakeTransform(CurrentTransform.GetLocation(), newRotation, CurrentTransform.GetScale3D());
		}

		AddMultipleActor(CurrentTransform);

		break;
	case ESplineType::SplineMesh:
		break;
	}

	if (ShowArrows)
	{
		UArrowComponent* arrowDirection = NewObject<UArrowComponent>(this);
		arrowDirection->AttachToComponent(RootComponent, FAttachmentTransformRules::KeepRelativeTransform);
		arrowDirection->SetWorldTransform(UKismetMathLibrary::MakeTransform(CurrentTransform.GetLocation(), _direction.Rotation(), CurrentTransform.GetScale3D()));
		arrowDirection->RegisterComponent();
		arrowDirection->CreationMethod = EComponentCreationMethod::SimpleConstructionScript;

		SetArrow(arrowDirection, ColorDirection, Size, ScreenSize);
	}
}

void ASplineObjectsActor::DecalTransformFollow(FVector& _direction, const FVector& _normal, FTransform& _transform)
{
	float invert = (InverseDirection) ? -1.0f : 1.0f;
	_direction = _direction * invert;
	FRotator newRotation = UKismetMathLibrary::ComposeRotators(CurrentRotation, UKismetMathLibrary::MakeRotFromXY(_normal, _direction));
	_transform = UKismetMathLibrary::MakeTransform(_transform.GetLocation(), newRotation, FVector::OneVector);
}

void ASplineObjectsActor::MeshTransformFollow(FVector& _direction, const FVector& _normal, FTransform& _transform, bool _isAlignToSurface)
{
	FVector CurrentNormal = FVector::ZeroVector;
	FVector CurrentDirection = FVector::ZeroVector;
	float invert = (InverseDirection) ? -1.0f : 1.0f;
	_direction = _direction * invert;

	if (_isAlignToSurface)
	{
		CurrentDirection = _direction;
		CurrentNormal = _normal;
	}
	else
	{
		CurrentNormal = _direction;
		CurrentDirection = FVector::UpVector;
	}

	FRotator newRotation = UKismetMathLibrary::ComposeRotators(CurrentRotation, UKismetMathLibrary::MakeRotFromZX(CurrentNormal, CurrentDirection));
	_transform = UKismetMathLibrary::MakeTransform(_transform.GetLocation(), newRotation, _transform.GetScale3D());
}

void ASplineObjectsActor::SetArrow(UArrowComponent* _arrow, const FLinearColor& _color, const float _size, const float _screenSize)
{
	_arrow->SetArrowColor(_color);
	_arrow->ArrowSize = _size;
	_arrow->ScreenSize = _screenSize;
}



