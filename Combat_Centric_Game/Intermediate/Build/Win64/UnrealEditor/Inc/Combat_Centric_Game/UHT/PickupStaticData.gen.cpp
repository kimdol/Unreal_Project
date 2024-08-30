// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Centric_Game/Public/PickupStaticData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePickupStaticData() {}
// Cross Module References
	COMBAT_CENTRIC_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FPickupStaticData();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	UPackage* Z_Construct_UPackage__Script_Combat_Centric_Game();
// End Cross Module References

static_assert(std::is_polymorphic<FPickupStaticData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FPickupStaticData cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PickupStaticData;
class UScriptStruct* FPickupStaticData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PickupStaticData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PickupStaticData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPickupStaticData, (UObject*)Z_Construct_UPackage__Script_Combat_Centric_Game(), TEXT("PickupStaticData"));
	}
	return Z_Registration_Info_UScriptStruct_PickupStaticData.OuterSingleton;
}
template<> COMBAT_CENTRIC_GAME_API UScriptStruct* StaticStruct<FPickupStaticData>()
{
	return FPickupStaticData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPickupStaticData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp__name;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__pickup_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp__pickup;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickupStaticData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PickupStaticData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPickupStaticData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPickupStaticData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickupStaticData_Statics::NewProp__name_MetaData[] = {
		{ "Category", "PickupStaticData" },
		{ "ModuleRelativePath", "Public/PickupStaticData.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPickupStaticData_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPickupStaticData, _name), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupStaticData_Statics::NewProp__name_MetaData), Z_Construct_UScriptStruct_FPickupStaticData_Statics::NewProp__name_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPickupStaticData_Statics::NewProp__pickup_MetaData[] = {
		{ "Category", "PickupStaticData" },
		{ "ModuleRelativePath", "Public/PickupStaticData.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPickupStaticData_Statics::NewProp__pickup = { "_pickup", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FPickupStaticData, _pickup), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupStaticData_Statics::NewProp__pickup_MetaData), Z_Construct_UScriptStruct_FPickupStaticData_Statics::NewProp__pickup_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPickupStaticData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickupStaticData_Statics::NewProp__name,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPickupStaticData_Statics::NewProp__pickup,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPickupStaticData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Centric_Game,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"PickupStaticData",
		Z_Construct_UScriptStruct_FPickupStaticData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupStaticData_Statics::PropPointers),
		sizeof(FPickupStaticData),
		alignof(FPickupStaticData),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupStaticData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FPickupStaticData_Statics::Struct_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPickupStaticData_Statics::PropPointers) < 2048);
	UScriptStruct* Z_Construct_UScriptStruct_FPickupStaticData()
	{
		if (!Z_Registration_Info_UScriptStruct_PickupStaticData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PickupStaticData.InnerSingleton, Z_Construct_UScriptStruct_FPickupStaticData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PickupStaticData.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_PickupStaticData_h_Statics
	{
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_PickupStaticData_h_Statics::ScriptStructInfo[] = {
		{ FPickupStaticData::StaticStruct, Z_Construct_UScriptStruct_FPickupStaticData_Statics::NewStructOps, TEXT("PickupStaticData"), &Z_Registration_Info_UScriptStruct_PickupStaticData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPickupStaticData), 3794936471U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_PickupStaticData_h_3253137705(TEXT("/Script/Combat_Centric_Game"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_PickupStaticData_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_PickupStaticData_h_Statics::ScriptStructInfo),
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
