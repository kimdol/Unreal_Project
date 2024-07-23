// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Combat_Centric_Game.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef COMBAT_CENTRIC_GAME_Combat_Centric_Game_generated_h
#error "Combat_Centric_Game.generated.h already included, missing '#pragma once' in Combat_Centric_Game.h"
#endif
#define COMBAT_CENTRIC_GAME_Combat_Centric_Game_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Combat_Centric_Game_Source_Combat_Centric_Game_Combat_Centric_Game_h


#define FOREACH_ENUM_CCGPROJABILITYID(op) \
	op(CCGProjAbilityID::None) \
	op(CCGProjAbilityID::ConfirmTarget) \
	op(CCGProjAbilityID::CancelTarget) 

enum class CCGProjAbilityID;
template<> struct TIsUEnumClass<CCGProjAbilityID> { enum { Value = true }; };
template<> COMBAT_CENTRIC_GAME_API UEnum* StaticEnum<CCGProjAbilityID>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
