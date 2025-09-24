// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WBT_AttackTask.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWBT_AttackTask() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
B2025_08_28_API UClass* Z_Construct_UClass_UWBT_AttackTask();
B2025_08_28_API UClass* Z_Construct_UClass_UWBT_AttackTask_NoRegister();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWBT_AttackTask
void UWBT_AttackTask::StaticRegisterNativesUWBT_AttackTask()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWBT_AttackTask);
UClass* Z_Construct_UClass_UWBT_AttackTask_NoRegister()
{
	return UWBT_AttackTask::StaticClass();
}
struct Z_Construct_UClass_UWBT_AttackTask_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WBT_AttackTask.h" },
		{ "ModuleRelativePath", "Public/WBT_AttackTask.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWBT_AttackTask>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWBT_AttackTask_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWBT_AttackTask_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWBT_AttackTask_Statics::ClassParams = {
	&UWBT_AttackTask::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWBT_AttackTask_Statics::Class_MetaDataParams), Z_Construct_UClass_UWBT_AttackTask_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWBT_AttackTask()
{
	if (!Z_Registration_Info_UClass_UWBT_AttackTask.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWBT_AttackTask.OuterSingleton, Z_Construct_UClass_UWBT_AttackTask_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWBT_AttackTask.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<UWBT_AttackTask>()
{
	return UWBT_AttackTask::StaticClass();
}
UWBT_AttackTask::UWBT_AttackTask(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWBT_AttackTask);
UWBT_AttackTask::~UWBT_AttackTask() {}
// End Class UWBT_AttackTask

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBT_AttackTask_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWBT_AttackTask, UWBT_AttackTask::StaticClass, TEXT("UWBT_AttackTask"), &Z_Registration_Info_UClass_UWBT_AttackTask, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWBT_AttackTask), 4045031081U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBT_AttackTask_h_3019502454(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBT_AttackTask_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBT_AttackTask_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
