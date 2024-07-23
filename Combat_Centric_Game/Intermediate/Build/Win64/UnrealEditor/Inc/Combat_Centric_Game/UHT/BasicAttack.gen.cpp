// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Centric_Game/Public/BasicAttack.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBasicAttack() {}
// Cross Module References
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_UBasicAttack();
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_UBasicAttack_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayEffect_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Combat_Centric_Game();
// End Cross Module References
	void UBasicAttack::StaticRegisterNativesUBasicAttack()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBasicAttack);
	UClass* Z_Construct_UClass_UBasicAttack_NoRegister()
	{
		return UBasicAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBasicAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__damageEffect_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp__damageEffect;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__damageRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__damageRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBasicAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Centric_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttack_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicAttack_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BasicAttack.h" },
		{ "ModuleRelativePath", "Public/BasicAttack.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicAttack_Statics::NewProp__damageEffect_MetaData[] = {
		{ "Category", "BasicAttack" },
		{ "ModuleRelativePath", "Public/BasicAttack.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UBasicAttack_Statics::NewProp__damageEffect = { "_damageEffect", nullptr, (EPropertyFlags)0x0014000000000015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttack, _damageEffect), Z_Construct_UClass_UClass, Z_Construct_UClass_UGameplayEffect_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttack_Statics::NewProp__damageEffect_MetaData), Z_Construct_UClass_UBasicAttack_Statics::NewProp__damageEffect_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBasicAttack_Statics::NewProp__damageRate_MetaData[] = {
		{ "Category", "BasicAttack" },
		{ "ModuleRelativePath", "Public/BasicAttack.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBasicAttack_Statics::NewProp__damageRate = { "_damageRate", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBasicAttack, _damageRate), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttack_Statics::NewProp__damageRate_MetaData), Z_Construct_UClass_UBasicAttack_Statics::NewProp__damageRate_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBasicAttack_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttack_Statics::NewProp__damageEffect,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBasicAttack_Statics::NewProp__damageRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBasicAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBasicAttack>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBasicAttack_Statics::ClassParams = {
		&UBasicAttack::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBasicAttack_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttack_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttack_Statics::Class_MetaDataParams), Z_Construct_UClass_UBasicAttack_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBasicAttack_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBasicAttack()
	{
		if (!Z_Registration_Info_UClass_UBasicAttack.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBasicAttack.OuterSingleton, Z_Construct_UClass_UBasicAttack_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBasicAttack.OuterSingleton;
	}
	template<> COMBAT_CENTRIC_GAME_API UClass* StaticClass<UBasicAttack>()
	{
		return UBasicAttack::StaticClass();
	}
	UBasicAttack::UBasicAttack(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBasicAttack);
	UBasicAttack::~UBasicAttack() {}
	struct Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BasicAttack_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BasicAttack_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBasicAttack, UBasicAttack::StaticClass, TEXT("UBasicAttack"), &Z_Registration_Info_UClass_UBasicAttack, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBasicAttack), 3410977959U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BasicAttack_h_3477927100(TEXT("/Script/Combat_Centric_Game"),
		Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BasicAttack_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BasicAttack_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
