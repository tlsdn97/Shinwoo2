// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WBoss.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWBoss() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTree_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UPawnSensingComponent_NoRegister();
B2025_08_28_API UClass* Z_Construct_UClass_AWBoss();
B2025_08_28_API UClass* Z_Construct_UClass_AWBoss_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class AWBoss Function OnSeePawn
struct Z_Construct_UFunction_AWBoss_OnSeePawn_Statics
{
	struct WBoss_eventOnSeePawn_Parms
	{
		APawn* Pawn;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WBoss.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Pawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AWBoss_OnSeePawn_Statics::NewProp_Pawn = { "Pawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(WBoss_eventOnSeePawn_Parms, Pawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AWBoss_OnSeePawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AWBoss_OnSeePawn_Statics::NewProp_Pawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AWBoss_OnSeePawn_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AWBoss_OnSeePawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWBoss, nullptr, "OnSeePawn", nullptr, nullptr, Z_Construct_UFunction_AWBoss_OnSeePawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AWBoss_OnSeePawn_Statics::PropPointers), sizeof(Z_Construct_UFunction_AWBoss_OnSeePawn_Statics::WBoss_eventOnSeePawn_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AWBoss_OnSeePawn_Statics::Function_MetaDataParams), Z_Construct_UFunction_AWBoss_OnSeePawn_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AWBoss_OnSeePawn_Statics::WBoss_eventOnSeePawn_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AWBoss_OnSeePawn()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AWBoss_OnSeePawn_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AWBoss::execOnSeePawn)
{
	P_GET_OBJECT(APawn,Z_Param_Pawn);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnSeePawn(Z_Param_Pawn);
	P_NATIVE_END;
}
// End Class AWBoss Function OnSeePawn

// Begin Class AWBoss
void AWBoss::StaticRegisterNativesAWBoss()
{
	UClass* Class = AWBoss::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnSeePawn", &AWBoss::execOnSeePawn },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWBoss);
UClass* Z_Construct_UClass_AWBoss_NoRegister()
{
	return AWBoss::StaticClass();
}
struct Z_Construct_UClass_AWBoss_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WBoss.h" },
		{ "ModuleRelativePath", "Public/WBoss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PawnSensingComp_MetaData[] = {
		{ "Category", "AI" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WBoss.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorTree_MetaData[] = {
		{ "Category", "AI" },
		{ "ModuleRelativePath", "Public/WBoss.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PawnSensingComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorTree;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AWBoss_OnSeePawn, "OnSeePawn" }, // 2090711010
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWBoss>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWBoss_Statics::NewProp_PawnSensingComp = { "PawnSensingComp", nullptr, (EPropertyFlags)0x00200800000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWBoss, PawnSensingComp), Z_Construct_UClass_UPawnSensingComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PawnSensingComp_MetaData), NewProp_PawnSensingComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWBoss_Statics::NewProp_BehaviorTree = { "BehaviorTree", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWBoss, BehaviorTree), Z_Construct_UClass_UBehaviorTree_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorTree_MetaData), NewProp_BehaviorTree_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWBoss_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWBoss_Statics::NewProp_PawnSensingComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWBoss_Statics::NewProp_BehaviorTree,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWBoss_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWBoss_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWBoss_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWBoss_Statics::ClassParams = {
	&AWBoss::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AWBoss_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AWBoss_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWBoss_Statics::Class_MetaDataParams), Z_Construct_UClass_AWBoss_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWBoss()
{
	if (!Z_Registration_Info_UClass_AWBoss.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWBoss.OuterSingleton, Z_Construct_UClass_AWBoss_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWBoss.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<AWBoss>()
{
	return AWBoss::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWBoss);
AWBoss::~AWBoss() {}
// End Class AWBoss

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBoss_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWBoss, AWBoss::StaticClass, TEXT("AWBoss"), &Z_Registration_Info_UClass_AWBoss, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWBoss), 4064036503U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBoss_h_1833554607(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBoss_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBoss_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
