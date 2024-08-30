// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Centric_Game/Public/CCGProjPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCCGProjPlayerController() {}
// Cross Module References
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_ACCGProjPlayerController();
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_ACCGProjPlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Combat_Centric_Game();
// End Cross Module References
	void ACCGProjPlayerController::StaticRegisterNativesACCGProjPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACCGProjPlayerController);
	UClass* Z_Construct_UClass_ACCGProjPlayerController_NoRegister()
	{
		return ACCGProjPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ACCGProjPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACCGProjPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Centric_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACCGProjPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACCGProjPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "CCGProjPlayerController.h" },
		{ "ModuleRelativePath", "Public/CCGProjPlayerController.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACCGProjPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACCGProjPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACCGProjPlayerController_Statics::ClassParams = {
		&ACCGProjPlayerController::StaticClass,
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
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACCGProjPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ACCGProjPlayerController_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ACCGProjPlayerController()
	{
		if (!Z_Registration_Info_UClass_ACCGProjPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACCGProjPlayerController.OuterSingleton, Z_Construct_UClass_ACCGProjPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACCGProjPlayerController.OuterSingleton;
	}
	template<> COMBAT_CENTRIC_GAME_API UClass* StaticClass<ACCGProjPlayerController>()
	{
		return ACCGProjPlayerController::StaticClass();
	}
	ACCGProjPlayerController::ACCGProjPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACCGProjPlayerController);
	ACCGProjPlayerController::~ACCGProjPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_CCGProjPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_CCGProjPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACCGProjPlayerController, ACCGProjPlayerController::StaticClass, TEXT("ACCGProjPlayerController"), &Z_Registration_Info_UClass_ACCGProjPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACCGProjPlayerController), 4242962077U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_CCGProjPlayerController_h_3452687382(TEXT("/Script/Combat_Centric_Game"),
		Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_CCGProjPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_CCGProjPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
