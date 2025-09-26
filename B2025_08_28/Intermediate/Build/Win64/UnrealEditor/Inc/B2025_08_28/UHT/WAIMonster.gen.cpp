// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WAIMonster.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWAIMonster() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_AWAIMonster();
B2025_08_28_API UClass* Z_Construct_UClass_AWAIMonster_NoRegister();
B2025_08_28_API UClass* Z_Construct_UClass_UWAIHpWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class AWAIMonster Function HandleWeaponDamage
struct Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage_Statics
{
	struct WAIMonster_eventHandleWeaponDamage_Parms
	{
		AActor* DamagedActor;
		float Damage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WAIMonster.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WAIMonster_eventHandleWeaponDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WAIMonster_eventHandleWeaponDamage_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWAIMonster, nullptr, "HandleWeaponDamage", nullptr, nullptr, Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage_Statics::WAIMonster_eventHandleWeaponDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage_Statics::WAIMonster_eventHandleWeaponDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWAIMonster::execHandleWeaponDamage)
{
	P_GET_OBJECT(AActor,Z_Param_DamagedActor);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->HandleWeaponDamage(Z_Param_DamagedActor,Z_Param_Damage);
	P_NATIVE_END;
}
// End Class AWAIMonster Function HandleWeaponDamage

// Begin Class AWAIMonster Function OnDetectionBegin
struct Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics
{
	struct WAIMonster_eventOnDetectionBegin_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WAIMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WAIMonster_eventOnDetectionBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WAIMonster_eventOnDetectionBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WAIMonster_eventOnDetectionBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WAIMonster_eventOnDetectionBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((WAIMonster_eventOnDetectionBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(WAIMonster_eventOnDetectionBegin_Parms), &Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WAIMonster_eventOnDetectionBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWAIMonster, nullptr, "OnDetectionBegin", nullptr, nullptr, Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::WAIMonster_eventOnDetectionBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::WAIMonster_eventOnDetectionBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWAIMonster_OnDetectionBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWAIMonster_OnDetectionBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWAIMonster::execOnDetectionBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDetectionBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class AWAIMonster Function OnDetectionBegin

// Begin Class AWAIMonster Function OnDetectionEnd
struct Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics
{
	struct WAIMonster_eventOnDetectionEnd_Parms
	{
		UPrimitiveComponent* OverlappedComp;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WAIMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WAIMonster_eventOnDetectionEnd_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WAIMonster_eventOnDetectionEnd_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WAIMonster_eventOnDetectionEnd_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WAIMonster_eventOnDetectionEnd_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::NewProp_OtherBodyIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWAIMonster, nullptr, "OnDetectionEnd", nullptr, nullptr, Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::WAIMonster_eventOnDetectionEnd_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::WAIMonster_eventOnDetectionEnd_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWAIMonster_OnDetectionEnd()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWAIMonster_OnDetectionEnd_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWAIMonster::execOnDetectionEnd)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDetectionEnd(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex);
	P_NATIVE_END;
}
// End Class AWAIMonster Function OnDetectionEnd

// Begin Class AWAIMonster Function TakeDamageFromBullet
struct Z_Construct_UFunction_AWAIMonster_TakeDamageFromBullet_Statics
{
	struct WAIMonster_eventTakeDamageFromBullet_Parms
	{
		float Damage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WAIMonster.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AWAIMonster_TakeDamageFromBullet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WAIMonster_eventTakeDamageFromBullet_Parms, Damage), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWAIMonster_TakeDamageFromBullet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWAIMonster_TakeDamageFromBullet_Statics::NewProp_Damage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWAIMonster_TakeDamageFromBullet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWAIMonster_TakeDamageFromBullet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWAIMonster, nullptr, "TakeDamageFromBullet", nullptr, nullptr, Z_Construct_UFunction_AWAIMonster_TakeDamageFromBullet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWAIMonster_TakeDamageFromBullet_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWAIMonster_TakeDamageFromBullet_Statics::WAIMonster_eventTakeDamageFromBullet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWAIMonster_TakeDamageFromBullet_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWAIMonster_TakeDamageFromBullet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWAIMonster_TakeDamageFromBullet_Statics::WAIMonster_eventTakeDamageFromBullet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWAIMonster_TakeDamageFromBullet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWAIMonster_TakeDamageFromBullet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWAIMonster::execTakeDamageFromBullet)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TakeDamageFromBullet(Z_Param_Damage);
	P_NATIVE_END;
}
// End Class AWAIMonster Function TakeDamageFromBullet

// Begin Class AWAIMonster
void AWAIMonster::StaticRegisterNativesAWAIMonster()
{
	UClass* Class = AWAIMonster::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "HandleWeaponDamage", &AWAIMonster::execHandleWeaponDamage },
		{ "OnDetectionBegin", &AWAIMonster::execOnDetectionBegin },
		{ "OnDetectionEnd", &AWAIMonster::execOnDetectionEnd },
		{ "TakeDamageFromBullet", &AWAIMonster::execTakeDamageFromBullet },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWAIMonster);
UClass* Z_Construct_UClass_AWAIMonster_NoRegister()
{
	return AWAIMonster::StaticClass();
}
struct Z_Construct_UClass_AWAIMonster_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WAIMonster.h" },
		{ "ModuleRelativePath", "Public/WAIMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/WAIMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DetectionCapsule_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WAIMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleRadius_MetaData[] = {
		{ "Category", "AI|Detection" },
		{ "ModuleRelativePath", "Public/WAIMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleHalfHeight_MetaData[] = {
		{ "Category", "AI|Detection" },
		{ "ModuleRelativePath", "Public/WAIMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "Public/WAIMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentHP_MetaData[] = {
		{ "Category", "HP" },
		{ "ModuleRelativePath", "Public/WAIMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HPWidgetClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/WAIMonster.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HPWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WAIMonster.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Health;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DetectionCapsule;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleRadius;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CapsuleHalfHeight;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentHP;
	static const UECodeGen_Private::FClassPropertyParams NewProp_HPWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HPWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWAIMonster_HandleWeaponDamage, "HandleWeaponDamage" }, // 2846013191
		{ &Z_Construct_UFunction_AWAIMonster_OnDetectionBegin, "OnDetectionBegin" }, // 1774502709
		{ &Z_Construct_UFunction_AWAIMonster_OnDetectionEnd, "OnDetectionEnd" }, // 3634650876
		{ &Z_Construct_UFunction_AWAIMonster_TakeDamageFromBullet, "TakeDamageFromBullet" }, // 3786529256
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWAIMonster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWAIMonster_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWAIMonster, Health), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWAIMonster_Statics::NewProp_DetectionCapsule = { "DetectionCapsule", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWAIMonster, DetectionCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DetectionCapsule_MetaData), NewProp_DetectionCapsule_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWAIMonster_Statics::NewProp_CapsuleRadius = { "CapsuleRadius", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWAIMonster, CapsuleRadius), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleRadius_MetaData), NewProp_CapsuleRadius_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWAIMonster_Statics::NewProp_CapsuleHalfHeight = { "CapsuleHalfHeight", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWAIMonster, CapsuleHalfHeight), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleHalfHeight_MetaData), NewProp_CapsuleHalfHeight_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWAIMonster_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWAIMonster, MaxHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHP_MetaData), NewProp_MaxHP_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWAIMonster_Statics::NewProp_CurrentHP = { "CurrentHP", nullptr, (EPropertyFlags)0x0020080000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWAIMonster, CurrentHP), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentHP_MetaData), NewProp_CurrentHP_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWAIMonster_Statics::NewProp_HPWidgetClass = { "HPWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWAIMonster, HPWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWAIHpWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HPWidgetClass_MetaData), NewProp_HPWidgetClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWAIMonster_Statics::NewProp_HPWidget = { "HPWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWAIMonster, HPWidget), Z_Construct_UClass_UWAIHpWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HPWidget_MetaData), NewProp_HPWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWAIMonster_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWAIMonster_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWAIMonster_Statics::NewProp_DetectionCapsule,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWAIMonster_Statics::NewProp_CapsuleRadius,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWAIMonster_Statics::NewProp_CapsuleHalfHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWAIMonster_Statics::NewProp_MaxHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWAIMonster_Statics::NewProp_CurrentHP,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWAIMonster_Statics::NewProp_HPWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWAIMonster_Statics::NewProp_HPWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWAIMonster_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWAIMonster_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWAIMonster_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWAIMonster_Statics::ClassParams = {
	&AWAIMonster::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWAIMonster_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWAIMonster_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWAIMonster_Statics::Class_MetaDataParams), Z_Construct_UClass_AWAIMonster_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWAIMonster()
{
	if (!Z_Registration_Info_UClass_AWAIMonster.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWAIMonster.OuterSingleton, Z_Construct_UClass_AWAIMonster_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWAIMonster.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<AWAIMonster>()
{
	return AWAIMonster::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWAIMonster);
AWAIMonster::~AWAIMonster() {}
// End Class AWAIMonster

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIMonster_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWAIMonster, AWAIMonster::StaticClass, TEXT("AWAIMonster"), &Z_Registration_Info_UClass_AWAIMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWAIMonster), 2775994804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIMonster_h_3027335546(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIMonster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
