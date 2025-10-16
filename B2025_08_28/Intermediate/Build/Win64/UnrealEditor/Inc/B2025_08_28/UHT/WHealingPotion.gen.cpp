// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WHealingPotion.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWHealingPotion() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_AWHealingPotion();
B2025_08_28_API UClass* Z_Construct_UClass_AWHealingPotion_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class AWHealingPotion
void AWHealingPotion::StaticRegisterNativesAWHealingPotion()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWHealingPotion);
UClass* Z_Construct_UClass_AWHealingPotion_NoRegister()
{
	return AWHealingPotion::StaticClass();
}
struct Z_Construct_UClass_AWHealingPotion_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WHealingPotion.h" },
		{ "ModuleRelativePath", "Public/WHealingPotion.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWHealingPotion>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWHealingPotion_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWHealingPotion_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWHealingPotion_Statics::ClassParams = {
	&AWHealingPotion::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWHealingPotion_Statics::Class_MetaDataParams), Z_Construct_UClass_AWHealingPotion_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWHealingPotion()
{
	if (!Z_Registration_Info_UClass_AWHealingPotion.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWHealingPotion.OuterSingleton, Z_Construct_UClass_AWHealingPotion_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWHealingPotion.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<AWHealingPotion>()
{
	return AWHealingPotion::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWHealingPotion);
AWHealingPotion::~AWHealingPotion() {}
// End Class AWHealingPotion

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHealingPotion_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWHealingPotion, AWHealingPotion::StaticClass, TEXT("AWHealingPotion"), &Z_Registration_Info_UClass_AWHealingPotion, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWHealingPotion), 127909054U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHealingPotion_h_3394291071(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHealingPotion_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHealingPotion_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
