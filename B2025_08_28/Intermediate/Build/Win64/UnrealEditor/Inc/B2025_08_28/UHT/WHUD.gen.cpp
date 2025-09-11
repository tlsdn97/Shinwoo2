// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "B2025_08_28/Public/WHUD.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWHUD() {}

// Begin Cross Module References
B2025_08_28_API UClass* Z_Construct_UClass_AWHUD();
B2025_08_28_API UClass* Z_Construct_UClass_AWHUD_NoRegister();
B2025_08_28_API UClass* Z_Construct_UClass_UWCrossHairWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AHUD();
UPackage* Z_Construct_UPackage__Script_B2025_08_28();
// End Cross Module References

// Begin Class AWHUD
void AWHUD::StaticRegisterNativesAWHUD()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AWHUD);
UClass* Z_Construct_UClass_AWHUD_NoRegister()
{
	return AWHUD::StaticClass();
}
struct Z_Construct_UClass_AWHUD_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "WHUD.h" },
		{ "ModuleRelativePath", "Public/WHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairClass_MetaData[] = {
		{ "Category", "UI" },
		{ "ModuleRelativePath", "Public/WHUD.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CrosshairWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WHUD.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_CrosshairClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CrosshairWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWHUD>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWHUD_Statics::NewProp_CrosshairClass = { "CrosshairClass", nullptr, (EPropertyFlags)0x0024080000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWHUD, CrosshairClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UWCrossHairWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairClass_MetaData), NewProp_CrosshairClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWHUD_Statics::NewProp_CrosshairWidget = { "CrosshairWidget", nullptr, (EPropertyFlags)0x0020080000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AWHUD, CrosshairWidget), Z_Construct_UClass_UWCrossHairWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CrosshairWidget_MetaData), NewProp_CrosshairWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWHUD_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWHUD_Statics::NewProp_CrosshairClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWHUD_Statics::NewProp_CrosshairWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWHUD_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AWHUD_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AHUD,
	(UObject* (*)())Z_Construct_UPackage__Script_B2025_08_28,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AWHUD_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AWHUD_Statics::ClassParams = {
	&AWHUD::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AWHUD_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AWHUD_Statics::PropPointers),
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AWHUD_Statics::Class_MetaDataParams), Z_Construct_UClass_AWHUD_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AWHUD()
{
	if (!Z_Registration_Info_UClass_AWHUD.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AWHUD.OuterSingleton, Z_Construct_UClass_AWHUD_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AWHUD.OuterSingleton;
}
template<> B2025_08_28_API UClass* StaticClass<AWHUD>()
{
	return AWHUD::StaticClass();
}
AWHUD::AWHUD(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(AWHUD);
AWHUD::~AWHUD() {}
// End Class AWHUD

// Begin Registration
struct Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHUD_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AWHUD, AWHUD::StaticClass, TEXT("AWHUD"), &Z_Registration_Info_UClass_AWHUD, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AWHUD), 2926208315U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHUD_h_2314202567(TEXT("/Script/B2025_08_28"),
	Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHUD_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHUD_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
