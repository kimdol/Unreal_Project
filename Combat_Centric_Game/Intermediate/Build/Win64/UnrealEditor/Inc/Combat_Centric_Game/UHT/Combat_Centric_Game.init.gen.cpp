// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombat_Centric_Game_init() {}
	COMBAT_CENTRIC_GAME_API UFunction* Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature();
	COMBAT_CENTRIC_GAME_API UFunction* Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Combat_Centric_Game;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Combat_Centric_Game()
	{
		if (!Z_Registration_Info_UPackage__Script_Combat_Centric_Game.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Combat_Centric_Game",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0x4FB2F013,
				0xDFA89A79,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Combat_Centric_Game.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Combat_Centric_Game.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Combat_Centric_Game(Z_Construct_UPackage__Script_Combat_Centric_Game, TEXT("/Script/Combat_Centric_Game"), Z_Registration_Info_UPackage__Script_Combat_Centric_Game, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x4FB2F013, 0xDFA89A79));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
