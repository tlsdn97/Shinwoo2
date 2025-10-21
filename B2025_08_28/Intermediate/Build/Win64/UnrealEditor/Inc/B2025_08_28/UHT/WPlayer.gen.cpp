// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWPlayer() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_AWPlayer();
B2025_08_28_API UClass* Z_Construct_UClass_AWPlayer_NoRegister();
B2025_08_28_API UClass* Z_Construct_UClass_UWDamageLogWidget_NoRegister();
B2025_08_28_API UClass* Z_Construct_UClass_UWPlayerHpWidget_NoRegister();
B2025_08_28_API UFunction* Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature();
B2025_08_28_API UFunction* Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Delegate FOnHealthChanged
struct Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature_Statics
{
	struct _Script_B2025_08_28_eventOnHealthChanged_Parms
	{
		float NewHealthPercent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NewHealthPercent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHealthPercent = { "NewHealthPercent", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_B2025_08_28_eventOnHealthChanged_Parms, NewHealthPercent), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature_Statics::NewProp_NewHealthPercent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_B2025_08_28, nullptr, "OnHealthChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature_Statics::_Script_B2025_08_28_eventOnHealthChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature_Statics::_Script_B2025_08_28_eventOnHealthChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnHealthChanged_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChanged, float NewHealthPercent)
{
	struct _Script_B2025_08_28_eventOnHealthChanged_Parms
	{
		float NewHealthPercent;
	};
	_Script_B2025_08_28_eventOnHealthChanged_Parms Parms;
	Parms.NewHealthPercent=NewHealthPercent;
	OnHealthChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnHealthChanged

// Begin Delegate FOnPotionCountChanged
struct Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature_Statics
{
	struct _Script_B2025_08_28_eventOnPotionCountChanged_Parms
	{
		int32 NewPotionCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewPotionCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature_Statics::NewProp_NewPotionCount = { "NewPotionCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_B2025_08_28_eventOnPotionCountChanged_Parms, NewPotionCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature_Statics::NewProp_NewPotionCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_B2025_08_28, nullptr, "OnPotionCountChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature_Statics::_Script_B2025_08_28_eventOnPotionCountChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature_Statics::_Script_B2025_08_28_eventOnPotionCountChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnPotionCountChanged_DelegateWrapper(const FMulticastScriptDelegate& OnPotionCountChanged, int32 NewPotionCount)
{
	struct _Script_B2025_08_28_eventOnPotionCountChanged_Parms
	{
		int32 NewPotionCount;
	};
	_Script_B2025_08_28_eventOnPotionCountChanged_Parms Parms;
	Parms.NewPotionCount=NewPotionCount;
	OnPotionCountChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnPotionCountChanged

// Begin Class AWPlayer Function OnDamaged
struct Z_Construct_UFunction_AWPlayer_OnDamaged_Statics
{
	struct WPlayer_eventOnDamaged_Parms
	{
		int32 Damage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWPlayer_OnDamaged_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WPlayer_eventOnDamaged_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWPlayer_OnDamaged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWPlayer_OnDamaged_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWPlayer_OnDamaged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWPlayer_OnDamaged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWPlayer, nullptr, "OnDamaged", nullptr, nullptr, Z_Construct_UFunction_AWPlayer_OnDamaged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWPlayer_OnDamaged_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWPlayer_OnDamaged_Statics::WPlayer_eventOnDamaged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWPlayer_OnDamaged_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWPlayer_OnDamaged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWPlayer_OnDamaged_Statics::WPlayer_eventOnDamaged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWPlayer_OnDamaged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWPlayer_OnDamaged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWPlayer::execOnDamaged)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDamaged(Z_Param_Damage);
	P_NATIVE_END;
}
// End Class AWPlayer Function OnDamaged

// Begin Class AWPlayer
void AWPlayer::StaticRegisterNativesAWPlayer()
{
	UClass* Class = AWPlayer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDamaged", &AWPlayer::execOnDamaged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWPlayer);
UClass* Z_Construct_UClass_AWPlayer_NoRegister()
{
	return AWPlayer::StaticClass();
}
struct Z_Construct_UClass_AWPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WPlayer.h" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackwardSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RunSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_meleeAttackAniMontage_MetaData[] = {
		{ "Category", "AttackAniMontage" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomedFOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInterpSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnHealthChanged_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnPotionCountChanged_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PotionCount_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HealAmount_MetaData[] = {
		{ "Category", "Item" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHealth_MetaData[] = {
		{ "Category", "Player|Stats" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerHpWidget_MetaData[] = {
		{ "Category", "Player|UI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseWorldSpaceUI_MetaData[] = {
		{ "Category", "Player|UI" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DamageWidgetClass;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackwardSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RunSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_meleeAttackAniMontage;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomedFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomInterpSpeed;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnHealthChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPotionCountChanged;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PotionCount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_HealAmount;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHealth;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayerHpWidget;
	static void NewProp_bUseWorldSpaceUI_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseWorldSpaceUI;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWPlayer_OnDamaged, "OnDamaged" }, // 3386938924
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_DamageWidgetClass = { "DamageWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, DamageWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWDamageLogWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageWidgetClass_MetaData), NewProp_DamageWidgetClass_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_ForwardSpeed = { "ForwardSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, ForwardSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardSpeed_MetaData), NewProp_ForwardSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_BackwardSpeed = { "BackwardSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, BackwardSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardSpeed_MetaData), NewProp_BackwardSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_RunSpeed = { "RunSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, RunSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RunSpeed_MetaData), NewProp_RunSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_meleeAttackAniMontage = { "meleeAttackAniMontage", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, meleeAttackAniMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_meleeAttackAniMontage_MetaData), NewProp_meleeAttackAniMontage_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_DefaultFOV = { "DefaultFOV", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, DefaultFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFOV_MetaData), NewProp_DefaultFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_ZoomedFOV = { "ZoomedFOV", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, ZoomedFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomedFOV_MetaData), NewProp_ZoomedFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_ZoomInterpSpeed = { "ZoomInterpSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, ZoomInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomInterpSpeed_MetaData), NewProp_ZoomInterpSpeed_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, CurrentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentIndex_MetaData), NewProp_CurrentIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_OnHealthChanged = { "OnHealthChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, OnHealthChanged), Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnHealthChanged_MetaData), NewProp_OnHealthChanged_MetaData) }; // 2075227993
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_OnPotionCountChanged = { "OnPotionCountChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, OnPotionCountChanged), Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnPotionCountChanged_MetaData), NewProp_OnPotionCountChanged_MetaData) }; // 2233663344
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, MaxHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_PotionCount = { "PotionCount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, PotionCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PotionCount_MetaData), NewProp_PotionCount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_HealAmount = { "HealAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, HealAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HealAmount_MetaData), NewProp_HealAmount_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_CurrentHealth = { "CurrentHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, CurrentHealth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHealth_MetaData), NewProp_CurrentHealth_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_PlayerHpWidget = { "PlayerHpWidget", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, PlayerHpWidget), Z_Construct_UClass_UWPlayerHpWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerHpWidget_MetaData), NewProp_PlayerHpWidget_MetaData) };
void Z_Construct_UClass_AWPlayer_Statics::NewProp_bUseWorldSpaceUI_SetBit(void* Obj)
{
	((AWPlayer*)Obj)->bUseWorldSpaceUI = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_bUseWorldSpaceUI = { "bUseWorldSpaceUI", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWPlayer), &Z_Construct_UClass_AWPlayer_Statics::NewProp_bUseWorldSpaceUI_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseWorldSpaceUI_MetaData), NewProp_bUseWorldSpaceUI_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_DamageWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_ForwardSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_BackwardSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_RunSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_meleeAttackAniMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_DefaultFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_ZoomedFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_ZoomInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_CurrentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_OnHealthChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_OnPotionCountChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_PotionCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_HealAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_CurrentHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_PlayerHpWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_bUseWorldSpaceUI,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWPlayer_Statics::ClassParams = {
	&AWPlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWPlayer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AWPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWPlayer()
{
	if (!Z_Registration_Info_UClass_AWPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWPlayer.OuterSingleton, Z_Construct_UClass_AWPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWPlayer.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<AWPlayer>()
{
	return AWPlayer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWPlayer);
AWPlayer::~AWPlayer() {}
// End Class AWPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWPlayer, AWPlayer::StaticClass, TEXT("AWPlayer"), &Z_Registration_Info_UClass_AWPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWPlayer), 1321612317U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WPlayer_h_1934685699(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
