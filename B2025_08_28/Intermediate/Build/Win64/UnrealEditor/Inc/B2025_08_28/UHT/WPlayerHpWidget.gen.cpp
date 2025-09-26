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
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWPlayerHpWidget Function UpdateHP
struct Z_Construct_UFunction_UWPlayerHpWidget_UpdateHP_Statics
{
	struct WPlayerHpWidget_eventUpdateHP_Parms
	{
		float Percent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WPlayerHpWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Percent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWPlayerHpWidget_UpdateHP_Statics::NewProp_Percent = { "Percent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WPlayerHpWidget_eventUpdateHP_Parms, Percent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWPlayerHpWidget_UpdateHP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWPlayerHpWidget_UpdateHP_Statics::NewProp_Percent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWPlayerHpWidget_UpdateHP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWPlayerHpWidget_UpdateHP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWPlayerHpWidget, nullptr, "UpdateHP", nullptr, nullptr, Z_Construct_UFunction_UWPlayerHpWidget_UpdateHP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWPlayerHpWidget_UpdateHP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWPlayerHpWidget_UpdateHP_Statics::WPlayerHpWidget_eventUpdateHP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWPlayerHpWidget_UpdateHP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWPlayerHpWidget_UpdateHP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWPlayerHpWidget_UpdateHP_Statics::WPlayerHpWidget_eventUpdateHP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWPlayerHpWidget_UpdateHP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWPlayerHpWidget_UpdateHP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWPlayerHpWidget::execUpdateHP)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Percent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateHP(Z_Param_Percent);
	P_NATIVE_END;
}
// End Class UWPlayerHpWidget Function UpdateHP

// Begin Class UWPlayerHpWidget
void UWPlayerHpWidget::StaticRegisterNativesUWPlayerHpWidget()
{
	UClass* Class = UWPlayerHpWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateHP", &UWPlayerHpWidget::execUpdateHP },
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PHpBar_MetaData[] = {
		{ "BindWdiget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WPlayerHpWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PHpBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWPlayerHpWidget_UpdateHP, "UpdateHP" }, // 1561465137
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWPlayerHpWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWPlayerHpWidget_Statics::NewProp_PHpBar = { "PHpBar", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWPlayerHpWidget, PHpBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PHpBar_MetaData), NewProp_PHpBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWPlayerHpWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWPlayerHpWidget_Statics::NewProp_PHpBar,
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
		{ Z_Construct_UClass_UWPlayerHpWidget, UWPlayerHpWidget::StaticClass, TEXT("UWPlayerHpWidget"), &Z_Registration_Info_UClass_UWPlayerHpWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWPlayerHpWidget), 1110181922U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WPlayerHpWidget_h_28798277(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WPlayerHpWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WPlayerHpWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
