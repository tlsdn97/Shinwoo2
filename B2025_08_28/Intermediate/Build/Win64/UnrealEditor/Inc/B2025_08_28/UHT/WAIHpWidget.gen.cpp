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
UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWAIHpWidget Function UpdateHpBar
struct Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar_Statics
{
	struct WAIHpWidget_eventUpdateHpBar_Parms
	{
		float currentHp;
		float maxHp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WAIHpWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_currentHp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_maxHp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar_Statics::NewProp_currentHp = { "currentHp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WAIHpWidget_eventUpdateHpBar_Parms, currentHp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar_Statics::NewProp_maxHp = { "maxHp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WAIHpWidget_eventUpdateHpBar_Parms, maxHp), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar_Statics::NewProp_currentHp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar_Statics::NewProp_maxHp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWAIHpWidget, nullptr, "UpdateHpBar", nullptr, nullptr, Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar_Statics::PropPointers), sizeof(Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar_Statics::WAIHpWidget_eventUpdateHpBar_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar_Statics::WAIHpWidget_eventUpdateHpBar_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWAIHpWidget::execUpdateHpBar)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_currentHp);
	P_GET_PROPERTY(FFloatProperty,Z_Param_maxHp);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateHpBar(Z_Param_currentHp,Z_Param_maxHp);
	P_NATIVE_END;
}
// End Class UWAIHpWidget Function UpdateHpBar

// Begin Class UWAIHpWidget
void UWAIHpWidget::StaticRegisterNativesUWAIHpWidget()
{
	UClass* Class = UWAIHpWidget::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "UpdateHpBar", &UWAIHpWidget::execUpdateHpBar },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
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
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_pb_healthBar_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WAIHpWidget.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_pb_healthBar;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWAIHpWidget_UpdateHpBar, "UpdateHpBar" }, // 1631250254
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWAIHpWidget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWAIHpWidget_Statics::NewProp_pb_healthBar = { "pb_healthBar", nullptr, (EPropertyFlags)0x0010000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWAIHpWidget, pb_healthBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_pb_healthBar_MetaData), NewProp_pb_healthBar_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWAIHpWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWAIHpWidget_Statics::NewProp_pb_healthBar,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWAIHpWidget_Statics::PropPointers) < 2048);
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
	FuncInfo,
	Z_Construct_UClass_UWAIHpWidget_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWAIHpWidget_Statics::PropPointers),
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
		{ Z_Construct_UClass_UWAIHpWidget, UWAIHpWidget::StaticClass, TEXT("UWAIHpWidget"), &Z_Registration_Info_UClass_UWAIHpWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWAIHpWidget), 4257416593U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIHpWidget_h_2106098779(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIHpWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIHpWidget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
