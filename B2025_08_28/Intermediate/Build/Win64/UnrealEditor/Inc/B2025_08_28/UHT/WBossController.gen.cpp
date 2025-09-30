// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WBossController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWBossController() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBehaviorTreeComponent_NoRegister();
AIMODULE_API UClass* Z_Construct_UClass_UBlackboardComponent_NoRegister();
B2025_08_28_API UClass* Z_Construct_UClass_AWBossController();
B2025_08_28_API UClass* Z_Construct_UClass_AWBossController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AController();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class AWBossController
void AWBossController::StaticRegisterNativesAWBossController()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWBossController);
UClass* Z_Construct_UClass_AWBossController_NoRegister()
{
	return AWBossController::StaticClass();
}
struct Z_Construct_UClass_AWBossController_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "WBossController.h" },
		{ "ModuleRelativePath", "Public/WBossController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlackboardComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WBossController.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BehaviorComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WBossController.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BlackboardComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_BehaviorComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWBossController>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWBossController_Statics::NewProp_BlackboardComp = { "BlackboardComp", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWBossController, BlackboardComp), Z_Construct_UClass_UBlackboardComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlackboardComp_MetaData), NewProp_BlackboardComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWBossController_Statics::NewProp_BehaviorComp = { "BehaviorComp", nullptr, (EPropertyFlags)0x0040000000082008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWBossController, BehaviorComp), Z_Construct_UClass_UBehaviorTreeComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BehaviorComp_MetaData), NewProp_BehaviorComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWBossController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWBossController_Statics::NewProp_BlackboardComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWBossController_Statics::NewProp_BehaviorComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWBossController_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWBossController_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AController,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWBossController_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWBossController_Statics::ClassParams = {
	&AWBossController::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWBossController_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWBossController_Statics::PropPointers),
	0,
	0x009002A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWBossController_Statics::Class_MetaDataParams), Z_Construct_UClass_AWBossController_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWBossController()
{
	if (!Z_Registration_Info_UClass_AWBossController.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWBossController.OuterSingleton, Z_Construct_UClass_AWBossController_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWBossController.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<AWBossController>()
{
	return AWBossController::StaticClass();
}
AWBossController::AWBossController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWBossController);
AWBossController::~AWBossController() {}
// End Class AWBossController

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBossController_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWBossController, AWBossController::StaticClass, TEXT("AWBossController"), &Z_Registration_Info_UClass_AWBossController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWBossController), 2187574180U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBossController_h_538102385(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBossController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBossController_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
