// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/PWeapon.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePWeapon() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_APWeapon();
B2025_08_28_API UClass* Z_Construct_UClass_APWeapon_NoRegister();
B2025_08_28_API UClass* Z_Construct_UClass_AWBullet_NoRegister();
B2025_08_28_API UFunction* Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USphereComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Delegate FOnDealDamage
struct Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature_Statics
{
	struct _Script_B2025_08_28_eventOnDealDamage_Parms
	{
		AActor* DamagedActor;
		float DamageAmount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DamagedActor;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature_Statics::NewProp_DamagedActor = { "DamagedActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_B2025_08_28_eventOnDealDamage_Parms, DamagedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_B2025_08_28_eventOnDealDamage_Parms, DamageAmount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature_Statics::NewProp_DamagedActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature_Statics::NewProp_DamageAmount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_B2025_08_28, nullptr, "OnDealDamage__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature_Statics::_Script_B2025_08_28_eventOnDealDamage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature_Statics::_Script_B2025_08_28_eventOnDealDamage_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDealDamage_DelegateWrapper(const FMulticastScriptDelegate& OnDealDamage, AActor* DamagedActor, float DamageAmount)
{
	struct _Script_B2025_08_28_eventOnDealDamage_Parms
	{
		AActor* DamagedActor;
		float DamageAmount;
	};
	_Script_B2025_08_28_eventOnDealDamage_Parms Parms;
	Parms.DamagedActor=DamagedActor;
	Parms.DamageAmount=DamageAmount;
	OnDealDamage.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDealDamage

// Begin Class APWeapon Function Fire
struct Z_Construct_UFunction_APWeapon_Fire_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APWeapon_Fire_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APWeapon, nullptr, "Fire", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APWeapon_Fire_Statics::Function_MetaDataParams), Z_Construct_UFunction_APWeapon_Fire_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APWeapon_Fire()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APWeapon_Fire_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APWeapon::execFire)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Fire();
	P_NATIVE_END;
}
// End Class APWeapon Function Fire

// Begin Class APWeapon Function OnOverlapBegin
struct Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics
{
	struct PWeapon_eventOnOverlapBegin_Parms
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
		{ "ModuleRelativePath", "Public/PWeapon.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PWeapon_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComp_MetaData), NewProp_OverlappedComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PWeapon_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PWeapon_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PWeapon_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((PWeapon_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(PWeapon_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(PWeapon_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::NewProp_OverlappedComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APWeapon, nullptr, "OnOverlapBegin", nullptr, nullptr, Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::PropPointers), sizeof(Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::PWeapon_eventOnOverlapBegin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::Function_MetaDataParams), Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::PWeapon_eventOnOverlapBegin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_APWeapon_OnOverlapBegin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APWeapon_OnOverlapBegin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APWeapon::execOnOverlapBegin)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class APWeapon Function OnOverlapBegin

// Begin Class APWeapon Function PerformAttack
struct Z_Construct_UFunction_APWeapon_PerformAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_APWeapon_PerformAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_APWeapon, nullptr, "PerformAttack", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_APWeapon_PerformAttack_Statics::Function_MetaDataParams), Z_Construct_UFunction_APWeapon_PerformAttack_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_APWeapon_PerformAttack()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_APWeapon_PerformAttack_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(APWeapon::execPerformAttack)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PerformAttack();
	P_NATIVE_END;
}
// End Class APWeapon Function PerformAttack

// Begin Class APWeapon
void APWeapon::StaticRegisterNativesAPWeapon()
{
	UClass* Class = APWeapon::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Fire", &APWeapon::execFire },
		{ "OnOverlapBegin", &APWeapon::execOnOverlapBegin },
		{ "PerformAttack", &APWeapon::execPerformAttack },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APWeapon);
UClass* Z_Construct_UClass_APWeapon_NoRegister()
{
	return APWeapon::StaticClass();
}
struct Z_Construct_UClass_APWeapon_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "PWeapon.h" },
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDealDamage_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_HitSphere_MetaData[] = {
		{ "Category", "PWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DamageAmount_MetaData[] = {
		{ "Category", "Combat" },
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WeaponMesh_MetaData[] = {
		{ "Category", "PWeapon" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BulletClass_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/PWeapon.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDealDamage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_HitSphere;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WeaponMesh;
	static const UECodeGen_Private::FClassPropertyParams NewProp_BulletClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_APWeapon_Fire, "Fire" }, // 1812871869
		{ &Z_Construct_UFunction_APWeapon_OnOverlapBegin, "OnOverlapBegin" }, // 1645461182
		{ &Z_Construct_UFunction_APWeapon_PerformAttack, "PerformAttack" }, // 3470306823
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_APWeapon_Statics::NewProp_OnDealDamage = { "OnDealDamage", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APWeapon, OnDealDamage), Z_Construct_UDelegateFunction_B2025_08_28_OnDealDamage__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDealDamage_MetaData), NewProp_OnDealDamage_MetaData) }; // 3360426798
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APWeapon_Statics::NewProp_HitSphere = { "HitSphere", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APWeapon, HitSphere), Z_Construct_UClass_USphereComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_HitSphere_MetaData), NewProp_HitSphere_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APWeapon_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APWeapon, DamageAmount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DamageAmount_MetaData), NewProp_DamageAmount_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APWeapon_Statics::NewProp_WeaponMesh = { "WeaponMesh", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APWeapon, WeaponMesh), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WeaponMesh_MetaData), NewProp_WeaponMesh_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_APWeapon_Statics::NewProp_BulletClass = { "BulletClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APWeapon, BulletClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AWBullet_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BulletClass_MetaData), NewProp_BulletClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APWeapon_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APWeapon, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APWeapon_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0040000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(APWeapon, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APWeapon_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APWeapon_Statics::NewProp_OnDealDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APWeapon_Statics::NewProp_HitSphere,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APWeapon_Statics::NewProp_DamageAmount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APWeapon_Statics::NewProp_WeaponMesh,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APWeapon_Statics::NewProp_BulletClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APWeapon_Statics::NewProp_FireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APWeapon_Statics::NewProp_FireRate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APWeapon_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_APWeapon_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APWeapon_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APWeapon_Statics::ClassParams = {
	&APWeapon::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_APWeapon_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_APWeapon_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APWeapon_Statics::Class_MetaDataParams), Z_Construct_UClass_APWeapon_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APWeapon()
{
	if (!Z_Registration_Info_UClass_APWeapon.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APWeapon.OuterSingleton, Z_Construct_UClass_APWeapon_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APWeapon.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<APWeapon>()
{
	return APWeapon::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APWeapon);
APWeapon::~APWeapon() {}
// End Class APWeapon

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_PWeapon_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APWeapon, APWeapon::StaticClass, TEXT("APWeapon"), &Z_Registration_Info_UClass_APWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APWeapon), 2771728083U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_PWeapon_h_2074800560(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_PWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_PWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
