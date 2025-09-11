// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WCrossHairWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWCrossHairWidget() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_UWCrossHairWidget();
B2025_08_28_API UClass* Z_Construct_UClass_UWCrossHairWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWCrossHairWidget
void UWCrossHairWidget::StaticRegisterNativesUWCrossHairWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWCrossHairWidget);
UClass* Z_Construct_UClass_UWCrossHairWidget_NoRegister()
{
	return UWCrossHairWidget::StaticClass();
}
struct Z_Construct_UClass_UWCrossHairWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WCrossHairWidget.h" },
		{ "ModuleRelativePath", "Public/WCrossHairWidget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWCrossHairWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWCrossHairWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWCrossHairWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWCrossHairWidget_Statics::ClassParams = {
	&UWCrossHairWidget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWCrossHairWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UWCrossHairWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWCrossHairWidget()
{
	if (!Z_Registration_Info_UClass_UWCrossHairWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWCrossHairWidget.OuterSingleton, Z_Construct_UClass_UWCrossHairWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWCrossHairWidget.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<UWCrossHairWidget>()
{
	return UWCrossHairWidget::StaticClass();
}
UWCrossHairWidget::UWCrossHairWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWCrossHairWidget);
UWCrossHairWidget::~UWCrossHairWidget() {}
// End Class UWCrossHairWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WCrossHairWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWCrossHairWidget, UWCrossHairWidget::StaticClass, TEXT("UWCrossHairWidget"), &Z_Registration_Info_UClass_UWCrossHairWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWCrossHairWidget), 2571588985U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WCrossHairWidget_h_4124969378(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WCrossHairWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WCrossHairWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
