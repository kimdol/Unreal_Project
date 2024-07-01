// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Centric_Game/Public/PoolingObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoolingObject() {}
// Cross Module References
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_UPoolingObject();
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_UPoolingObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Combat_Centric_Game();
// End Cross Module References
	void UPoolingObject::StaticRegisterNativesUPoolingObject()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UPoolingObject);
	UClass* Z_Construct_UClass_UPoolingObject_NoRegister()
	{
		return UPoolingObject::StaticClass();
	}
	struct Z_Construct_UClass_UPoolingObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoolingObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Centric_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolingObject_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoolingObject_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoolingObject.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoolingObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPoolingObject>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UPoolingObject_Statics::ClassParams = {
		&UPoolingObject::StaticClass,
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
		0x000840A1u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UPoolingObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UPoolingObject_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UPoolingObject()
	{
		if (!Z_Registration_Info_UClass_UPoolingObject.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UPoolingObject.OuterSingleton, Z_Construct_UClass_UPoolingObject_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UPoolingObject.OuterSingleton;
	}
	template<> COMBAT_CENTRIC_GAME_API UClass* StaticClass<UPoolingObject>()
	{
		return UPoolingObject::StaticClass();
	}
	UPoolingObject::UPoolingObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolingObject);
	UPoolingObject::~UPoolingObject() {}
	struct Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_PoolingObject_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_PoolingObject_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UPoolingObject, UPoolingObject::StaticClass, TEXT("UPoolingObject"), &Z_Registration_Info_UClass_UPoolingObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UPoolingObject), 4192054050U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_PoolingObject_h_211800308(TEXT("/Script/Combat_Centric_Game"),
		Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_PoolingObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_PoolingObject_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
