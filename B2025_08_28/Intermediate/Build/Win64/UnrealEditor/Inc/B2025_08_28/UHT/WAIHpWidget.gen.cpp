// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WAIHpWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWAIHpWidget() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_UWAIHpWidget();
B2025_08_28_API UClass* Z_Construct_UClass_UWAIHpWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWAIHpWidget
void UWAIHpWidget::StaticRegisterNativesUWAIHpWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWAIHpWidget);
UClass* Z_Construct_UClass_UWAIHpWidget_NoRegister()
{
	return UWAIHpWidget::StaticClass();
}
struct Z_Construct_UClass_UWAIHpWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WAIHpWidget.h" },
		{ "ModuleRelativePath", "Public/WAIHpWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWAIHpWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWAIHpWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWAIHpWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWAIHpWidget_Statics::ClassParams = {
	&UWAIHpWidget::StaticClass,
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
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWAIHpWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UWAIHpWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWAIHpWidget()
{
	if (!Z_Registration_Info_UClass_UWAIHpWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWAIHpWidget.OuterSingleton, Z_Construct_UClass_UWAIHpWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWAIHpWidget.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<UWAIHpWidget>()
{
	return UWAIHpWidget::StaticClass();
}
UWAIHpWidget::UWAIHpWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWAIHpWidget);
UWAIHpWidget::~UWAIHpWidget() {}
// End Class UWAIHpWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIHpWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWAIHpWidget, UWAIHpWidget::StaticClass, TEXT("UWAIHpWidget"), &Z_Registration_Info_UClass_UWAIHpWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWAIHpWidget), 3638167004U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIHpWidget_h_1983207413(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIHpWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIHpWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
