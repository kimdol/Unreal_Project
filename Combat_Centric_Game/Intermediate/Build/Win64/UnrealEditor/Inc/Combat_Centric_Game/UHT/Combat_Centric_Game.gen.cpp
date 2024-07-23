// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Centric_Game/Combat_Centric_Game.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCombat_Centric_Game() {}
// Cross Module References
	COMBAT_CENTRIC_GAME_API UEnum* Z_Construct_UEnum_Combat_Centric_Game_CCGProjAbilityID();
	UPackage* Z_Construct_UPackage__Script_Combat_Centric_Game();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_CCGProjAbilityID;
	static UEnum* CCGProjAbilityID_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_CCGProjAbilityID.OuterSingleton)
		{
			Z_Registration_Info_UEnum_CCGProjAbilityID.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Combat_Centric_Game_CCGProjAbilityID, (UObject*)Z_Construct_UPackage__Script_Combat_Centric_Game(), TEXT("CCGProjAbilityID"));
		}
		return Z_Registration_Info_UEnum_CCGProjAbilityID.OuterSingleton;
	}
	template<> COMBAT_CENTRIC_GAME_API UEnum* StaticEnum<CCGProjAbilityID>()
	{
		return CCGProjAbilityID_StaticEnum();
	}
	struct Z_Construct_UEnum_Combat_Centric_Game_CCGProjAbilityID_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Combat_Centric_Game_CCGProjAbilityID_Statics::Enumerators[] = {
		{ "CCGProjAbilityID::None", (int64)CCGProjAbilityID::None },
		{ "CCGProjAbilityID::ConfirmTarget", (int64)CCGProjAbilityID::ConfirmTarget },
		{ "CCGProjAbilityID::CancelTarget", (int64)CCGProjAbilityID::CancelTarget },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Combat_Centric_Game_CCGProjAbilityID_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "CancelTarget.DisplayName", "CancelTarget" },
		{ "CancelTarget.Name", "CCGProjAbilityID::CancelTarget" },
		{ "ConfirmTarget.DisplayName", "ConfirmTarget" },
		{ "ConfirmTarget.Name", "CCGProjAbilityID::ConfirmTarget" },
		{ "ModuleRelativePath", "Combat_Centric_Game.h" },
		{ "None.DisplayName", "None" },
		{ "None.Name", "CCGProjAbilityID::None" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Combat_Centric_Game_CCGProjAbilityID_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Combat_Centric_Game,
		nullptr,
		"CCGProjAbilityID",
		"CCGProjAbilityID",
		Z_Construct_UEnum_Combat_Centric_Game_CCGProjAbilityID_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Combat_Centric_Game_CCGProjAbilityID_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Combat_Centric_Game_CCGProjAbilityID_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Combat_Centric_Game_CCGProjAbilityID_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Combat_Centric_Game_CCGProjAbilityID()
	{
		if (!Z_Registration_Info_UEnum_CCGProjAbilityID.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CCGProjAbilityID.InnerSingleton, Z_Construct_UEnum_Combat_Centric_Game_CCGProjAbilityID_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_CCGProjAbilityID.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Combat_Centric_Game_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Combat_Centric_Game_h_Statics::EnumInfo[] = {
		{ CCGProjAbilityID_StaticEnum, TEXT("CCGProjAbilityID"), &Z_Registration_Info_UEnum_CCGProjAbilityID, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2553029865U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Combat_Centric_Game_h_4060685026(TEXT("/Script/Combat_Centric_Game"),
		nullptr, 0,
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Combat_Centric_Game_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Combat_Centric_Game_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
