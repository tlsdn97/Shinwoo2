// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WBoss.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APawn;
#ifdef B2025_08_28_WBoss_generated_h
#error "WBoss.generated.h already included, missing '#pragma once' in WBoss.h"
#endif
#define B2025_08_28_WBoss_generated_h

#define FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBoss_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSeePawn);


#define FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBoss_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWBoss(); \
	friend struct Z_Construct_UClass_AWBoss_Statics; \
public: \
	DECLARE_CLASS(AWBoss, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/B2025_08_28"), NO_API) \
	DECLARE_SERIALIZER(AWBoss)


#define FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBoss_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	AWBoss(AWBoss&&); \
	AWBoss(const AWBoss&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWBoss); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWBoss); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWBoss) \
	NO_API virtual ~AWBoss();


#define FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBoss_h_9_PROLOG
#define FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBoss_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBoss_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBoss_h_12_INCLASS_NO_PURE_DECLS \
	FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBoss_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> B2025_08_28_API UClass* StaticClass<class AWBoss>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PP_Shinwoo2_Shinwoo2_B2025_08_28_Source_B2025_08_28_Public_WBoss_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
