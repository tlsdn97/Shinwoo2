// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WHealingPotion.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef B2025_08_28_WHealingPotion_generated_h
#error "WHealingPotion.generated.h already included, missing '#pragma once' in WHealingPotion.h"
#endif
#define B2025_08_28_WHealingPotion_generated_h

#define FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHealingPotion_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHealingPotion_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWHealingPotion(); \
	friend struct Z_Construct_UClass_AWHealingPotion_Statics; \
public: \
	DECLARE_CLASS(AWHealingPotion, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/B2025_08_28"), NO_API) \
	DECLARE_SERIALIZER(AWHealingPotion)


#define FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHealingPotion_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWHealingPotion(AWHealingPotion&&); \
	AWHealingPotion(const AWHealingPotion&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWHealingPotion); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWHealingPotion); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWHealingPotion) \
	NO_API virtual ~AWHealingPotion();


#define FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHealingPotion_h_9_PROLOG
#define FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHealingPotion_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHealingPotion_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHealingPotion_h_12_INCLASS_NO_PURE_DECLS \
	FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHealingPotion_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> B2025_08_28_API UClass* StaticClass<class AWHealingPotion>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WHealingPotion_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
