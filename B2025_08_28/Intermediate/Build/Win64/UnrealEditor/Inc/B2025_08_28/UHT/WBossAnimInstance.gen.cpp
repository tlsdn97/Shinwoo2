// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WBossAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWBossAnimInstance() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_UWBossAnimInstance();
B2025_08_28_API UClass* Z_Construct_UClass_UWBossAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWBossAnimInstance
void UWBossAnimInstance::StaticRegisterNativesUWBossAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWBossAnimInstance);
UClass* Z_Construct_UClass_UWBossAnimInstance_NoRegister()
{
	return UWBossAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UWBossAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "WBossAnimInstance.h" },
		{ "ModuleRelativePath", "Public/WBossAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWBossAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWBossAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWBossAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWBossAnimInstance_Statics::ClassParams = {
	&UWBossAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWBossAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWBossAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWBossAnimInstance()
{
	if (!Z_Registration_Info_UClass_UWBossAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWBossAnimInstance.OuterSingleton, Z_Construct_UClass_UWBossAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWBossAnimInstance.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<UWBossAnimInstance>()
{
	return UWBossAnimInstance::StaticClass();
}
UWBossAnimInstance::UWBossAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWBossAnimInstance);
UWBossAnimInstance::~UWBossAnimInstance() {}
// End Class UWBossAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBossAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWBossAnimInstance, UWBossAnimInstance::StaticClass, TEXT("UWBossAnimInstance"), &Z_Registration_Info_UClass_UWBossAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWBossAnimInstance), 1894390177U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBossAnimInstance_h_858267105(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBossAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBossAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
