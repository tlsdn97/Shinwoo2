// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/PWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePWeapon() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_APWeapon();
B2025_08_28_API UClass* Z_Construct_UClass_APWeapon_NoRegister();
B2025_08_28_API UClass* Z_Construct_UClass_AWPlayer_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class APWeapon
void APWeapon::StaticRegisterNativesAPWeapon()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APWeapon);
UClass* Z_Construct_UClass_APWeapon_NoRegister()
{
	return APWeapon::StaticClass();
}
struct Z_Construct_UClass_APWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PWeapon.h" },
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentOwner_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlacementTransform_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentOwner;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlacementTransform;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APWeapon_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APWeapon, Root), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APWeapon_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APWeapon, Mesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APWeapon_Statics::NewProp_CurrentOwner = { "CurrentOwner", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APWeapon, CurrentOwner), Z_Construct_UClass_AWPlayer_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentOwner_MetaData), NewProp_CurrentOwner_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_APWeapon_Statics::NewProp_PlacementTransform = { "PlacementTransform", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APWeapon, PlacementTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlacementTransform_MetaData), NewProp_PlacementTransform_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APWeapon_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APWeapon_Statics::NewProp_Mesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APWeapon_Statics::NewProp_CurrentOwner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APWeapon_Statics::NewProp_PlacementTransform,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APWeapon_Statics::ClassParams = {
	&APWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_APWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_APWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_APWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APWeapon()
{
	if (!Z_Registration_Info_UClass_APWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APWeapon.OuterSingleton, Z_Construct_UClass_APWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APWeapon.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<APWeapon>()
{
	return APWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APWeapon);
APWeapon::~APWeapon() {}
// End Class APWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_PWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APWeapon, APWeapon::StaticClass, TEXT("APWeapon"), &Z_Registration_Info_UClass_APWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APWeapon), 4150969551U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_PWeapon_h_2227709522(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_PWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_PWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
