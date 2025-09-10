// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWGameModeBase() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_AWGameModeBase();
B2025_08_28_API UClass* Z_Construct_UClass_AWGameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class AWGameModeBase
void AWGameModeBase::StaticRegisterNativesAWGameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWGameModeBase);
UClass* Z_Construct_UClass_AWGameModeBase_NoRegister()
{
	return AWGameModeBase::StaticClass();
}
struct Z_Construct_UClass_AWGameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "WGameModeBase.h" },
		{ "ModuleRelativePath", "Public/WGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWGameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWGameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWGameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWGameModeBase_Statics::ClassParams = {
	&AWGameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWGameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_AWGameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWGameModeBase()
{
	if (!Z_Registration_Info_UClass_AWGameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWGameModeBase.OuterSingleton, Z_Construct_UClass_AWGameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWGameModeBase.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<AWGameModeBase>()
{
	return AWGameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWGameModeBase);
AWGameModeBase::~AWGameModeBase() {}
// End Class AWGameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WGameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWGameModeBase, AWGameModeBase::StaticClass, TEXT("AWGameModeBase"), &Z_Registration_Info_UClass_AWGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWGameModeBase), 3974181294U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WGameModeBase_h_3594504300(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WGameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
