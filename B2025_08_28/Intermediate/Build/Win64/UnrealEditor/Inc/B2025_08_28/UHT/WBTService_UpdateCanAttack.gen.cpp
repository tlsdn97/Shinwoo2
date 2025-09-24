// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WBTService_UpdateCanAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWBTService_UpdateCanAttack() {}

// Begin Cross Module References
AIMODULE_API UClass* Z_Construct_UClass_UBTService_BlackboardBase();
B2025_08_28_API UClass* Z_Construct_UClass_UWBTService_UpdateCanAttack();
B2025_08_28_API UClass* Z_Construct_UClass_UWBTService_UpdateCanAttack_NoRegister();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWBTService_UpdateCanAttack
void UWBTService_UpdateCanAttack::StaticRegisterNativesUWBTService_UpdateCanAttack()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWBTService_UpdateCanAttack);
UClass* Z_Construct_UClass_UWBTService_UpdateCanAttack_NoRegister()
{
	return UWBTService_UpdateCanAttack::StaticClass();
}
struct Z_Construct_UClass_UWBTService_UpdateCanAttack_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WBTService_UpdateCanAttack.h" },
		{ "ModuleRelativePath", "Public/WBTService_UpdateCanAttack.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWBTService_UpdateCanAttack>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UWBTService_UpdateCanAttack_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBTService_BlackboardBase,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWBTService_UpdateCanAttack_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWBTService_UpdateCanAttack_Statics::ClassParams = {
	&UWBTService_UpdateCanAttack::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWBTService_UpdateCanAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UWBTService_UpdateCanAttack_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWBTService_UpdateCanAttack()
{
	if (!Z_Registration_Info_UClass_UWBTService_UpdateCanAttack.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWBTService_UpdateCanAttack.OuterSingleton, Z_Construct_UClass_UWBTService_UpdateCanAttack_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWBTService_UpdateCanAttack.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<UWBTService_UpdateCanAttack>()
{
	return UWBTService_UpdateCanAttack::StaticClass();
}
UWBTService_UpdateCanAttack::UWBTService_UpdateCanAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWBTService_UpdateCanAttack);
UWBTService_UpdateCanAttack::~UWBTService_UpdateCanAttack() {}
// End Class UWBTService_UpdateCanAttack

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBTService_UpdateCanAttack_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWBTService_UpdateCanAttack, UWBTService_UpdateCanAttack::StaticClass, TEXT("UWBTService_UpdateCanAttack"), &Z_Registration_Info_UClass_UWBTService_UpdateCanAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWBTService_UpdateCanAttack), 2044745363U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBTService_UpdateCanAttack_h_989685169(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBTService_UpdateCanAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBTService_UpdateCanAttack_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
