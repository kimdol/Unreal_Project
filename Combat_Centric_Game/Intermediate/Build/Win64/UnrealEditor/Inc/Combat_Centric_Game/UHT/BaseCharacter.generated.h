// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "BaseCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseCharacterStatus;
class USplineComponent;
class UStaticMesh;
#ifdef COMBAT_CENTRIC_GAME_BaseCharacter_generated_h
#error "BaseCharacter.generated.h already included, missing '#pragma once' in BaseCharacter.h"
#endif
#define COMBAT_CENTRIC_GAME_BaseCharacter_generated_h

#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_13_SPARSE_DATA
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_13_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTryActiveAbility); \
	DECLARE_FUNCTION(execClearTrajectory); \
	DECLARE_FUNCTION(execUpdateTrajectory); \
	DECLARE_FUNCTION(execGetStatus);


#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_13_ACCESSORS
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABaseCharacter(); \
	friend struct Z_Construct_UClass_ABaseCharacter_Statics; \
public: \
	DECLARE_CLASS(ABaseCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Combat_Centric_Game"), NO_API) \
	DECLARE_SERIALIZER(ABaseCharacter) \
	virtual UObject* _getUObject() const override { return const_cast<ABaseCharacter*>(this); }


#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABaseCharacter(ABaseCharacter&&); \
	NO_API ABaseCharacter(const ABaseCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABaseCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABaseCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABaseCharacter) \
	NO_API virtual ~ABaseCharacter();


#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_10_PROLOG
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_13_SPARSE_DATA \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_13_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_13_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_13_ACCESSORS \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_13_INCLASS_NO_PURE_DECLS \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBAT_CENTRIC_GAME_API UClass* StaticClass<class ABaseCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
