// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeB2025_08_28_init() {}
	B2025_08_28_API UFunction* Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature();
	B2025_08_28_API UFunction* Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_B2025_08_28;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_B2025_08_28()
	{
		if (!Z_Registration_Info_UPackage__Script_B2025_08_28.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_B2025_08_28_OnHealthChanged__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_B2025_08_28_OnPotionCountChanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/B2025_08_28",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x93C439FF,
				0xA49DB667,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_B2025_08_28.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_B2025_08_28.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_B2025_08_28(Z_Construct_UPackage__Script_B2025_08_28, TEXT("/Script/B2025_08_28"), Z_Registration_Info_UPackage__Script_B2025_08_28, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x93C439FF, 0xA49DB667));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
