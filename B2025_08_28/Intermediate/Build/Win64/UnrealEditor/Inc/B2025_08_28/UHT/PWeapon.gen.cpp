// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/PWeapon.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePWeapon() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_APWeapon();
B2025_08_28_API UClass* Z_Construct_UClass_APWeapon_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class APWeapon
void APWeapon::StaticRegisterNativesAPWeapon()
{
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
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APWeapon>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
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
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
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
		{ Z_Construct_UClass_APWeapon, APWeapon::StaticClass, TEXT("APWeapon"), &Z_Registration_Info_UClass_APWeapon, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APWeapon), 49576421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_PWeapon_h_773198816(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_PWeapon_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_PWeapon_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
