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
UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWCrossHairWidget Function UpdateCrosshairSize
struct Z_Construct_UFunction_UWCrossHairWidget_UpdateCrosshairSize_Statics
{
	struct WCrossHairWidget_eventUpdateCrosshairSize_Parms
	{
		float Speed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Crosshair" },
		{ "ModuleRelativePath", "Public/WCrossHairWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWCrossHairWidget_UpdateCrosshairSize_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WCrossHairWidget_eventUpdateCrosshairSize_Parms, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWCrossHairWidget_UpdateCrosshairSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWCrossHairWidget_UpdateCrosshairSize_Statics::NewProp_Speed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWCrossHairWidget_UpdateCrosshairSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWCrossHairWidget_UpdateCrosshairSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWCrossHairWidget, nullptr, "UpdateCrosshairSize", nullptr, nullptr, Z_Construct_UFunction_UWCrossHairWidget_UpdateCrosshairSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWCrossHairWidget_UpdateCrosshairSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWCrossHairWidget_UpdateCrosshairSize_Statics::WCrossHairWidget_eventUpdateCrosshairSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWCrossHairWidget_UpdateCrosshairSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWCrossHairWidget_UpdateCrosshairSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWCrossHairWidget_UpdateCrosshairSize_Statics::WCrossHairWidget_eventUpdateCrosshairSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWCrossHairWidget_UpdateCrosshairSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWCrossHairWidget_UpdateCrosshairSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWCrossHairWidget::execUpdateCrosshairSize)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Speed);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateCrosshairSize(Z_Param_Speed);
	P_NATIVE_END;
}
// End Class UWCrossHairWidget Function UpdateCrosshairSize

// Begin Class UWCrossHairWidget
void UWCrossHairWidget::StaticRegisterNativesUWCrossHairWidget()
{
	UClass* Class = UWCrossHairWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateCrosshairSize", &UWCrossHairWidget::execUpdateCrosshairSize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineTop_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WCrossHairWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineBottom_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WCrossHairWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineLeft_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WCrossHairWidget.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LineRight_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WCrossHairWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineTop;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineBottom;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LineRight;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWCrossHairWidget_UpdateCrosshairSize, "UpdateCrosshairSize" }, // 78483314
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWCrossHairWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWCrossHairWidget_Statics::NewProp_LineTop = { "LineTop", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWCrossHairWidget, LineTop), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineTop_MetaData), NewProp_LineTop_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWCrossHairWidget_Statics::NewProp_LineBottom = { "LineBottom", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWCrossHairWidget, LineBottom), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineBottom_MetaData), NewProp_LineBottom_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWCrossHairWidget_Statics::NewProp_LineLeft = { "LineLeft", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWCrossHairWidget, LineLeft), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineLeft_MetaData), NewProp_LineLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWCrossHairWidget_Statics::NewProp_LineRight = { "LineRight", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWCrossHairWidget, LineRight), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LineRight_MetaData), NewProp_LineRight_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWCrossHairWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWCrossHairWidget_Statics::NewProp_LineTop,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWCrossHairWidget_Statics::NewProp_LineBottom,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWCrossHairWidget_Statics::NewProp_LineLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWCrossHairWidget_Statics::NewProp_LineRight,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWCrossHairWidget_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UWCrossHairWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWCrossHairWidget_Statics::PropPointers),
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
		{ Z_Construct_UClass_UWCrossHairWidget, UWCrossHairWidget::StaticClass, TEXT("UWCrossHairWidget"), &Z_Registration_Info_UClass_UWCrossHairWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWCrossHairWidget), 2536050209U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WCrossHairWidget_h_2111013683(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WCrossHairWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WCrossHairWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
