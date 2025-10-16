// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WPlayerHpWidget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWPlayerHpWidget() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_UWPlayerHpWidget();
B2025_08_28_API UClass* Z_Construct_UClass_UWPlayerHpWidget_NoRegister();
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWPlayerHpWidget Function UpdateHealthBar
struct Z_Construct_UFunction_UWPlayerHpWidget_UpdateHealthBar_Statics
{
	struct WPlayerHpWidget_eventUpdateHealthBar_Parms
	{
		float NewHealthPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WPlayerHpWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealthPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWPlayerHpWidget_UpdateHealthBar_Statics::NewProp_NewHealthPercent = { "NewHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WPlayerHpWidget_eventUpdateHealthBar_Parms, NewHealthPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWPlayerHpWidget_UpdateHealthBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWPlayerHpWidget_UpdateHealthBar_Statics::NewProp_NewHealthPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWPlayerHpWidget_UpdateHealthBar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWPlayerHpWidget_UpdateHealthBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWPlayerHpWidget, nullptr, "UpdateHealthBar", nullptr, nullptr, Z_Construct_UFunction_UWPlayerHpWidget_UpdateHealthBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPlayerHpWidget_UpdateHealthBar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWPlayerHpWidget_UpdateHealthBar_Statics::WPlayerHpWidget_eventUpdateHealthBar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWPlayerHpWidget_UpdateHealthBar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWPlayerHpWidget_UpdateHealthBar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWPlayerHpWidget_UpdateHealthBar_Statics::WPlayerHpWidget_eventUpdateHealthBar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWPlayerHpWidget_UpdateHealthBar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWPlayerHpWidget_UpdateHealthBar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWPlayerHpWidget::execUpdateHealthBar)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_NewHealthPercent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateHealthBar(Z_Param_NewHealthPercent);
	P_NATIVE_END;
}
// End Class UWPlayerHpWidget Function UpdateHealthBar

// Begin Class UWPlayerHpWidget
void UWPlayerHpWidget::StaticRegisterNativesUWPlayerHpWidget()
{
	UClass* Class = UWPlayerHpWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateHealthBar", &UWPlayerHpWidget::execUpdateHealthBar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWPlayerHpWidget);
UClass* Z_Construct_UClass_UWPlayerHpWidget_NoRegister()
{
	return UWPlayerHpWidget::StaticClass();
}
struct Z_Construct_UClass_UWPlayerHpWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WPlayerHpWidget.h" },
		{ "ModuleRelativePath", "Public/WPlayerHpWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WPlayerHpWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHp_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WPlayerHpWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerImage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerHp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWPlayerHpWidget_UpdateHealthBar, "UpdateHealthBar" }, // 3272217605
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWPlayerHpWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWPlayerHpWidget_Statics::NewProp_PlayerImage = { "PlayerImage", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWPlayerHpWidget, PlayerImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerImage_MetaData), NewProp_PlayerImage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWPlayerHpWidget_Statics::NewProp_PlayerHp = { "PlayerHp", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWPlayerHpWidget, PlayerHp), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerHp_MetaData), NewProp_PlayerHp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWPlayerHpWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPlayerHpWidget_Statics::NewProp_PlayerImage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPlayerHpWidget_Statics::NewProp_PlayerHp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWPlayerHpWidget_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWPlayerHpWidget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWPlayerHpWidget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWPlayerHpWidget_Statics::ClassParams = {
	&UWPlayerHpWidget::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWPlayerHpWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWPlayerHpWidget_Statics::PropPointers),
	0,
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWPlayerHpWidget_Statics::Class_MetaDataParams), Z_Construct_UClass_UWPlayerHpWidget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWPlayerHpWidget()
{
	if (!Z_Registration_Info_UClass_UWPlayerHpWidget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWPlayerHpWidget.OuterSingleton, Z_Construct_UClass_UWPlayerHpWidget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWPlayerHpWidget.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<UWPlayerHpWidget>()
{
	return UWPlayerHpWidget::StaticClass();
}
UWPlayerHpWidget::UWPlayerHpWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWPlayerHpWidget);
UWPlayerHpWidget::~UWPlayerHpWidget() {}
// End Class UWPlayerHpWidget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WPlayerHpWidget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWPlayerHpWidget, UWPlayerHpWidget::StaticClass, TEXT("UWPlayerHpWidget"), &Z_Registration_Info_UClass_UWPlayerHpWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWPlayerHpWidget), 2336421741U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WPlayerHpWidget_h_837224816(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WPlayerHpWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WPlayerHpWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
