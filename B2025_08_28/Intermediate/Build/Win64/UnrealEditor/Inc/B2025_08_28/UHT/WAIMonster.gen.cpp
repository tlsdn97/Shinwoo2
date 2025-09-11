// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WAIMonster.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWAIMonster() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_AWAIMonster();
B2025_08_28_API UClass* Z_Construct_UClass_AWAIMonster_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class AWAIMonster
void AWAIMonster::StaticRegisterNativesAWAIMonster()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWAIMonster>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_AWAIMonster, AWAIMonster::StaticClass, TEXT("AWAIMonster"), &Z_Registration_Info_UClass_AWAIMonster, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWAIMonster), 4136130641U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIMonster_h_3715108061(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIMonster_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAIMonster_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
