// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Centric_Game/Public/ScriptCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScriptCharacter() {}
// Cross Module References
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_AScriptCharacter();
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_AScriptCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Combat_Centric_Game();
// End Cross Module References
	void AScriptCharacter::StaticRegisterNativesAScriptCharacter()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScriptCharacter);
	UClass* Z_Construct_UClass_AScriptCharacter_NoRegister()
	{
		return AScriptCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AScriptCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScriptCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Centric_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScriptCharacter_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScriptCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ScriptCharacter.h" },
		{ "ModuleRelativePath", "Public/ScriptCharacter.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScriptCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScriptCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AScriptCharacter_Statics::ClassParams = {
		&AScriptCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScriptCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AScriptCharacter_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AScriptCharacter()
	{
		if (!Z_Registration_Info_UClass_AScriptCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AScriptCharacter.OuterSingleton, Z_Construct_UClass_AScriptCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AScriptCharacter.OuterSingleton;
	}
	template<> COMBAT_CENTRIC_GAME_API UClass* StaticClass<AScriptCharacter>()
	{
		return AScriptCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AScriptCharacter);
	AScriptCharacter::~AScriptCharacter() {}
	struct Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AScriptCharacter, AScriptCharacter::StaticClass, TEXT("AScriptCharacter"), &Z_Registration_Info_UClass_AScriptCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScriptCharacter), 1058421553U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_2713714534(TEXT("/Script/Combat_Centric_Game"),
		Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
