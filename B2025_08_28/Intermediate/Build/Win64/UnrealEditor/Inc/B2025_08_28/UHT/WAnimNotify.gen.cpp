// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WAnimNotify.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWAnimNotify() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_UWAnimNotify();
B2025_08_28_API UClass* Z_Construct_UClass_UWAnimNotify_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimNotify();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWAnimNotify
void UWAnimNotify::StaticRegisterNativesUWAnimNotify()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWAnimNotify);
UClass* Z_Construct_UClass_UWAnimNotify_NoRegister()
{
	return UWAnimNotify::StaticClass();
}
struct Z_Construct_UClass_UWAnimNotify_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "WAnimNotify.h" },
		{ "ModuleRelativePath", "Public/WAnimNotify.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWAnimNotify>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWAnimNotify_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimNotify,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWAnimNotify_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWAnimNotify_Statics::ClassParams = {
	&UWAnimNotify::StaticClass,
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
	0x001120A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWAnimNotify_Statics::Class_MetaDataParams), Z_Construct_UClass_UWAnimNotify_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWAnimNotify()
{
	if (!Z_Registration_Info_UClass_UWAnimNotify.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWAnimNotify.OuterSingleton, Z_Construct_UClass_UWAnimNotify_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWAnimNotify.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<UWAnimNotify>()
{
	return UWAnimNotify::StaticClass();
}
UWAnimNotify::UWAnimNotify(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWAnimNotify);
UWAnimNotify::~UWAnimNotify() {}
// End Class UWAnimNotify

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAnimNotify_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWAnimNotify, UWAnimNotify::StaticClass, TEXT("UWAnimNotify"), &Z_Registration_Info_UClass_UWAnimNotify, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWAnimNotify), 3497947104U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAnimNotify_h_1838731457(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAnimNotify_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAnimNotify_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
