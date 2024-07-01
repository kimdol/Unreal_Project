// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "FSM.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBAT_CENTRIC_GAME_FSM_generated_h
#error "FSM.generated.h already included, missing '#pragma once' in FSM.h"
#endif
#define COMBAT_CENTRIC_GAME_FSM_generated_h

#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_22_SPARSE_DATA
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_22_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_22_ACCESSORS
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFSM(); \
	friend struct Z_Construct_UClass_UFSM_Statics; \
public: \
	DECLARE_CLASS(UFSM, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Combat_Centric_Game"), NO_API) \
	DECLARE_SERIALIZER(UFSM)


#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFSM(UFSM&&); \
	NO_API UFSM(const UFSM&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFSM); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFSM); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFSM) \
	NO_API virtual ~UFSM();


#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_19_PROLOG
#define FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_22_SPARSE_DATA \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_22_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_22_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_22_ACCESSORS \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_22_INCLASS_NO_PURE_DECLS \
	FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> COMBAT_CENTRIC_GAME_API UClass* StaticClass<class UFSM>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h


#define FOREACH_ENUM_AISTATE(op) \
	op(AIState::AIState_Idle) \
	op(AIState::AIState_Patrol) \
	op(AIState::AIState_Chase) \
	op(AIState::AIState_Attack) 

enum class AIState : uint8;
template<> struct TIsUEnumClass<AIState> { enum { Value = true }; };
template<> COMBAT_CENTRIC_GAME_API UEnum* StaticEnum<AIState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
