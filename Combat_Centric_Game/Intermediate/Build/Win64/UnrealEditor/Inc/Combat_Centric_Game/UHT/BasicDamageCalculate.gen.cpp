// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Centric_Game/Public/BasicDamageCalculate.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicDamageCalculate() {}
// Cross Module References
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_UBasicDamageCalculate();
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_UBasicDamageCalculate_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffectExecutionCalculation();
	UPackage* Z_Construct_UPackage__Script_Combat_Centric_Game();
// End Cross Module References
	void UBasicDamageCalculate::StaticRegisterNativesUBasicDamageCalculate()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasicDamageCalculate);
	UClass* Z_Construct_UClass_UBasicDamageCalculate_NoRegister()
	{
		return UBasicDamageCalculate::StaticClass();
	}
	struct Z_Construct_UClass_UBasicDamageCalculate_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasicDamageCalculate_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayEffectExecutionCalculation,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Centric_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicDamageCalculate_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicDamageCalculate_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BasicDamageCalculate.h" },
		{ "ModuleRelativePath", "Public/BasicDamageCalculate.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasicDamageCalculate_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicDamageCalculate>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicDamageCalculate_Statics::ClassParams = {
		&UBasicDamageCalculate::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicDamageCalculate_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasicDamageCalculate_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBasicDamageCalculate()
	{
		if (!Z_Registration_Info_UClass_UBasicDamageCalculate.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicDamageCalculate.OuterSingleton, Z_Construct_UClass_UBasicDamageCalculate_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasicDamageCalculate.OuterSingleton;
	}
	template<> COMBAT_CENTRIC_GAME_API UClass* StaticClass<UBasicDamageCalculate>()
	{
		return UBasicDamageCalculate::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicDamageCalculate);
	UBasicDamageCalculate::~UBasicDamageCalculate() {}
	struct Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BasicDamageCalculate_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BasicDamageCalculate_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasicDamageCalculate, UBasicDamageCalculate::StaticClass, TEXT("UBasicDamageCalculate"), &Z_Registration_Info_UClass_UBasicDamageCalculate, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicDamageCalculate), 2934429421U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BasicDamageCalculate_h_1849335042(TEXT("/Script/Combat_Centric_Game"),
		Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BasicDamageCalculate_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BasicDamageCalculate_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
