// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplineObjects.generated.h"

UENUM(BlueprintType)
enum class ESplineType : uint8
{
	Decal						UMETA(DisplayName = "Decal"),
	InstancedStaticMesh			UMETA(DisplayName = "Instanced Static Mesh"),
	Actor						UMETA(DisplayName = "Actor"),
	SplineMesh					UMETA(DisplayName = "Spline Mesh")
};

USTRUCT(BlueprintType)
struct FDecalData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeInDelay = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeInDuration = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeOutDelay = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeOutDuration = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	float FadeScreenSize = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	bool DestroyOwnerAfterFade = true;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int SortOrder = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* Material;
};

USTRUCT(BlueprintType)
struct FStaticMeshData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UStaticMesh* StaticMesh;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	class UMaterialInterface* Material;
};

UCLASS()
class SPLINE_OBJECT_TOOL_API ASplineObjects : public AActor
{
	GENERATED_BODY()

private:

	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FVector CurrentOffset = FVector::ZeroVector;
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FVector CurrentScale = FVector::OneVector;
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	FRotator CurrentRotation = FRotator::ZeroRotator;
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int PointsNumber = 0;
	UPROPERTY(BlueprintReadWrite, meta = (AllowPrivateAccess = "true"))
	int CurrentIndex = 0;
	
	UFUNCTION(BlueprintCallable)
	void Initialize();
	UFUNCTION(BlueprintCallable)
	void UpdateSettings();
	UFUNCTION(BlueprintCallable)
	void UpdateLocation();
	UFUNCTION(BlueprintCallable)
	void UpdateRotation();
	UFUNCTION(BlueprintCallable)
	void UpdateScale();
	UFUNCTION(BlueprintCallable)
	void SnapSplinePoint();
	UFUNCTION(BlueprintCallable)
	void AddMultipleDecal(const FTransform& _transform);
	UFUNCTION(BlueprintCallable)
	void AddMultipleInstance(const FTransform& _transform);
	UFUNCTION(BlueprintCallable)
	void AddMultipleActor(const FTransform& _transform);
	UFUNCTION(BlueprintCallable)
	void CreateObjectsAlongTheSurface();
	UFUNCTION(BlueprintCallable)
	void CreateObjects();
	UFUNCTION(BlueprintCallable)
	bool CreateObjectOnOverlapSphere(const FVector& _offset, const FVector& _location, FVector& _direction);
	UFUNCTION(BlueprintCallable)
	void CreateSnappingObject(const FHitResult& _hit, FVector& _direction);
	UFUNCTION(BlueprintCallable)
	void CreateObject(FVector& _direction, const FVector& _location);
	UFUNCTION(BlueprintCallable)
	void DecalTransformFollow(FVector& _direction, const FVector& _normal, FTransform& _transform);
	UFUNCTION(BlueprintCallable)
	void MeshTransformFollow(FVector& _direction, const FVector& _normal, FTransform& _transform, bool _isAlignToSurface);
	UFUNCTION(BlueprintCallable)
	void SetArrow(class UArrowComponent* _arrow, const FLinearColor& _color, const float _size, const float _screenSize);

protected:
	/////////////////////////////////Spline//////////////////////////////////

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spline Settings")
	ESplineType Type;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spline Settings")
	bool Close;
	UPROPERTY(EditAnywhere, BlueprintReadWrite,  Category = "Spline Settings")
	bool FollowDirection;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spline Settings", meta = (EditCondition = "FollowDirection"))
	bool InverseDirection;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spline Settings")
	bool IsSnapping;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spline Settings", meta = (EditCondition = "IsSnapping"))
	bool IsAlignToSurface;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spline Settings", meta = (EditCondition = "IsSnapping"))
	float SnappingRadius = 10.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Spline Settings")
	float Space = 50.0f;

	//////////////////////////////////Location///////////////////////////////

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Constant", Category = "Location Settings")
	bool IsLocationConstant = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Random In Range", Category = "Location Settings")
	bool IsLocationRandom = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Using Curve", Category = "Location Settings")
	bool IsLocationUseCurve = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "IsLocationConstant"), Category = "Location Settings", meta = (AllowPreserveRatio))
	FVector Offset = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "IsLocationRandom"), Category = "Location Settings", meta = (AllowPreserveRatio))
	FVector minOffsetRandom = FVector::ZeroVector;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "IsLocationRandom"), Category = "Location Settings", meta = (AllowPreserveRatio))
	FVector maxOffsetRandom = FVector::ZeroVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "IsLocationUseCurve"), DisplayName = "Curve", Category = "Location Settings")
	class UCurveVector* curveOffset;

	/////////////////////////////////Rotation////////////////////////////////

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Constant", Category = "Rotation Settings")
	bool IsRotationConstant = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName ="Lerp In Range", Category = "Rotation Settings")
	bool IsRotationBetweenTwoConstants = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Random In Range", Category = "Rotation Settings")
	bool IsRotationRandom = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Using Curve", Category = "Rotation Settings")
	bool IsRotationUseCurve = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Rotation Settings", meta = (AllowPreserveRatio), meta = (EditCondition = "IsRotationConstant"))
	FRotator Rotation = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Curve", Category = "Rotation Settings", meta = (EditCondition = "IsRotationUseCurve"))
	class UCurveVector* curveRotation;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Min Rotation", Category = "Rotation Settings", meta = (EditCondition = "IsRotationBetweenTwoConstants"), meta = (AllowPreserveRatio))
	FRotator minRotationConstant = FRotator::ZeroRotator;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Max Rotation", Category = "Rotation Settings", meta = (EditCondition = "IsRotationBetweenTwoConstants"), meta = (AllowPreserveRatio))
	FRotator maxRotationConstant = FRotator::ZeroRotator;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Min Rotation", Category = "Rotation Settings", meta = (EditCondition = "IsRotationRandom"), meta = (AllowPreserveRatio))
	FRotator minRotationRandom = FRotator::ZeroRotator;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Max Rotation", Category = "Rotation Settings", meta = (EditCondition = "IsRotationRandom"), meta = (AllowPreserveRatio))
	FRotator maxRotationRandom = FRotator::ZeroRotator;

	//////////////////////////////////Scale/////////////////////////////////

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Constant", Category = "Scale Settings")
	bool IsScaleConstant = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Lerp In Range", Category = "Scale Settings")
	bool IsScaleBetweenTwoConstants = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Random In Range", Category = "Scale Settings")
	bool IsScaleRandom = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Using Curve", Category = "Scale Settings")
	bool IsScaleUseCurve = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Scale Settings", meta = (AllowPreserveRatio), meta = (EditCondition = "IsScaleConstant"))
	FVector Scale = FVector::OneVector;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Curve", Category = "Scale Settings", meta = (EditCondition = "IsScaleUseCurve"))
	class UCurveFloat* curveScale;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Min Scale", Category = "Scale Settings", meta = (EditCondition = "IsScaleBetweenTwoConstants"))
	float minScaleConstant = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Max Scale", Category = "Scale Settings", meta = (EditCondition = "IsScaleBetweenTwoConstants"))
	float maxScaleConstant = 1.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Min Scale", Category = "Scale Settings", meta = (EditCondition = "IsScaleRandom"))
	float minScaleRandom = 0.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Max Scale", Category = "Scale Settings", meta = (EditCondition = "IsScaleRandom"))
	float maxScaleRandom = 1.0f;

	/////////////////////////////////StaticMeshes////////////////////////////

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Has One Unique Material", Category = "StaticMeshes Spawn Settings")
	bool HasOneUniqueMaterialStaticMesh = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Is Descending", Category = "StaticMeshes Spawn Settings")
	bool IsDescendingStaticMesh = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Is In Random Order", Category = "StaticMeshes Spawn Settings")
	bool IsInRandomOrderStaticMesh = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StaticMeshes Spawn Settings")
	TArray<FStaticMeshData> StaticMeshes;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "StaticMeshes Spawn Settings", meta = (EditCondition = "HasOneUniqueMaterialStaticMesh"))
	class UMaterialInterface* StaticMeshMaterial;

	/////////////////////////////////Actors//////////////////////////////////

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Is Descending", Category = "Actors Spawn Settings")
	bool IsDescendingActor = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Is In Random Order", Category = "Actors Spawn Settings")
	bool IsInRandomOrderActor = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Actors Spawn Settings")
	TArray<TSubclassOf<class AActor>> BlueprintActors;

	////////////////////////////////Decal///////////////////////////////////////

	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Has One Unique Material", Category = "Decals Spawn Settings")
	bool HasOneUniqueMaterialDecal = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Is Descending", Category = "Decals Spawn Settings")
	bool IsDescendingDecal = false;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, DisplayName = "Is In Random Order", Category = "Decals Spawn Settings")
	bool IsInRandomOrderDecal = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Decals Spawn Settings")
	TArray<FDecalData> Decals;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Decals Spawn Settings", meta = (EditCondition = "HasOneUniqueMaterialDecal"))
	class UMaterialInterface* DecalMaterial;

	//////////////////////////////////////////////////////////////////////////

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Optimization)
	bool DisableVisual;

	///////////////////////////////Debug//////////////////////////////////////
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug Settings")
	bool  ShowArrows;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug Settings", meta = (HideAlphaChannel))
	FLinearColor  ColorDirection = FLinearColor::Yellow;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug Settings", meta = (HideAlphaChannel))
	FLinearColor  ColorNormal = FLinearColor::Blue;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug Settings")
	float ScreenSize = 1.0f;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Debug Settings")
	float Size = 1.0f;

	virtual void OnConstruction(const FTransform& transform) override;
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"), Category = "Components Settings")
	class USplineComponent* spline;
	UPROPERTY(VisibleAnywhere, Instanced, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "Components Settings")
	TArray<class UInstancedStaticMeshComponent*> InstancedStaticMeshes;
	UPROPERTY(VisibleAnywhere, Instanced, BlueprintReadWrite, meta = (AllowPrivateAccess = "true"), Category = "Components Settings")
	TArray<class AActor*> Actors;

public:	
	ASplineObjects();
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	UFUNCTION(BlueprintCallable)
	FORCEINLINE TArray<class UInstancedStaticMeshComponent*> GetInstancedStaticMeshes()
	{
		return InstancedStaticMeshes;
	}

	UFUNCTION(BlueprintCallable)
	FORCEINLINE TArray<class AActor*> GetActors()
	{
		return Actors;
	}
};
