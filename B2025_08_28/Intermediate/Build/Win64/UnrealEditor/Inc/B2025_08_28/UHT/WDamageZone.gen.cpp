// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WDamageZone.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWDamageZone() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_AWDamageZone();
B2025_08_28_API UClass* Z_Construct_UClass_AWDamageZone_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class AWDamageZone
void AWDamageZone::StaticRegisterNativesAWDamageZone()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWDamageZone);
UClass* Z_Construct_UClass_AWDamageZone_NoRegister()
{
	return AWDamageZone::StaticClass();
}
struct Z_Construct_UClass_AWDamageZone_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "WDamageZone.h" },
		{ "ModuleRelativePath", "Public/WDamageZone.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWDamageZone>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AWDamageZone_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWDamageZone_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWDamageZone_Statics::ClassParams = {
	&AWDamageZone::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWDamageZone_Statics::Class_MetaDataParams), Z_Construct_UClass_AWDamageZone_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWDamageZone()
{
	if (!Z_Registration_Info_UClass_AWDamageZone.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWDamageZone.OuterSingleton, Z_Construct_UClass_AWDamageZone_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWDamageZone.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<AWDamageZone>()
{
	return AWDamageZone::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWDamageZone);
AWDamageZone::~AWDamageZone() {}
// End Class AWDamageZone

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WDamageZone_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWDamageZone, AWDamageZone::StaticClass, TEXT("AWDamageZone"), &Z_Registration_Info_UClass_AWDamageZone, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWDamageZone), 3246835803U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WDamageZone_h_3817125115(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WDamageZone_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WDamageZone_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
