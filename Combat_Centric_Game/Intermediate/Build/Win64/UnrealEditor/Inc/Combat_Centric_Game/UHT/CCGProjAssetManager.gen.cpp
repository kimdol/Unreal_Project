// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Centric_Game/Public/CCGProjAssetManager.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCCGProjAssetManager() {}
// Cross Module References
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_UCCGProjAssetManager();
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_UCCGProjAssetManager_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAssetManager();
	UPackage* Z_Construct_UPackage__Script_Combat_Centric_Game();
// End Cross Module References
	void UCCGProjAssetManager::StaticRegisterNativesUCCGProjAssetManager()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UCCGProjAssetManager);
	UClass* Z_Construct_UClass_UCCGProjAssetManager_NoRegister()
	{
		return UCCGProjAssetManager::StaticClass();
	}
	struct Z_Construct_UClass_UCCGProjAssetManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCCGProjAssetManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetManager,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Centric_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UCCGProjAssetManager_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCCGProjAssetManager_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "CCGProjAssetManager.h" },
		{ "ModuleRelativePath", "Public/CCGProjAssetManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCCGProjAssetManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCCGProjAssetManager>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UCCGProjAssetManager_Statics::ClassParams = {
		&UCCGProjAssetManager::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UCCGProjAssetManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UCCGProjAssetManager_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UCCGProjAssetManager()
	{
		if (!Z_Registration_Info_UClass_UCCGProjAssetManager.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UCCGProjAssetManager.OuterSingleton, Z_Construct_UClass_UCCGProjAssetManager_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UCCGProjAssetManager.OuterSingleton;
	}
	template<> COMBAT_CENTRIC_GAME_API UClass* StaticClass<UCCGProjAssetManager>()
	{
		return UCCGProjAssetManager::StaticClass();
	}
	UCCGProjAssetManager::UCCGProjAssetManager() {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCCGProjAssetManager);
	UCCGProjAssetManager::~UCCGProjAssetManager() {}
	struct Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_CCGProjAssetManager_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_CCGProjAssetManager_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UCCGProjAssetManager, UCCGProjAssetManager::StaticClass, TEXT("UCCGProjAssetManager"), &Z_Registration_Info_UClass_UCCGProjAssetManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UCCGProjAssetManager), 1225332227U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_CCGProjAssetManager_h_3998824142(TEXT("/Script/Combat_Centric_Game"),
		Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_CCGProjAssetManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_CCGProjAssetManager_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
