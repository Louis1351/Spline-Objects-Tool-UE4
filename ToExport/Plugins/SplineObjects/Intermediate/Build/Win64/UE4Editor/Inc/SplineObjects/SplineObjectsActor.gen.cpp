// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SplineObjects/Public/SplineObjectsActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSplineObjectsActor() {}
// Cross Module References
	SPLINEOBJECTS_API UEnum* Z_Construct_UEnum_SplineObjects_ESplineType();
	UPackage* Z_Construct_UPackage__Script_SplineObjects();
	SPLINEOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshData();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	SPLINEOBJECTS_API UScriptStruct* Z_Construct_UScriptStruct_FDecalData();
	SPLINEOBJECTS_API UClass* Z_Construct_UClass_ASplineObjectsActor_NoRegister();
	SPLINEOBJECTS_API UClass* Z_Construct_UClass_ASplineObjectsActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_CreateObject();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_CreateObjects();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_CreateObjectsAlongTheSurface();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_GetActors();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes();
	ENGINE_API UClass* Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_Initialize();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_SetArrow();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	ENGINE_API UClass* Z_Construct_UClass_UArrowComponent_NoRegister();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_SnapSplinePoint();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_UpdateLocation();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_UpdateRotation();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_UpdateScale();
	SPLINEOBJECTS_API UFunction* Z_Construct_UFunction_ASplineObjectsActor_UpdateSettings();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
// End Cross Module References
	static UEnum* ESplineType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_SplineObjects_ESplineType, Z_Construct_UPackage__Script_SplineObjects(), TEXT("ESplineType"));
		}
		return Singleton;
	}
	template<> SPLINEOBJECTS_API UEnum* StaticEnum<ESplineType>()
	{
		return ESplineType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ESplineType(ESplineType_StaticEnum, TEXT("/Script/SplineObjects"), TEXT("ESplineType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_SplineObjects_ESplineType_Hash() { return 39095402U; }
	UEnum* Z_Construct_UEnum_SplineObjects_ESplineType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_SplineObjects();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ESplineType"), 0, Get_Z_Construct_UEnum_SplineObjects_ESplineType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ESplineType::Decal", (int64)ESplineType::Decal },
				{ "ESplineType::InstancedStaticMesh", (int64)ESplineType::InstancedStaticMesh },
				{ "ESplineType::Actor", (int64)ESplineType::Actor },
				{ "ESplineType::SplineMesh", (int64)ESplineType::SplineMesh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Actor.DisplayName", "Actor" },
				{ "BlueprintType", "true" },
				{ "Decal.DisplayName", "Decal" },
				{ "InstancedStaticMesh.DisplayName", "Instanced Static Mesh" },
				{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
				{ "SplineMesh.DisplayName", "Spline Mesh" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_SplineObjects,
				nullptr,
				"ESplineType",
				"ESplineType",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FStaticMeshData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPLINEOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FStaticMeshData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStaticMeshData, Z_Construct_UPackage__Script_SplineObjects(), TEXT("StaticMeshData"), sizeof(FStaticMeshData), Get_Z_Construct_UScriptStruct_FStaticMeshData_Hash());
	}
	return Singleton;
}
template<> SPLINEOBJECTS_API UScriptStruct* StaticStruct<FStaticMeshData>()
{
	return FStaticMeshData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStaticMeshData(FStaticMeshData::StaticStruct, TEXT("/Script/SplineObjects"), TEXT("StaticMeshData"), false, nullptr, nullptr);
static struct FScriptStruct_SplineObjects_StaticRegisterNativesFStaticMeshData
{
	FScriptStruct_SplineObjects_StaticRegisterNativesFStaticMeshData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StaticMeshData")),new UScriptStruct::TCppStructOps<FStaticMeshData>);
	}
} ScriptStruct_SplineObjects_StaticRegisterNativesFStaticMeshData;
	struct Z_Construct_UScriptStruct_FStaticMeshData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStaticMeshData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStaticMeshData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshData_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "StaticMeshData" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshData_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshData, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshData_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshData_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStaticMeshData_Statics::NewProp_StaticMesh_MetaData[] = {
		{ "Category", "StaticMeshData" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FStaticMeshData_Statics::NewProp_StaticMesh = { "StaticMesh", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStaticMeshData, StaticMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshData_Statics::NewProp_StaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshData_Statics::NewProp_StaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStaticMeshData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshData_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStaticMeshData_Statics::NewProp_StaticMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStaticMeshData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SplineObjects,
		nullptr,
		&NewStructOps,
		"StaticMeshData",
		sizeof(FStaticMeshData),
		alignof(FStaticMeshData),
		Z_Construct_UScriptStruct_FStaticMeshData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStaticMeshData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FStaticMeshData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStaticMeshData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStaticMeshData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SplineObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StaticMeshData"), sizeof(FStaticMeshData), Get_Z_Construct_UScriptStruct_FStaticMeshData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStaticMeshData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStaticMeshData_Hash() { return 2135019207U; }
class UScriptStruct* FDecalData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SPLINEOBJECTS_API uint32 Get_Z_Construct_UScriptStruct_FDecalData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDecalData, Z_Construct_UPackage__Script_SplineObjects(), TEXT("DecalData"), sizeof(FDecalData), Get_Z_Construct_UScriptStruct_FDecalData_Hash());
	}
	return Singleton;
}
template<> SPLINEOBJECTS_API UScriptStruct* StaticStruct<FDecalData>()
{
	return FDecalData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDecalData(FDecalData::StaticStruct, TEXT("/Script/SplineObjects"), TEXT("DecalData"), false, nullptr, nullptr);
static struct FScriptStruct_SplineObjects_StaticRegisterNativesFDecalData
{
	FScriptStruct_SplineObjects_StaticRegisterNativesFDecalData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DecalData")),new UScriptStruct::TCppStructOps<FDecalData>);
	}
} ScriptStruct_SplineObjects_StaticRegisterNativesFDecalData;
	struct Z_Construct_UScriptStruct_FDecalData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Material;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SortOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_SortOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DestroyOwnerAfterFade_MetaData[];
#endif
		static void NewProp_DestroyOwnerAfterFade_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DestroyOwnerAfterFade;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeOutDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeOutDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FadeInDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FadeInDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDecalData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDecalData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "DecalData" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Material_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Material_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_SortOrder_MetaData[] = {
		{ "Category", "DecalData" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, SortOrder), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_SortOrder_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_SortOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DestroyOwnerAfterFade_MetaData[] = {
		{ "Category", "DecalData" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DestroyOwnerAfterFade_SetBit(void* Obj)
	{
		((FDecalData*)Obj)->DestroyOwnerAfterFade = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DestroyOwnerAfterFade = { "DestroyOwnerAfterFade", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDecalData), &Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DestroyOwnerAfterFade_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DestroyOwnerAfterFade_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DestroyOwnerAfterFade_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeScreenSize_MetaData[] = {
		{ "Category", "DecalData" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeScreenSize = { "FadeScreenSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, FadeScreenSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeScreenSize_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutDuration_MetaData[] = {
		{ "Category", "DecalData" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutDuration = { "FadeOutDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, FadeOutDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutDelay_MetaData[] = {
		{ "Category", "DecalData" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutDelay = { "FadeOutDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, FadeOutDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutDelay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeInDuration_MetaData[] = {
		{ "Category", "DecalData" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeInDuration = { "FadeInDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, FadeInDuration), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeInDuration_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeInDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeInDelay_MetaData[] = {
		{ "Category", "DecalData" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeInDelay = { "FadeInDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDecalData, FadeInDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeInDelay_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeInDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDecalData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_Material,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_SortOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_DestroyOwnerAfterFade,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeOutDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeInDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDecalData_Statics::NewProp_FadeInDelay,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDecalData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SplineObjects,
		nullptr,
		&NewStructOps,
		"DecalData",
		sizeof(FDecalData),
		alignof(FDecalData),
		Z_Construct_UScriptStruct_FDecalData_Statics::PropPointers,
		ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDecalData_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FDecalData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDecalData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDecalData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SplineObjects();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DecalData"), sizeof(FDecalData), Get_Z_Construct_UScriptStruct_FDecalData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDecalData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDecalData_Hash() { return 3752839094U; }
	void ASplineObjectsActor::StaticRegisterNativesASplineObjectsActor()
	{
		UClass* Class = ASplineObjectsActor::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddMultipleActor", &ASplineObjectsActor::execAddMultipleActor },
			{ "AddMultipleDecal", &ASplineObjectsActor::execAddMultipleDecal },
			{ "AddMultipleInstance", &ASplineObjectsActor::execAddMultipleInstance },
			{ "CreateObject", &ASplineObjectsActor::execCreateObject },
			{ "CreateObjectOnOverlapSphere", &ASplineObjectsActor::execCreateObjectOnOverlapSphere },
			{ "CreateObjects", &ASplineObjectsActor::execCreateObjects },
			{ "CreateObjectsAlongTheSurface", &ASplineObjectsActor::execCreateObjectsAlongTheSurface },
			{ "CreateSnappingObject", &ASplineObjectsActor::execCreateSnappingObject },
			{ "DecalTransformFollow", &ASplineObjectsActor::execDecalTransformFollow },
			{ "GetActors", &ASplineObjectsActor::execGetActors },
			{ "GetInstancedStaticMeshes", &ASplineObjectsActor::execGetInstancedStaticMeshes },
			{ "Initialize", &ASplineObjectsActor::execInitialize },
			{ "MeshTransformFollow", &ASplineObjectsActor::execMeshTransformFollow },
			{ "SetArrow", &ASplineObjectsActor::execSetArrow },
			{ "SnapSplinePoint", &ASplineObjectsActor::execSnapSplinePoint },
			{ "UpdateLocation", &ASplineObjectsActor::execUpdateLocation },
			{ "UpdateRotation", &ASplineObjectsActor::execUpdateRotation },
			{ "UpdateScale", &ASplineObjectsActor::execUpdateScale },
			{ "UpdateSettings", &ASplineObjectsActor::execUpdateSettings },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor_Statics
	{
		struct SplineObjectsActor_eventAddMultipleActor_Parms
		{
			FTransform _transform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor_Statics::NewProp__transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor_Statics::NewProp__transform = { "_transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventAddMultipleActor_Parms, _transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor_Statics::NewProp__transform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor_Statics::NewProp__transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor_Statics::NewProp__transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "AddMultipleActor", sizeof(SplineObjectsActor_eventAddMultipleActor_Parms), Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal_Statics
	{
		struct SplineObjectsActor_eventAddMultipleDecal_Parms
		{
			FTransform _transform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal_Statics::NewProp__transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal_Statics::NewProp__transform = { "_transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventAddMultipleDecal_Parms, _transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal_Statics::NewProp__transform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal_Statics::NewProp__transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal_Statics::NewProp__transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "AddMultipleDecal", sizeof(SplineObjectsActor_eventAddMultipleDecal_Parms), Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance_Statics
	{
		struct SplineObjectsActor_eventAddMultipleInstance_Parms
		{
			FTransform _transform;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__transform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__transform;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance_Statics::NewProp__transform_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance_Statics::NewProp__transform = { "_transform", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventAddMultipleInstance_Parms, _transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance_Statics::NewProp__transform_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance_Statics::NewProp__transform_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance_Statics::NewProp__transform,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "AddMultipleInstance", sizeof(SplineObjectsActor_eventAddMultipleInstance_Parms), Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics
	{
		struct SplineObjectsActor_eventCreateObject_Parms
		{
			FVector _direction;
			FVector _location;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__location;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics::NewProp__location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics::NewProp__location = { "_location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventCreateObject_Parms, _location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics::NewProp__location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics::NewProp__location_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventCreateObject_Parms, _direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics::NewProp__location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics::NewProp__direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "CreateObject", sizeof(SplineObjectsActor_eventCreateObject_Parms), Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_CreateObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_CreateObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics
	{
		struct SplineObjectsActor_eventCreateObjectOnOverlapSphere_Parms
		{
			FVector _offset;
			FVector _location;
			FVector _direction;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__offset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SplineObjectsActor_eventCreateObjectOnOverlapSphere_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineObjectsActor_eventCreateObjectOnOverlapSphere_Parms), &Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventCreateObjectOnOverlapSphere_Parms, _direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp__location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp__location = { "_location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventCreateObjectOnOverlapSphere_Parms, _location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp__location_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp__location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp__offset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp__offset = { "_offset", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventCreateObjectOnOverlapSphere_Parms, _offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp__offset_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp__offset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp__direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp__location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::NewProp__offset,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "CreateObjectOnOverlapSphere", sizeof(SplineObjectsActor_eventCreateObjectOnOverlapSphere_Parms), Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_CreateObjects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_CreateObjects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_CreateObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "CreateObjects", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_CreateObjects_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_CreateObjects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_CreateObjects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_CreateObjects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_CreateObjectsAlongTheSurface_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_CreateObjectsAlongTheSurface_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_CreateObjectsAlongTheSurface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "CreateObjectsAlongTheSurface", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_CreateObjectsAlongTheSurface_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_CreateObjectsAlongTheSurface_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_CreateObjectsAlongTheSurface()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_CreateObjectsAlongTheSurface_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics
	{
		struct SplineObjectsActor_eventCreateSnappingObject_Parms
		{
			FHitResult _hit;
			FVector _direction;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventCreateSnappingObject_Parms, _direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics::NewProp__hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics::NewProp__hit = { "_hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventCreateSnappingObject_Parms, _hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics::NewProp__hit_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics::NewProp__hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics::NewProp__direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics::NewProp__hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "CreateSnappingObject", sizeof(SplineObjectsActor_eventCreateSnappingObject_Parms), Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics
	{
		struct SplineObjectsActor_eventDecalTransformFollow_Parms
		{
			FVector _direction;
			FVector _normal;
			FTransform _transform;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::NewProp__transform = { "_transform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventDecalTransformFollow_Parms, _transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::NewProp__normal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::NewProp__normal = { "_normal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventDecalTransformFollow_Parms, _normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::NewProp__normal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::NewProp__normal_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventDecalTransformFollow_Parms, _direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::NewProp__transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::NewProp__normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::NewProp__direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "DecalTransformFollow", sizeof(SplineObjectsActor_eventDecalTransformFollow_Parms), Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_GetActors_Statics
	{
		struct SplineObjectsActor_eventGetActors_Parms
		{
			TArray<AActor*> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASplineObjectsActor_GetActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventGetActors_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASplineObjectsActor_GetActors_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineObjectsActor_GetActors_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_GetActors_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_GetActors_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_GetActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_GetActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "GetActors", sizeof(SplineObjectsActor_eventGetActors_Parms), Z_Construct_UFunction_ASplineObjectsActor_GetActors_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_GetActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_GetActors_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_GetActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_GetActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_GetActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics
	{
		struct SplineObjectsActor_eventGetInstancedStaticMeshes_Parms
		{
			TArray<UInstancedStaticMeshComponent*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventGetInstancedStaticMeshes_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics::NewProp_ReturnValue_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "GetInstancedStaticMeshes", sizeof(SplineObjectsActor_eventGetInstancedStaticMeshes_Parms), Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_Initialize_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_Initialize_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "Initialize", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_Initialize_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics
	{
		struct SplineObjectsActor_eventMeshTransformFollow_Parms
		{
			FVector _direction;
			FVector _normal;
			FTransform _transform;
			bool _isAlignToSurface;
		};
		static void NewProp__isAlignToSurface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isAlignToSurface;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__transform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__normal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__normal;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__direction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::NewProp__isAlignToSurface_SetBit(void* Obj)
	{
		((SplineObjectsActor_eventMeshTransformFollow_Parms*)Obj)->_isAlignToSurface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::NewProp__isAlignToSurface = { "_isAlignToSurface", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SplineObjectsActor_eventMeshTransformFollow_Parms), &Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::NewProp__isAlignToSurface_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::NewProp__transform = { "_transform", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventMeshTransformFollow_Parms, _transform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::NewProp__normal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::NewProp__normal = { "_normal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventMeshTransformFollow_Parms, _normal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::NewProp__normal_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::NewProp__normal_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::NewProp__direction = { "_direction", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventMeshTransformFollow_Parms, _direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::NewProp__isAlignToSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::NewProp__transform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::NewProp__normal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::NewProp__direction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "MeshTransformFollow", sizeof(SplineObjectsActor_eventMeshTransformFollow_Parms), Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics
	{
		struct SplineObjectsActor_eventSetArrow_Parms
		{
			UArrowComponent* _arrow;
			FLinearColor _color;
			float _size;
			float _screenSize;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__screenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__screenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__color_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__color;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__arrow_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__arrow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__screenSize_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__screenSize = { "_screenSize", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventSetArrow_Parms, _screenSize), METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__screenSize_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__screenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__size = { "_size", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventSetArrow_Parms, _size), METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__size_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__color_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__color = { "_color", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventSetArrow_Parms, _color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__color_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__color_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__arrow_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__arrow = { "_arrow", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SplineObjectsActor_eventSetArrow_Parms, _arrow), Z_Construct_UClass_UArrowComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__arrow_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__arrow_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__screenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__color,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::NewProp__arrow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "SetArrow", sizeof(SplineObjectsActor_eventSetArrow_Parms), Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C40401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_SetArrow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_SetArrow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_SnapSplinePoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_SnapSplinePoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_SnapSplinePoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "SnapSplinePoint", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_SnapSplinePoint_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_SnapSplinePoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_SnapSplinePoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_SnapSplinePoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_UpdateLocation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_UpdateLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_UpdateLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "UpdateLocation", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_UpdateLocation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_UpdateLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_UpdateLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_UpdateLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_UpdateRotation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_UpdateRotation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_UpdateRotation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "UpdateRotation", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_UpdateRotation_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_UpdateRotation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_UpdateRotation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_UpdateRotation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_UpdateScale_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_UpdateScale_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_UpdateScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "UpdateScale", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_UpdateScale_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_UpdateScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_UpdateScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_UpdateScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASplineObjectsActor_UpdateSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASplineObjectsActor_UpdateSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASplineObjectsActor_UpdateSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASplineObjectsActor, nullptr, "UpdateSettings", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASplineObjectsActor_UpdateSettings_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASplineObjectsActor_UpdateSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASplineObjectsActor_UpdateSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASplineObjectsActor_UpdateSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASplineObjectsActor_NoRegister()
	{
		return ASplineObjectsActor::StaticClass();
	}
	struct Z_Construct_UClass_ASplineObjectsActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Actors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Actors_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedStaticMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InstancedStaticMeshes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstancedStaticMeshes_Inner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstancedStaticMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_spline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Size;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScreenSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColorDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowArrows_MetaData[];
#endif
		static void NewProp_ShowArrows_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowArrows;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisableVisual_MetaData[];
#endif
		static void NewProp_DisableVisual_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DisableVisual;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecalMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DecalMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Decals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Decals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Decals_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInRandomOrderDecal_MetaData[];
#endif
		static void NewProp_IsInRandomOrderDecal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInRandomOrderDecal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDescendingDecal_MetaData[];
#endif
		static void NewProp_IsDescendingDecal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDescendingDecal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasOneUniqueMaterialDecal_MetaData[];
#endif
		static void NewProp_HasOneUniqueMaterialDecal_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasOneUniqueMaterialDecal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlueprintActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlueprintActors;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_BlueprintActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInRandomOrderActor_MetaData[];
#endif
		static void NewProp_IsInRandomOrderActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInRandomOrderActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDescendingActor_MetaData[];
#endif
		static void NewProp_IsDescendingActor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDescendingActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StaticMeshes;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInRandomOrderStaticMesh_MetaData[];
#endif
		static void NewProp_IsInRandomOrderStaticMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInRandomOrderStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDescendingStaticMesh_MetaData[];
#endif
		static void NewProp_IsDescendingStaticMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDescendingStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasOneUniqueMaterialStaticMesh_MetaData[];
#endif
		static void NewProp_HasOneUniqueMaterialStaticMesh_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasOneUniqueMaterialStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxScaleRandom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxScaleRandom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minScaleRandom_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minScaleRandom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxScaleConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxScaleConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minScaleConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_minScaleConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_curveScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_curveScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsScaleUseCurve_MetaData[];
#endif
		static void NewProp_IsScaleUseCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsScaleUseCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsScaleRandom_MetaData[];
#endif
		static void NewProp_IsScaleRandom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsScaleRandom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsScaleBetweenTwoConstants_MetaData[];
#endif
		static void NewProp_IsScaleBetweenTwoConstants_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsScaleBetweenTwoConstants;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsScaleConstant_MetaData[];
#endif
		static void NewProp_IsScaleConstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsScaleConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxRotationRandom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_maxRotationRandom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minRotationRandom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_minRotationRandom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxRotationConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_maxRotationConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minRotationConstant_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_minRotationConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_curveRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_curveRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Rotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRotationUseCurve_MetaData[];
#endif
		static void NewProp_IsRotationUseCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRotationUseCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRotationRandom_MetaData[];
#endif
		static void NewProp_IsRotationRandom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRotationRandom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRotationBetweenTwoConstants_MetaData[];
#endif
		static void NewProp_IsRotationBetweenTwoConstants_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRotationBetweenTwoConstants;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsRotationConstant_MetaData[];
#endif
		static void NewProp_IsRotationConstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsRotationConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_curveOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_curveOffset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_maxOffsetRandom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_maxOffsetRandom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_minOffsetRandom_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_minOffsetRandom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocationUseCurve_MetaData[];
#endif
		static void NewProp_IsLocationUseCurve_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocationUseCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocationRandom_MetaData[];
#endif
		static void NewProp_IsLocationRandom_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocationRandom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLocationConstant_MetaData[];
#endif
		static void NewProp_IsLocationConstant_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLocationConstant;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Space_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Space;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SnappingRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SnappingRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAlignToSurface_MetaData[];
#endif
		static void NewProp_IsAlignToSurface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAlignToSurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSnapping_MetaData[];
#endif
		static void NewProp_IsSnapping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSnapping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InverseDirection_MetaData[];
#endif
		static void NewProp_InverseDirection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InverseDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FollowDirection_MetaData[];
#endif
		static void NewProp_FollowDirection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FollowDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Close_MetaData[];
#endif
		static void NewProp_Close_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Close;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CurrentIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointsNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_PointsNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentOffset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentOffset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASplineObjectsActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_SplineObjects,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASplineObjectsActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASplineObjectsActor_AddMultipleActor, "AddMultipleActor" }, // 1576434242
		{ &Z_Construct_UFunction_ASplineObjectsActor_AddMultipleDecal, "AddMultipleDecal" }, // 2066203950
		{ &Z_Construct_UFunction_ASplineObjectsActor_AddMultipleInstance, "AddMultipleInstance" }, // 2118759611
		{ &Z_Construct_UFunction_ASplineObjectsActor_CreateObject, "CreateObject" }, // 4117478467
		{ &Z_Construct_UFunction_ASplineObjectsActor_CreateObjectOnOverlapSphere, "CreateObjectOnOverlapSphere" }, // 2630550961
		{ &Z_Construct_UFunction_ASplineObjectsActor_CreateObjects, "CreateObjects" }, // 1532389499
		{ &Z_Construct_UFunction_ASplineObjectsActor_CreateObjectsAlongTheSurface, "CreateObjectsAlongTheSurface" }, // 1780850054
		{ &Z_Construct_UFunction_ASplineObjectsActor_CreateSnappingObject, "CreateSnappingObject" }, // 3452382654
		{ &Z_Construct_UFunction_ASplineObjectsActor_DecalTransformFollow, "DecalTransformFollow" }, // 3926560464
		{ &Z_Construct_UFunction_ASplineObjectsActor_GetActors, "GetActors" }, // 2588956549
		{ &Z_Construct_UFunction_ASplineObjectsActor_GetInstancedStaticMeshes, "GetInstancedStaticMeshes" }, // 1677284845
		{ &Z_Construct_UFunction_ASplineObjectsActor_Initialize, "Initialize" }, // 1797579558
		{ &Z_Construct_UFunction_ASplineObjectsActor_MeshTransformFollow, "MeshTransformFollow" }, // 903742500
		{ &Z_Construct_UFunction_ASplineObjectsActor_SetArrow, "SetArrow" }, // 2113762149
		{ &Z_Construct_UFunction_ASplineObjectsActor_SnapSplinePoint, "SnapSplinePoint" }, // 2986263702
		{ &Z_Construct_UFunction_ASplineObjectsActor_UpdateLocation, "UpdateLocation" }, // 991912278
		{ &Z_Construct_UFunction_ASplineObjectsActor_UpdateRotation, "UpdateRotation" }, // 3548999176
		{ &Z_Construct_UFunction_ASplineObjectsActor_UpdateScale, "UpdateScale" }, // 2255953432
		{ &Z_Construct_UFunction_ASplineObjectsActor_UpdateSettings, "UpdateSettings" }, // 2163696881
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SplineObjectsActor.h" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Actors_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Actors = { "Actors", nullptr, (EPropertyFlags)0x004000800002000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, Actors), METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Actors_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Actors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Actors_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Actors_Inner = { "Actors", nullptr, (EPropertyFlags)0x00020000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Actors_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Actors_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InstancedStaticMeshes_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InstancedStaticMeshes = { "InstancedStaticMeshes", nullptr, (EPropertyFlags)0x004000800002000d, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, InstancedStaticMeshes), METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InstancedStaticMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InstancedStaticMeshes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InstancedStaticMeshes_Inner_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InstancedStaticMeshes_Inner = { "InstancedStaticMeshes", nullptr, (EPropertyFlags)0x00020000000a0008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInstancedStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InstancedStaticMeshes_Inner_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InstancedStaticMeshes_Inner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_spline_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Components Settings" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_spline = { "spline", nullptr, (EPropertyFlags)0x004000000008001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_spline_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_spline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "Debug Settings" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, Size), METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Size_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Size_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ScreenSize_MetaData[] = {
		{ "Category", "Debug Settings" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ScreenSize = { "ScreenSize", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, ScreenSize), METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ScreenSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ScreenSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ColorNormal_MetaData[] = {
		{ "Category", "Debug Settings" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ColorNormal = { "ColorNormal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, ColorNormal), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ColorNormal_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ColorNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ColorDirection_MetaData[] = {
		{ "Category", "Debug Settings" },
		{ "HideAlphaChannel", "" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ColorDirection = { "ColorDirection", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, ColorDirection), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ColorDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ColorDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ShowArrows_MetaData[] = {
		{ "Category", "Debug Settings" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
		{ "ToolTip", "/Debug" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ShowArrows_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->ShowArrows = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ShowArrows = { "ShowArrows", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ShowArrows_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ShowArrows_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ShowArrows_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_DisableVisual_MetaData[] = {
		{ "Category", "Optimization" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_DisableVisual_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->DisableVisual = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_DisableVisual = { "DisableVisual", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_DisableVisual_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_DisableVisual_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_DisableVisual_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_DecalMaterial_MetaData[] = {
		{ "Category", "Decals Spawn Settings" },
		{ "EditCondition", "HasOneUniqueMaterialDecal" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_DecalMaterial = { "DecalMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, DecalMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_DecalMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_DecalMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Decals_MetaData[] = {
		{ "Category", "Decals Spawn Settings" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Decals = { "Decals", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, Decals), METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Decals_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Decals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Decals_Inner = { "Decals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDecalData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderDecal_MetaData[] = {
		{ "Category", "Decals Spawn Settings" },
		{ "DisplayName", "Is In Random Order" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderDecal_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsInRandomOrderDecal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderDecal = { "IsInRandomOrderDecal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderDecal_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderDecal_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderDecal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingDecal_MetaData[] = {
		{ "Category", "Decals Spawn Settings" },
		{ "DisplayName", "Is Descending" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingDecal_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsDescendingDecal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingDecal = { "IsDescendingDecal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingDecal_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingDecal_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingDecal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_HasOneUniqueMaterialDecal_MetaData[] = {
		{ "Category", "Decals Spawn Settings" },
		{ "DisplayName", "Has One Unique Material" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
		{ "ToolTip", "Decal" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_HasOneUniqueMaterialDecal_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->HasOneUniqueMaterialDecal = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_HasOneUniqueMaterialDecal = { "HasOneUniqueMaterialDecal", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_HasOneUniqueMaterialDecal_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_HasOneUniqueMaterialDecal_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_HasOneUniqueMaterialDecal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_BlueprintActors_MetaData[] = {
		{ "Category", "Actors Spawn Settings" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_BlueprintActors = { "BlueprintActors", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, BlueprintActors), METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_BlueprintActors_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_BlueprintActors_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_BlueprintActors_Inner = { "BlueprintActors", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderActor_MetaData[] = {
		{ "Category", "Actors Spawn Settings" },
		{ "DisplayName", "Is In Random Order" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderActor_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsInRandomOrderActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderActor = { "IsInRandomOrderActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingActor_MetaData[] = {
		{ "Category", "Actors Spawn Settings" },
		{ "DisplayName", "Is Descending" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
		{ "ToolTip", "Actors/" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingActor_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsDescendingActor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingActor = { "IsDescendingActor", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingActor_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_StaticMeshMaterial_MetaData[] = {
		{ "Category", "StaticMeshes Spawn Settings" },
		{ "EditCondition", "HasOneUniqueMaterialStaticMesh" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_StaticMeshMaterial = { "StaticMeshMaterial", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, StaticMeshMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_StaticMeshMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_StaticMeshMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_StaticMeshes_MetaData[] = {
		{ "Category", "StaticMeshes Spawn Settings" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_StaticMeshes = { "StaticMeshes", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, StaticMeshes), METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_StaticMeshes_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_StaticMeshes_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_StaticMeshes_Inner = { "StaticMeshes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStaticMeshData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderStaticMesh_MetaData[] = {
		{ "Category", "StaticMeshes Spawn Settings" },
		{ "DisplayName", "Is In Random Order" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderStaticMesh_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsInRandomOrderStaticMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderStaticMesh = { "IsInRandomOrderStaticMesh", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderStaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingStaticMesh_MetaData[] = {
		{ "Category", "StaticMeshes Spawn Settings" },
		{ "DisplayName", "Is Descending" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingStaticMesh_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsDescendingStaticMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingStaticMesh = { "IsDescendingStaticMesh", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingStaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_HasOneUniqueMaterialStaticMesh_MetaData[] = {
		{ "Category", "StaticMeshes Spawn Settings" },
		{ "DisplayName", "Has One Unique Material" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
		{ "ToolTip", "StaticMeshes/" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_HasOneUniqueMaterialStaticMesh_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->HasOneUniqueMaterialStaticMesh = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_HasOneUniqueMaterialStaticMesh = { "HasOneUniqueMaterialStaticMesh", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_HasOneUniqueMaterialStaticMesh_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_HasOneUniqueMaterialStaticMesh_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_HasOneUniqueMaterialStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxScaleRandom_MetaData[] = {
		{ "Category", "Scale Settings" },
		{ "DisplayName", "Max Scale" },
		{ "EditCondition", "IsScaleRandom" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxScaleRandom = { "maxScaleRandom", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, maxScaleRandom), METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxScaleRandom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxScaleRandom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minScaleRandom_MetaData[] = {
		{ "Category", "Scale Settings" },
		{ "DisplayName", "Min Scale" },
		{ "EditCondition", "IsScaleRandom" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minScaleRandom = { "minScaleRandom", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, minScaleRandom), METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minScaleRandom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minScaleRandom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxScaleConstant_MetaData[] = {
		{ "Category", "Scale Settings" },
		{ "DisplayName", "Max Scale" },
		{ "EditCondition", "IsScaleBetweenTwoConstants" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxScaleConstant = { "maxScaleConstant", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, maxScaleConstant), METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxScaleConstant_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxScaleConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minScaleConstant_MetaData[] = {
		{ "Category", "Scale Settings" },
		{ "DisplayName", "Min Scale" },
		{ "EditCondition", "IsScaleBetweenTwoConstants" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minScaleConstant = { "minScaleConstant", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, minScaleConstant), METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minScaleConstant_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minScaleConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_curveScale_MetaData[] = {
		{ "Category", "Scale Settings" },
		{ "DisplayName", "Curve" },
		{ "EditCondition", "IsScaleUseCurve" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_curveScale = { "curveScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, curveScale), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_curveScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_curveScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Scale_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Scale Settings" },
		{ "EditCondition", "IsScaleConstant" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, Scale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Scale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleUseCurve_MetaData[] = {
		{ "Category", "Scale Settings" },
		{ "DisplayName", "Using Curve" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleUseCurve_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsScaleUseCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleUseCurve = { "IsScaleUseCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleUseCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleUseCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleUseCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleRandom_MetaData[] = {
		{ "Category", "Scale Settings" },
		{ "DisplayName", "Random In Range" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleRandom_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsScaleRandom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleRandom = { "IsScaleRandom", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleRandom_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleRandom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleRandom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleBetweenTwoConstants_MetaData[] = {
		{ "Category", "Scale Settings" },
		{ "DisplayName", "Lerp In Range" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleBetweenTwoConstants_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsScaleBetweenTwoConstants = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleBetweenTwoConstants = { "IsScaleBetweenTwoConstants", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleBetweenTwoConstants_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleBetweenTwoConstants_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleBetweenTwoConstants_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleConstant_MetaData[] = {
		{ "Category", "Scale Settings" },
		{ "DisplayName", "Constant" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
		{ "ToolTip", "/Scale" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleConstant_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsScaleConstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleConstant = { "IsScaleConstant", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleConstant_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleConstant_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxRotationRandom_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Rotation Settings" },
		{ "DisplayName", "Max Rotation" },
		{ "EditCondition", "IsRotationRandom" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxRotationRandom = { "maxRotationRandom", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, maxRotationRandom), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxRotationRandom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxRotationRandom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minRotationRandom_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Rotation Settings" },
		{ "DisplayName", "Min Rotation" },
		{ "EditCondition", "IsRotationRandom" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minRotationRandom = { "minRotationRandom", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, minRotationRandom), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minRotationRandom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minRotationRandom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxRotationConstant_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Rotation Settings" },
		{ "DisplayName", "Max Rotation" },
		{ "EditCondition", "IsRotationBetweenTwoConstants" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxRotationConstant = { "maxRotationConstant", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, maxRotationConstant), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxRotationConstant_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxRotationConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minRotationConstant_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Rotation Settings" },
		{ "DisplayName", "Min Rotation" },
		{ "EditCondition", "IsRotationBetweenTwoConstants" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minRotationConstant = { "minRotationConstant", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, minRotationConstant), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minRotationConstant_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minRotationConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_curveRotation_MetaData[] = {
		{ "Category", "Rotation Settings" },
		{ "DisplayName", "Curve" },
		{ "EditCondition", "IsRotationUseCurve" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_curveRotation = { "curveRotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, curveRotation), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_curveRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_curveRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Rotation_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Rotation Settings" },
		{ "EditCondition", "IsRotationConstant" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Rotation = { "Rotation", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Rotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Rotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationUseCurve_MetaData[] = {
		{ "Category", "Rotation Settings" },
		{ "DisplayName", "Using Curve" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationUseCurve_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsRotationUseCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationUseCurve = { "IsRotationUseCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationUseCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationUseCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationUseCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationRandom_MetaData[] = {
		{ "Category", "Rotation Settings" },
		{ "DisplayName", "Random In Range" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationRandom_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsRotationRandom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationRandom = { "IsRotationRandom", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationRandom_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationRandom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationRandom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationBetweenTwoConstants_MetaData[] = {
		{ "Category", "Rotation Settings" },
		{ "DisplayName", "Lerp In Range" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationBetweenTwoConstants_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsRotationBetweenTwoConstants = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationBetweenTwoConstants = { "IsRotationBetweenTwoConstants", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationBetweenTwoConstants_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationBetweenTwoConstants_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationBetweenTwoConstants_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationConstant_MetaData[] = {
		{ "Category", "Rotation Settings" },
		{ "DisplayName", "Constant" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
		{ "ToolTip", "Rotation" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationConstant_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsRotationConstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationConstant = { "IsRotationConstant", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationConstant_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationConstant_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_curveOffset_MetaData[] = {
		{ "Category", "Location Settings" },
		{ "DisplayName", "Curve" },
		{ "EditCondition", "IsLocationUseCurve" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_curveOffset = { "curveOffset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, curveOffset), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_curveOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_curveOffset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxOffsetRandom_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Location Settings" },
		{ "EditCondition", "IsLocationRandom" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxOffsetRandom = { "maxOffsetRandom", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, maxOffsetRandom), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxOffsetRandom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxOffsetRandom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minOffsetRandom_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Location Settings" },
		{ "EditCondition", "IsLocationRandom" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minOffsetRandom = { "minOffsetRandom", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, minOffsetRandom), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minOffsetRandom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minOffsetRandom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Offset_MetaData[] = {
		{ "AllowPreserveRatio", "" },
		{ "Category", "Location Settings" },
		{ "EditCondition", "IsLocationConstant" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Offset = { "Offset", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, Offset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Offset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Offset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationUseCurve_MetaData[] = {
		{ "Category", "Location Settings" },
		{ "DisplayName", "Using Curve" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationUseCurve_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsLocationUseCurve = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationUseCurve = { "IsLocationUseCurve", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationUseCurve_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationUseCurve_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationUseCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationRandom_MetaData[] = {
		{ "Category", "Location Settings" },
		{ "DisplayName", "Random In Range" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationRandom_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsLocationRandom = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationRandom = { "IsLocationRandom", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationRandom_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationRandom_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationRandom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationConstant_MetaData[] = {
		{ "Category", "Location Settings" },
		{ "DisplayName", "Constant" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
		{ "ToolTip", "/Location/" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationConstant_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsLocationConstant = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationConstant = { "IsLocationConstant", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationConstant_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationConstant_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationConstant_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Space_MetaData[] = {
		{ "Category", "Spline Settings" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Space = { "Space", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, Space), METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Space_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Space_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_SnappingRadius_MetaData[] = {
		{ "Category", "Spline Settings" },
		{ "EditCondition", "IsSnapping" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_SnappingRadius = { "SnappingRadius", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, SnappingRadius), METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_SnappingRadius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_SnappingRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsAlignToSurface_MetaData[] = {
		{ "Category", "Spline Settings" },
		{ "EditCondition", "IsSnapping" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsAlignToSurface_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsAlignToSurface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsAlignToSurface = { "IsAlignToSurface", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsAlignToSurface_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsAlignToSurface_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsAlignToSurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsSnapping_MetaData[] = {
		{ "Category", "Spline Settings" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsSnapping_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->IsSnapping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsSnapping = { "IsSnapping", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsSnapping_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsSnapping_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsSnapping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InverseDirection_MetaData[] = {
		{ "Category", "Spline Settings" },
		{ "EditCondition", "FollowDirection" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InverseDirection_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->InverseDirection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InverseDirection = { "InverseDirection", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InverseDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InverseDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InverseDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_FollowDirection_MetaData[] = {
		{ "Category", "Spline Settings" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_FollowDirection_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->FollowDirection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_FollowDirection = { "FollowDirection", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_FollowDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_FollowDirection_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_FollowDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Close_MetaData[] = {
		{ "Category", "Spline Settings" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	void Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Close_SetBit(void* Obj)
	{
		((ASplineObjectsActor*)Obj)->Close = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Close = { "Close", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASplineObjectsActor), &Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Close_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Close_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Close_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "Spline Settings" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
		{ "ToolTip", "Spline/" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, Type), Z_Construct_UEnum_SplineObjects_ESplineType, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Type_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentIndex_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SplineObjectsActor" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, CurrentIndex), METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentIndex_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_PointsNumber_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SplineObjectsActor" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_PointsNumber = { "PointsNumber", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, PointsNumber), METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_PointsNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_PointsNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentRotation_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SplineObjectsActor" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentRotation = { "CurrentRotation", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, CurrentRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentRotation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentScale_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SplineObjectsActor" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentScale = { "CurrentScale", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, CurrentScale), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentScale_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentOffset_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "SplineObjectsActor" },
		{ "ModuleRelativePath", "Public/SplineObjectsActor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentOffset = { "CurrentOffset", nullptr, (EPropertyFlags)0x0040000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASplineObjectsActor, CurrentOffset), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentOffset_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentOffset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASplineObjectsActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Actors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Actors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InstancedStaticMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InstancedStaticMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_spline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Size,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ScreenSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ColorNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ColorDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_ShowArrows,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_DisableVisual,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_DecalMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Decals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Decals_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderDecal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingDecal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_HasOneUniqueMaterialDecal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_BlueprintActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_BlueprintActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_StaticMeshMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_StaticMeshes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_StaticMeshes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsInRandomOrderStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsDescendingStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_HasOneUniqueMaterialStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxScaleRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minScaleRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxScaleConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minScaleConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_curveScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleUseCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleBetweenTwoConstants,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsScaleConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxRotationRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minRotationRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxRotationConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minRotationConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_curveRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationUseCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationBetweenTwoConstants,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsRotationConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_curveOffset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_maxOffsetRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_minOffsetRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Offset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationUseCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationRandom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsLocationConstant,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Space,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_SnappingRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsAlignToSurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_IsSnapping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_InverseDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_FollowDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Close,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_Type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_PointsNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASplineObjectsActor_Statics::NewProp_CurrentOffset,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASplineObjectsActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASplineObjectsActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASplineObjectsActor_Statics::ClassParams = {
		&ASplineObjectsActor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASplineObjectsActor_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ASplineObjectsActor_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASplineObjectsActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASplineObjectsActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASplineObjectsActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASplineObjectsActor, 3917378267);
	template<> SPLINEOBJECTS_API UClass* StaticClass<ASplineObjectsActor>()
	{
		return ASplineObjectsActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASplineObjectsActor(Z_Construct_UClass_ASplineObjectsActor, &ASplineObjectsActor::StaticClass, TEXT("/Script/SplineObjects"), TEXT("ASplineObjectsActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASplineObjectsActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
