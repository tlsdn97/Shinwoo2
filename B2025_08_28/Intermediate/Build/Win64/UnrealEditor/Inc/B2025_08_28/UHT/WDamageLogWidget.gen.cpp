// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WDamageLogWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWDamageLogWidget() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_UWDamageLogWidget();
B2025_08_28_API UClass* Z_Construct_UClass_UWDamageLogWidget_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWDamageLogWidget
void UWDamageLogWidget::StaticRegisterNativesUWDamageLogWidget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWDamageLogWidget);
UClass* Z_Construct_UClass_UWDamageLogWidget_NoRegister()
{
	return UWDamageLogWidget::StaticClass();
}
struct Z_Construct_UClass_UWDamageLogWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WDamageLogWidget.h" },
		{ "ModuleRelativePath", "Public/WDamageLogWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageText_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WDamageLogWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TargetActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/WDamageLogWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_TargetActor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWDamageLogWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWDamageLogWidget_Statics::NewProp_DamageText = { "DamageText", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWDamageLogWidget, DamageText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageText_MetaData), NewProp_DamageText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWDamageLogWidget_Statics::NewProp_TargetActor = { "TargetActor", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWDamageLogWidget, TargetActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TargetActor_MetaData), NewProp_TargetActor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWDamageLogWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWDamageLogWidget_Statics::NewProp_DamageText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWDamageLogWidget_Statics::NewProp_TargetActor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWDamageLogWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWDamageLogWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWDamageLogWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWDamageLogWidget_Statics::ClassParams = {
	&UWDamageLogWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWDamageLogWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWDamageLogWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWDamageLogWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UWDamageLogWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWDamageLogWidget()
{
	if (!Z_Registration_Info_UClass_UWDamageLogWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWDamageLogWidget.OuterSingleton, Z_Construct_UClass_UWDamageLogWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWDamageLogWidget.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<UWDamageLogWidget>()
{
	return UWDamageLogWidget::StaticClass();
}
UWDamageLogWidget::UWDamageLogWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWDamageLogWidget);
UWDamageLogWidget::~UWDamageLogWidget() {}
// End Class UWDamageLogWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WDamageLogWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWDamageLogWidget, UWDamageLogWidget::StaticClass, TEXT("UWDamageLogWidget"), &Z_Registration_Info_UClass_UWDamageLogWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWDamageLogWidget), 1909490417U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WDamageLogWidget_h_1248646381(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WDamageLogWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WDamageLogWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
