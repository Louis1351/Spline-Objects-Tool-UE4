// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UInstancedStaticMeshComponent;
class UArrowComponent;
struct FLinearColor;
struct FVector;
struct FTransform;
struct FHitResult;
#ifdef SPLINEOBJECTS_SplineObjectsActor_generated_h
#error "SplineObjectsActor.generated.h already included, missing '#pragma once' in SplineObjectsActor.h"
#endif
#define SPLINEOBJECTS_SplineObjectsActor_generated_h

#define Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticMeshData_Statics; \
	SPLINEOBJECTS_API static class UScriptStruct* StaticStruct();


template<> SPLINEOBJECTS_API UScriptStruct* StaticStruct<struct FStaticMeshData>();

#define Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_21_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDecalData_Statics; \
	SPLINEOBJECTS_API static class UScriptStruct* StaticStruct();


template<> SPLINEOBJECTS_API UScriptStruct* StaticStruct<struct FDecalData>();

#define Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstancedStaticMeshes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UInstancedStaticMeshComponent*>*)Z_Param__Result=P_THIS->GetInstancedStaticMeshes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArrow) \
	{ \
		P_GET_OBJECT(UArrowComponent,Z_Param__arrow); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out__color); \
		P_GET_PROPERTY(UFloatProperty,Z_Param__size); \
		P_GET_PROPERTY(UFloatProperty,Z_Param__screenSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetArrow(Z_Param__arrow,Z_Param_Out__color,Z_Param__size,Z_Param__screenSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMeshTransformFollow) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__direction); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__normal); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out__transform); \
		P_GET_UBOOL(Z_Param__isAlignToSurface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MeshTransformFollow(Z_Param_Out__direction,Z_Param_Out__normal,Z_Param_Out__transform,Z_Param__isAlignToSurface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecalTransformFollow) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__direction); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__normal); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out__transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecalTransformFollow(Z_Param_Out__direction,Z_Param_Out__normal,Z_Param_Out__transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateObject) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__direction); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateObject(Z_Param_Out__direction,Z_Param_Out__location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSnappingObject) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out__hit); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateSnappingObject(Z_Param_Out__hit,Z_Param_Out__direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateObjectOnOverlapSphere) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__offset); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__location); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CreateObjectOnOverlapSphere(Z_Param_Out__offset,Z_Param_Out__location,Z_Param_Out__direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateObjectsAlongTheSurface) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateObjectsAlongTheSurface(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMultipleActor) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out__transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMultipleActor(Z_Param_Out__transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMultipleInstance) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out__transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMultipleInstance(Z_Param_Out__transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMultipleDecal) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out__transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMultipleDecal(Z_Param_Out__transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapSplinePoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SnapSplinePoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialize(); \
		P_NATIVE_END; \
	}


#define Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActors) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<AActor*>*)Z_Param__Result=P_THIS->GetActors(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetInstancedStaticMeshes) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(TArray<UInstancedStaticMeshComponent*>*)Z_Param__Result=P_THIS->GetInstancedStaticMeshes(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetArrow) \
	{ \
		P_GET_OBJECT(UArrowComponent,Z_Param__arrow); \
		P_GET_STRUCT_REF(FLinearColor,Z_Param_Out__color); \
		P_GET_PROPERTY(UFloatProperty,Z_Param__size); \
		P_GET_PROPERTY(UFloatProperty,Z_Param__screenSize); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetArrow(Z_Param__arrow,Z_Param_Out__color,Z_Param__size,Z_Param__screenSize); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execMeshTransformFollow) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__direction); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__normal); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out__transform); \
		P_GET_UBOOL(Z_Param__isAlignToSurface); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MeshTransformFollow(Z_Param_Out__direction,Z_Param_Out__normal,Z_Param_Out__transform,Z_Param__isAlignToSurface); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDecalTransformFollow) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__direction); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__normal); \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out__transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->DecalTransformFollow(Z_Param_Out__direction,Z_Param_Out__normal,Z_Param_Out__transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateObject) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__direction); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__location); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateObject(Z_Param_Out__direction,Z_Param_Out__location); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateSnappingObject) \
	{ \
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out__hit); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateSnappingObject(Z_Param_Out__hit,Z_Param_Out__direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateObjectOnOverlapSphere) \
	{ \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__offset); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__location); \
		P_GET_STRUCT_REF(FVector,Z_Param_Out__direction); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=P_THIS->CreateObjectOnOverlapSphere(Z_Param_Out__offset,Z_Param_Out__location,Z_Param_Out__direction); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateObjects) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateObjects(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execCreateObjectsAlongTheSurface) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->CreateObjectsAlongTheSurface(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMultipleActor) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out__transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMultipleActor(Z_Param_Out__transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMultipleInstance) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out__transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMultipleInstance(Z_Param_Out__transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execAddMultipleDecal) \
	{ \
		P_GET_STRUCT_REF(FTransform,Z_Param_Out__transform); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->AddMultipleDecal(Z_Param_Out__transform); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSnapSplinePoint) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SnapSplinePoint(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateScale) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateScale(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateRotation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateRotation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateLocation) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateLocation(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUpdateSettings) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateSettings(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execInitialize) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->Initialize(); \
		P_NATIVE_END; \
	}


#define Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASplineObjectsActor(); \
	friend struct Z_Construct_UClass_ASplineObjectsActor_Statics; \
public: \
	DECLARE_CLASS(ASplineObjectsActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SplineObjects"), NO_API) \
	DECLARE_SERIALIZER(ASplineObjectsActor)


#define Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_INCLASS \
private: \
	static void StaticRegisterNativesASplineObjectsActor(); \
	friend struct Z_Construct_UClass_ASplineObjectsActor_Statics; \
public: \
	DECLARE_CLASS(ASplineObjectsActor, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/SplineObjects"), NO_API) \
	DECLARE_SERIALIZER(ASplineObjectsActor)


#define Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASplineObjectsActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASplineObjectsActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASplineObjectsActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASplineObjectsActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASplineObjectsActor(ASplineObjectsActor&&); \
	NO_API ASplineObjectsActor(const ASplineObjectsActor&); \
public:


#define Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASplineObjectsActor(ASplineObjectsActor&&); \
	NO_API ASplineObjectsActor(const ASplineObjectsActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASplineObjectsActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASplineObjectsActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASplineObjectsActor)


#define Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentOffset() { return STRUCT_OFFSET(ASplineObjectsActor, CurrentOffset); } \
	FORCEINLINE static uint32 __PPO__CurrentScale() { return STRUCT_OFFSET(ASplineObjectsActor, CurrentScale); } \
	FORCEINLINE static uint32 __PPO__CurrentRotation() { return STRUCT_OFFSET(ASplineObjectsActor, CurrentRotation); } \
	FORCEINLINE static uint32 __PPO__PointsNumber() { return STRUCT_OFFSET(ASplineObjectsActor, PointsNumber); } \
	FORCEINLINE static uint32 __PPO__CurrentIndex() { return STRUCT_OFFSET(ASplineObjectsActor, CurrentIndex); } \
	FORCEINLINE static uint32 __PPO__Type() { return STRUCT_OFFSET(ASplineObjectsActor, Type); } \
	FORCEINLINE static uint32 __PPO__Close() { return STRUCT_OFFSET(ASplineObjectsActor, Close); } \
	FORCEINLINE static uint32 __PPO__FollowDirection() { return STRUCT_OFFSET(ASplineObjectsActor, FollowDirection); } \
	FORCEINLINE static uint32 __PPO__InverseDirection() { return STRUCT_OFFSET(ASplineObjectsActor, InverseDirection); } \
	FORCEINLINE static uint32 __PPO__IsSnapping() { return STRUCT_OFFSET(ASplineObjectsActor, IsSnapping); } \
	FORCEINLINE static uint32 __PPO__IsAlignToSurface() { return STRUCT_OFFSET(ASplineObjectsActor, IsAlignToSurface); } \
	FORCEINLINE static uint32 __PPO__SnappingRadius() { return STRUCT_OFFSET(ASplineObjectsActor, SnappingRadius); } \
	FORCEINLINE static uint32 __PPO__Space() { return STRUCT_OFFSET(ASplineObjectsActor, Space); } \
	FORCEINLINE static uint32 __PPO__IsLocationConstant() { return STRUCT_OFFSET(ASplineObjectsActor, IsLocationConstant); } \
	FORCEINLINE static uint32 __PPO__IsLocationRandom() { return STRUCT_OFFSET(ASplineObjectsActor, IsLocationRandom); } \
	FORCEINLINE static uint32 __PPO__IsLocationUseCurve() { return STRUCT_OFFSET(ASplineObjectsActor, IsLocationUseCurve); } \
	FORCEINLINE static uint32 __PPO__Offset() { return STRUCT_OFFSET(ASplineObjectsActor, Offset); } \
	FORCEINLINE static uint32 __PPO__minOffsetRandom() { return STRUCT_OFFSET(ASplineObjectsActor, minOffsetRandom); } \
	FORCEINLINE static uint32 __PPO__maxOffsetRandom() { return STRUCT_OFFSET(ASplineObjectsActor, maxOffsetRandom); } \
	FORCEINLINE static uint32 __PPO__curveOffset() { return STRUCT_OFFSET(ASplineObjectsActor, curveOffset); } \
	FORCEINLINE static uint32 __PPO__IsRotationConstant() { return STRUCT_OFFSET(ASplineObjectsActor, IsRotationConstant); } \
	FORCEINLINE static uint32 __PPO__IsRotationBetweenTwoConstants() { return STRUCT_OFFSET(ASplineObjectsActor, IsRotationBetweenTwoConstants); } \
	FORCEINLINE static uint32 __PPO__IsRotationRandom() { return STRUCT_OFFSET(ASplineObjectsActor, IsRotationRandom); } \
	FORCEINLINE static uint32 __PPO__IsRotationUseCurve() { return STRUCT_OFFSET(ASplineObjectsActor, IsRotationUseCurve); } \
	FORCEINLINE static uint32 __PPO__Rotation() { return STRUCT_OFFSET(ASplineObjectsActor, Rotation); } \
	FORCEINLINE static uint32 __PPO__curveRotation() { return STRUCT_OFFSET(ASplineObjectsActor, curveRotation); } \
	FORCEINLINE static uint32 __PPO__minRotationConstant() { return STRUCT_OFFSET(ASplineObjectsActor, minRotationConstant); } \
	FORCEINLINE static uint32 __PPO__maxRotationConstant() { return STRUCT_OFFSET(ASplineObjectsActor, maxRotationConstant); } \
	FORCEINLINE static uint32 __PPO__minRotationRandom() { return STRUCT_OFFSET(ASplineObjectsActor, minRotationRandom); } \
	FORCEINLINE static uint32 __PPO__maxRotationRandom() { return STRUCT_OFFSET(ASplineObjectsActor, maxRotationRandom); } \
	FORCEINLINE static uint32 __PPO__IsScaleConstant() { return STRUCT_OFFSET(ASplineObjectsActor, IsScaleConstant); } \
	FORCEINLINE static uint32 __PPO__IsScaleBetweenTwoConstants() { return STRUCT_OFFSET(ASplineObjectsActor, IsScaleBetweenTwoConstants); } \
	FORCEINLINE static uint32 __PPO__IsScaleRandom() { return STRUCT_OFFSET(ASplineObjectsActor, IsScaleRandom); } \
	FORCEINLINE static uint32 __PPO__IsScaleUseCurve() { return STRUCT_OFFSET(ASplineObjectsActor, IsScaleUseCurve); } \
	FORCEINLINE static uint32 __PPO__Scale() { return STRUCT_OFFSET(ASplineObjectsActor, Scale); } \
	FORCEINLINE static uint32 __PPO__curveScale() { return STRUCT_OFFSET(ASplineObjectsActor, curveScale); } \
	FORCEINLINE static uint32 __PPO__minScaleConstant() { return STRUCT_OFFSET(ASplineObjectsActor, minScaleConstant); } \
	FORCEINLINE static uint32 __PPO__maxScaleConstant() { return STRUCT_OFFSET(ASplineObjectsActor, maxScaleConstant); } \
	FORCEINLINE static uint32 __PPO__minScaleRandom() { return STRUCT_OFFSET(ASplineObjectsActor, minScaleRandom); } \
	FORCEINLINE static uint32 __PPO__maxScaleRandom() { return STRUCT_OFFSET(ASplineObjectsActor, maxScaleRandom); } \
	FORCEINLINE static uint32 __PPO__HasOneUniqueMaterialStaticMesh() { return STRUCT_OFFSET(ASplineObjectsActor, HasOneUniqueMaterialStaticMesh); } \
	FORCEINLINE static uint32 __PPO__IsDescendingStaticMesh() { return STRUCT_OFFSET(ASplineObjectsActor, IsDescendingStaticMesh); } \
	FORCEINLINE static uint32 __PPO__IsInRandomOrderStaticMesh() { return STRUCT_OFFSET(ASplineObjectsActor, IsInRandomOrderStaticMesh); } \
	FORCEINLINE static uint32 __PPO__StaticMeshes() { return STRUCT_OFFSET(ASplineObjectsActor, StaticMeshes); } \
	FORCEINLINE static uint32 __PPO__StaticMeshMaterial() { return STRUCT_OFFSET(ASplineObjectsActor, StaticMeshMaterial); } \
	FORCEINLINE static uint32 __PPO__IsDescendingActor() { return STRUCT_OFFSET(ASplineObjectsActor, IsDescendingActor); } \
	FORCEINLINE static uint32 __PPO__IsInRandomOrderActor() { return STRUCT_OFFSET(ASplineObjectsActor, IsInRandomOrderActor); } \
	FORCEINLINE static uint32 __PPO__BlueprintActors() { return STRUCT_OFFSET(ASplineObjectsActor, BlueprintActors); } \
	FORCEINLINE static uint32 __PPO__HasOneUniqueMaterialDecal() { return STRUCT_OFFSET(ASplineObjectsActor, HasOneUniqueMaterialDecal); } \
	FORCEINLINE static uint32 __PPO__IsDescendingDecal() { return STRUCT_OFFSET(ASplineObjectsActor, IsDescendingDecal); } \
	FORCEINLINE static uint32 __PPO__IsInRandomOrderDecal() { return STRUCT_OFFSET(ASplineObjectsActor, IsInRandomOrderDecal); } \
	FORCEINLINE static uint32 __PPO__Decals() { return STRUCT_OFFSET(ASplineObjectsActor, Decals); } \
	FORCEINLINE static uint32 __PPO__DecalMaterial() { return STRUCT_OFFSET(ASplineObjectsActor, DecalMaterial); } \
	FORCEINLINE static uint32 __PPO__DisableVisual() { return STRUCT_OFFSET(ASplineObjectsActor, DisableVisual); } \
	FORCEINLINE static uint32 __PPO__ShowArrows() { return STRUCT_OFFSET(ASplineObjectsActor, ShowArrows); } \
	FORCEINLINE static uint32 __PPO__ColorDirection() { return STRUCT_OFFSET(ASplineObjectsActor, ColorDirection); } \
	FORCEINLINE static uint32 __PPO__ColorNormal() { return STRUCT_OFFSET(ASplineObjectsActor, ColorNormal); } \
	FORCEINLINE static uint32 __PPO__ScreenSize() { return STRUCT_OFFSET(ASplineObjectsActor, ScreenSize); } \
	FORCEINLINE static uint32 __PPO__Size() { return STRUCT_OFFSET(ASplineObjectsActor, Size); } \
	FORCEINLINE static uint32 __PPO__spline() { return STRUCT_OFFSET(ASplineObjectsActor, spline); } \
	FORCEINLINE static uint32 __PPO__InstancedStaticMeshes() { return STRUCT_OFFSET(ASplineObjectsActor, InstancedStaticMeshes); } \
	FORCEINLINE static uint32 __PPO__Actors() { return STRUCT_OFFSET(ASplineObjectsActor, Actors); }


#define Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_55_PROLOG
#define Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_PRIVATE_PROPERTY_OFFSET \
	Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_RPC_WRAPPERS \
	Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_INCLASS \
	Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_PRIVATE_PROPERTY_OFFSET \
	Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_RPC_WRAPPERS_NO_PURE_DECLS \
	Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_INCLASS_NO_PURE_DECLS \
	Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h_58_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPLINEOBJECTS_API UClass* StaticClass<class ASplineObjectsActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Spline_Objects_Tool_UE4_Plugins_SplineObjects_Source_SplineObjects_Public_SplineObjectsActor_h


#define FOREACH_ENUM_ESPLINETYPE(op) \
	op(ESplineType::Decal) \
	op(ESplineType::InstancedStaticMesh) \
	op(ESplineType::Actor) \
	op(ESplineType::SplineMesh) 

enum class ESplineType : uint8;
template<> SPLINEOBJECTS_API UEnum* StaticEnum<ESplineType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
