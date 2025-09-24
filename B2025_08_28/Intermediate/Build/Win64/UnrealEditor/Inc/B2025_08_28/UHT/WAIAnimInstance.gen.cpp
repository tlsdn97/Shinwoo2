// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WAIAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWAIAnimInstance() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_UWAIAnimInstance();
B2025_08_28_API UClass* Z_Construct_UClass_UWAIAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWAIAnimInstance Function PlayAttackMontage
struct Z_Construct_UFunction_UWAIAnimInstance_PlayAttackMontage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WAIAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UWAIAnimInstance_PlayAttackMontage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWAIAnimInstance, nullptr, "PlayAttackMontage", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UWAIAnimInstance_PlayAttackMontage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UWAIAnimInstance_PlayAttackMontage_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UWAIAnimInstance_PlayAttackMontage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UWAIAnimInstance_PlayAttackMontage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UWAIAnimInstance::execPlayAttackMontage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayAttackMontage();
	P_NATIVE_END;
}
// End Class UWAIAnimInstance Function PlayAttackMontage

// Begin Class UWAIAnimInstance
void UWAIAnimInstance::StaticRegisterNativesUWAIAnimInstance()
{
	UClass* Class = UWAIAnimInstance::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "PlayAttackMontage", &UWAIAnimInstance::execPlayAttackMontage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWAIAnimInstance);
UClass* Z_Construct_UClass_UWAIAnimInstance_NoRegister()
{
	return UWAIAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UWAIAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "WAIAnimInstance.h" },
		{ "ModuleRelativePath", "Public/WAIAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/WAIAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsChasing_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/WAIAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsAttacking_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/WAIAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AttackMontage_MetaData[] = {
		{ "Category", "Attack" },
		{ "ModuleRelativePath", "Public/WAIAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
	static void NewProp_bIsChasing_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsChasing;
	static void NewProp_bIsAttacking_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsAttacking;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AttackMontage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UWAIAnimInstance_PlayAttackMontage, "PlayAttackMontage" }, // 4220029960
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWAIAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWAIAnimInstance_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWAIAnimInstance, Speed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Speed_MetaData), NewProp_Speed_MetaData) };
void Z_Construct_UClass_UWAIAnimInstance_Statics::NewProp_bIsChasing_SetBit(void* Obj)
{
	((UWAIAnimInstance*)Obj)->bIsChasing = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWAIAnimInstance_Statics::NewProp_bIsChasing = { "bIsChasing", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWAIAnimInstance), &Z_Construct_UClass_UWAIAnimInstance_Statics::NewProp_bIsChasing_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsChasing_MetaData), NewProp_bIsChasing_MetaData) };
void Z_Construct_UClass_UWAIAnimInstance_Statics::NewProp_bIsAttacking_SetBit(void* Obj)
{
	((UWAIAnimInstance*)Obj)->bIsAttacking = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UWAIAnimInstance_Statics::NewProp_bIsAttacking = { "bIsAttacking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UWAIAnimInstance), &Z_Construct_UClass_UWAIAnimInstance_Statics::NewProp_bIsAttacking_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsAttacking_MetaData), NewProp_bIsAttacking_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWAIAnimInstance_Statics::NewProp_AttackMontage = { "AttackMontage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWAIAnimInstance, AttackMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AttackMontage_MetaData), NewProp_AttackMontage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWAIAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWAIAnimInstance_Statics::NewProp_Speed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWAIAnimInstance_Statics::NewProp_bIsChasing,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWAIAnimInstance_Statics::NewProp_bIsAttacking,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWAIAnimInstance_Statics::NewProp_AttackMontage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWAIAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWAIAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWAIAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWAIAnimInstance_Statics::ClassParams = {
	&UWAIAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UWAIAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UWAIAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWAIAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWAIAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWAIAnimInstance()
{
	if (!Z_Registration_Info_UClass_UWAIAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWAIAnimInstance.OuterSingleton, Z_Construct_UClass_UWAIAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWAIAnimInstance.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<UWAIAnimInstance>()
{
	return UWAIAnimInstance::StaticClass();
}
UWAIAnimInstance::UWAIAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWAIAnimInstance);
UWAIAnimInstance::~UWAIAnimInstance() {}
// End Class UWAIAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWAIAnimInstance, UWAIAnimInstance::StaticClass, TEXT("UWAIAnimInstance"), &Z_Registration_Info_UClass_UWAIAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWAIAnimInstance), 341840661U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIAnimInstance_h_1663157316(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
