// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WAIAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWAIAnimInstance() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_UWAIAnimInstance();
B2025_08_28_API UClass* Z_Construct_UClass_UWAIAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWAIAnimInstance
void UWAIAnimInstance::StaticRegisterNativesUWAIAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWAIAnimInstance);
UClass* Z_Construct_UClass_UWAIAnimInstance_NoRegister()
{
	return UWAIAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UWAIAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "WAIAnimInstance.h" },
		{ "ModuleRelativePath", "Public/WAIAnimInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWAIAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWAIAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWAIAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWAIAnimInstance_Statics::ClassParams = {
	&UWAIAnimInstance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWAIAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWAIAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWAIAnimInstance()
{
	if (!Z_Registration_Info_UClass_UWAIAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWAIAnimInstance.OuterSingleton, Z_Construct_UClass_UWAIAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWAIAnimInstance.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<UWAIAnimInstance>()
{
	return UWAIAnimInstance::StaticClass();
}
UWAIAnimInstance::UWAIAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWAIAnimInstance);
UWAIAnimInstance::~UWAIAnimInstance() {}
// End Class UWAIAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWAIAnimInstance, UWAIAnimInstance::StaticClass, TEXT("UWAIAnimInstance"), &Z_Registration_Info_UClass_UWAIAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWAIAnimInstance), 3110906470U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIAnimInstance_h_170008081(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
