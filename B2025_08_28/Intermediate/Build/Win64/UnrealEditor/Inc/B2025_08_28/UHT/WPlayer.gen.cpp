// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WPlayer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWPlayer() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_APWeapon_NoRegister();
B2025_08_28_API UClass* Z_Construct_UClass_AWPlayer();
B2025_08_28_API UClass* Z_Construct_UClass_AWPlayer_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class AWPlayer
void AWPlayer::StaticRegisterNativesAWPlayer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWPlayer);
UClass* Z_Construct_UClass_AWPlayer_NoRegister()
{
	return AWPlayer::StaticClass();
}
struct Z_Construct_UClass_AWPlayer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "WPlayer.h" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultWeapons_MetaData[] = {
		{ "Category", "Configurations" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackwardSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireRate_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultFOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomedFOV_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZoomInterpSpeed_MetaData[] = {
		{ "Category", "Camera" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MuzzleFlashFX_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImpactFX_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireSound_MetaData[] = {
		{ "Category", "Weapon" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FireMontage_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Weapons_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[] = {
		{ "Category", "State" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bHasWeapon_MetaData[] = {
		{ "Category", "WPlayer" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WPlayer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DefaultWeapons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DefaultWeapons;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_BackwardSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_FireRate;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DefaultFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomedFOV;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ZoomInterpSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MuzzleFlashFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ImpactFX;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireSound;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FireMontage;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Weapons_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Weapons;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
	static void NewProp_bHasWeapon_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasWeapon;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWPlayer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_DefaultWeapons_Inner = { "DefaultWeapons", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_APWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_DefaultWeapons = { "DefaultWeapons", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, DefaultWeapons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultWeapons_MetaData), NewProp_DefaultWeapons_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_ForwardSpeed = { "ForwardSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, ForwardSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardSpeed_MetaData), NewProp_ForwardSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_BackwardSpeed = { "BackwardSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, BackwardSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackwardSpeed_MetaData), NewProp_BackwardSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_FireRate = { "FireRate", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, FireRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireRate_MetaData), NewProp_FireRate_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_DefaultFOV = { "DefaultFOV", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, DefaultFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultFOV_MetaData), NewProp_DefaultFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_ZoomedFOV = { "ZoomedFOV", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, ZoomedFOV), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomedFOV_MetaData), NewProp_ZoomedFOV_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_ZoomInterpSpeed = { "ZoomInterpSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, ZoomInterpSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZoomInterpSpeed_MetaData), NewProp_ZoomInterpSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_MuzzleFlashFX = { "MuzzleFlashFX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, MuzzleFlashFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MuzzleFlashFX_MetaData), NewProp_MuzzleFlashFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_ImpactFX = { "ImpactFX", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, ImpactFX), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImpactFX_MetaData), NewProp_ImpactFX_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_FireSound = { "FireSound", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, FireSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireSound_MetaData), NewProp_FireSound_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_FireMontage = { "FireMontage", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, FireMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FireMontage_MetaData), NewProp_FireMontage_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_Weapons_Inner = { "Weapons", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_APWeapon_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_Weapons = { "Weapons", nullptr, (EPropertyFlags)0x0010000000020825, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, Weapons), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Weapons_MetaData), NewProp_Weapons_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0010000000020805, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, CurrentIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CurrentIndex_MetaData), NewProp_CurrentIndex_MetaData) };
void Z_Construct_UClass_AWPlayer_Statics::NewProp_bHasWeapon_SetBit(void* Obj)
{
	((AWPlayer*)Obj)->bHasWeapon = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_bHasWeapon = { "bHasWeapon", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AWPlayer), &Z_Construct_UClass_AWPlayer_Statics::NewProp_bHasWeapon_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bHasWeapon_MetaData), NewProp_bHasWeapon_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWPlayer_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWPlayer, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWPlayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_DefaultWeapons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_DefaultWeapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_ForwardSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_BackwardSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_FireRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_DefaultFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_ZoomedFOV,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_ZoomInterpSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_MuzzleFlashFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_ImpactFX,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_FireSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_FireMontage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_Weapons_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_Weapons,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_CurrentIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_bHasWeapon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWPlayer_Statics::NewProp_CameraComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWPlayer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWPlayer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWPlayer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWPlayer_Statics::ClassParams = {
	&AWPlayer::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWPlayer_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWPlayer_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWPlayer_Statics::Class_MetaDataParams), Z_Construct_UClass_AWPlayer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWPlayer()
{
	if (!Z_Registration_Info_UClass_AWPlayer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWPlayer.OuterSingleton, Z_Construct_UClass_AWPlayer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWPlayer.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<AWPlayer>()
{
	return AWPlayer::StaticClass();
}
void AWPlayer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Weapons(TEXT("Weapons"));
	const bool bIsValid = true
		&& Name_Weapons == ClassReps[(int32)ENetFields_Private::Weapons].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AWPlayer"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWPlayer);
AWPlayer::~AWPlayer() {}
// End Class AWPlayer

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WPlayer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWPlayer, AWPlayer::StaticClass, TEXT("AWPlayer"), &Z_Registration_Info_UClass_AWPlayer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWPlayer), 2184350330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WPlayer_h_317275475(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WPlayer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WPlayer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
