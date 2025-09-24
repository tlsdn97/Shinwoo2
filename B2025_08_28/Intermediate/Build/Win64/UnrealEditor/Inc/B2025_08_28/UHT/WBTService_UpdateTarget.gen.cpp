// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WBTService_UpdateTarget.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWBTService_UpdateTarget() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService();
B2025_08_28_API UClass* Z_Construct_UClass_UWBTService_UpdateTarget();
B2025_08_28_API UClass* Z_Construct_UClass_UWBTService_UpdateTarget_NoRegister();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWBTService_UpdateTarget
void UWBTService_UpdateTarget::StaticRegisterNativesUWBTService_UpdateTarget()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWBTService_UpdateTarget);
UClass* Z_Construct_UClass_UWBTService_UpdateTarget_NoRegister()
{
	return UWBTService_UpdateTarget::StaticClass();
}
struct Z_Construct_UClass_UWBTService_UpdateTarget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WBTService_UpdateTarget.h" },
		{ "ModuleRelativePath", "Public/WBTService_UpdateTarget.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWBTService_UpdateTarget>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWBTService_UpdateTarget_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWBTService_UpdateTarget_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWBTService_UpdateTarget_Statics::ClassParams = {
	&UWBTService_UpdateTarget::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWBTService_UpdateTarget_Statics::Class_MetaDataParams), Z_Construct_UClass_UWBTService_UpdateTarget_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWBTService_UpdateTarget()
{
	if (!Z_Registration_Info_UClass_UWBTService_UpdateTarget.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWBTService_UpdateTarget.OuterSingleton, Z_Construct_UClass_UWBTService_UpdateTarget_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWBTService_UpdateTarget.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<UWBTService_UpdateTarget>()
{
	return UWBTService_UpdateTarget::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWBTService_UpdateTarget);
UWBTService_UpdateTarget::~UWBTService_UpdateTarget() {}
// End Class UWBTService_UpdateTarget

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBTService_UpdateTarget_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWBTService_UpdateTarget, UWBTService_UpdateTarget::StaticClass, TEXT("UWBTService_UpdateTarget"), &Z_Registration_Info_UClass_UWBTService_UpdateTarget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWBTService_UpdateTarget), 3104154600U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBTService_UpdateTarget_h_4037425751(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBTService_UpdateTarget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBTService_UpdateTarget_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
