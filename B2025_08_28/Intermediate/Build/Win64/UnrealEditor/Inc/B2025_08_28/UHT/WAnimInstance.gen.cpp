// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WAnimInstance.h"
#include "Runtime/Engine/Classes/Components/SkeletalMeshComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWAnimInstance() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_UWAnimInstance();
B2025_08_28_API UClass* Z_Construct_UClass_UWAnimInstance_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class UWAnimInstance
void UWAnimInstance::StaticRegisterNativesUWAnimInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWAnimInstance);
UClass* Z_Construct_UClass_UWAnimInstance_NoRegister()
{
	return UWAnimInstance::StaticClass();
}
struct Z_Construct_UClass_UWAnimInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "WAnimInstance.h" },
		{ "ModuleRelativePath", "Public/WAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ForwardSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/WAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RightSpeed_MetaData[] = {
		{ "Category", "Movement" },
		{ "ModuleRelativePath", "Public/WAnimInstance.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MovementAnimations_MetaData[] = {
		{ "Category", "Anim" },
		{ "ModuleRelativePath", "Public/WAnimInstance.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ForwardSpeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RightSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MovementAnimations_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_MovementAnimations;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWAnimInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWAnimInstance_Statics::NewProp_ForwardSpeed = { "ForwardSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWAnimInstance, ForwardSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ForwardSpeed_MetaData), NewProp_ForwardSpeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UWAnimInstance_Statics::NewProp_RightSpeed = { "RightSpeed", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWAnimInstance, RightSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RightSpeed_MetaData), NewProp_RightSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWAnimInstance_Statics::NewProp_MovementAnimations_Inner = { "MovementAnimations", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UWAnimInstance_Statics::NewProp_MovementAnimations = { "MovementAnimations", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWAnimInstance, MovementAnimations), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MovementAnimations_MetaData), NewProp_MovementAnimations_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWAnimInstance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWAnimInstance_Statics::NewProp_ForwardSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWAnimInstance_Statics::NewProp_RightSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWAnimInstance_Statics::NewProp_MovementAnimations_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWAnimInstance_Statics::NewProp_MovementAnimations,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWAnimInstance_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWAnimInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAnimInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWAnimInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWAnimInstance_Statics::ClassParams = {
	&UWAnimInstance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWAnimInstance_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWAnimInstance_Statics::PropPointers),
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWAnimInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UWAnimInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWAnimInstance()
{
	if (!Z_Registration_Info_UClass_UWAnimInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWAnimInstance.OuterSingleton, Z_Construct_UClass_UWAnimInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWAnimInstance.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<UWAnimInstance>()
{
	return UWAnimInstance::StaticClass();
}
UWAnimInstance::UWAnimInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWAnimInstance);
UWAnimInstance::~UWAnimInstance() {}
// End Class UWAnimInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAnimInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWAnimInstance, UWAnimInstance::StaticClass, TEXT("UWAnimInstance"), &Z_Registration_Info_UClass_UWAnimInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWAnimInstance), 4030788244U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAnimInstance_h_1659371048(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAnimInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WAnimInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
