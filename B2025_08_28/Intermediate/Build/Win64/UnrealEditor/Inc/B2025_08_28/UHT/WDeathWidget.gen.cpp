// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WDeathWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWDeathWidget() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_UWDeathWidget();
B2025_08_28_API UClass* Z_Construct_UClass_UWDeathWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWDeathWidget
void UWDeathWidget::StaticRegisterNativesUWDeathWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWDeathWidget);
UClass* Z_Construct_UClass_UWDeathWidget_NoRegister()
{
	return UWDeathWidget::StaticClass();
}
struct Z_Construct_UClass_UWDeathWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WDeathWidget.h" },
		{ "ModuleRelativePath", "Public/WDeathWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWDeathWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWDeathWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWDeathWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWDeathWidget_Statics::ClassParams = {
	&UWDeathWidget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWDeathWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UWDeathWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWDeathWidget()
{
	if (!Z_Registration_Info_UClass_UWDeathWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWDeathWidget.OuterSingleton, Z_Construct_UClass_UWDeathWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWDeathWidget.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<UWDeathWidget>()
{
	return UWDeathWidget::StaticClass();
}
UWDeathWidget::UWDeathWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWDeathWidget);
UWDeathWidget::~UWDeathWidget() {}
// End Class UWDeathWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WDeathWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWDeathWidget, UWDeathWidget::StaticClass, TEXT("UWDeathWidget"), &Z_Registration_Info_UClass_UWDeathWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWDeathWidget), 3715844255U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WDeathWidget_h_1091419691(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WDeathWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WDeathWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
