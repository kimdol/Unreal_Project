// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ScriptCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBAT_CENTRIC_GAME_ScriptCharacter_generated_h
#error "ScriptCharacter.generated.h already included, missing '#pragma once' in ScriptCharacter.h"
#endif
#define COMBAT_CENTRIC_GAME_ScriptCharacter_generated_h

#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_11_DELEGATE \
COMBAT_CENTRIC_GAME_API void FDDynamicSample_DelegateWrapper(const FScriptDelegate& DDynamicSample, int32 intvalue);


#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_16_SPARSE_DATA
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_16_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSampleFunc);


#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_16_ACCESSORS
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAScriptCharacter(); \
	friend struct Z_Construct_UClass_AScriptCharacter_Statics; \
public: \
	DECLARE_CLASS(AScriptCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Combat_Centric_Game"), NO_API) \
	DECLARE_SERIALIZER(AScriptCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<AScriptCharacter*>(this); }


#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AScriptCharacter(AScriptCharacter&&); \
	NO_API AScriptCharacter(const AScriptCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AScriptCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AScriptCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AScriptCharacter) \
	NO_API virtual ~AScriptCharacter();


#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_13_PROLOG
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_16_SPARSE_DATA \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_16_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_16_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_16_ACCESSORS \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_16_INCLASS_NO_PURE_DECLS \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBAT_CENTRIC_GAME_API UClass* StaticClass<class AScriptCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
