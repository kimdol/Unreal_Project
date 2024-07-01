// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Centric_Game/Public/FSM.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFSM() {}
// Cross Module References
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_UFSM();
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_UFSM_NoRegister();
	COMBAT_CENTRIC_GAME_API UEnum* Z_Construct_UEnum_Combat_Centric_Game_AIState();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Combat_Centric_Game();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_AIState;
	static UEnum* AIState_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_AIState.OuterSingleton)
		{
			Z_Registration_Info_UEnum_AIState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_Combat_Centric_Game_AIState, (UObject*)Z_Construct_UPackage__Script_Combat_Centric_Game(), TEXT("AIState"));
		}
		return Z_Registration_Info_UEnum_AIState.OuterSingleton;
	}
	template<> COMBAT_CENTRIC_GAME_API UEnum* StaticEnum<AIState>()
	{
		return AIState_StaticEnum();
	}
	struct Z_Construct_UEnum_Combat_Centric_Game_AIState_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_Combat_Centric_Game_AIState_Statics::Enumerators[] = {
		{ "AIState::AIState_Idle", (int64)AIState::AIState_Idle },
		{ "AIState::AIState_Patrol", (int64)AIState::AIState_Patrol },
		{ "AIState::AIState_Chase", (int64)AIState::AIState_Chase },
		{ "AIState::AIState_Attack", (int64)AIState::AIState_Attack },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_Combat_Centric_Game_AIState_Statics::Enum_MetaDataParams[] = {
		{ "AIState_Attack.DisplayName", "Attack" },
		{ "AIState_Attack.Name", "AIState::AIState_Attack" },
		{ "AIState_Chase.DisplayName", "Chase" },
		{ "AIState_Chase.Name", "AIState::AIState_Chase" },
		{ "AIState_Idle.DisplayName", "Idle" },
		{ "AIState_Idle.Name", "AIState::AIState_Idle" },
		{ "AIState_Patrol.DisplayName", "Patrol" },
		{ "AIState_Patrol.Name", "AIState::AIState_Patrol" },
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FSM.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_Combat_Centric_Game_AIState_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_Combat_Centric_Game,
		nullptr,
		"AIState",
		"AIState",
		Z_Construct_UEnum_Combat_Centric_Game_AIState_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_Combat_Centric_Game_AIState_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_Combat_Centric_Game_AIState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_Combat_Centric_Game_AIState_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_Combat_Centric_Game_AIState()
	{
		if (!Z_Registration_Info_UEnum_AIState.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_AIState.InnerSingleton, Z_Construct_UEnum_Combat_Centric_Game_AIState_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_AIState.InnerSingleton;
	}
	void UFSM::StaticRegisterNativesUFSM()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UFSM);
	UClass* Z_Construct_UClass_UFSM_NoRegister()
	{
		return UFSM::StaticClass();
	}
	struct Z_Construct_UClass_UFSM_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp__currentState_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__currentState_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp__currentState;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__speed;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFSM_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Centric_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "FSM.h" },
		{ "ModuleRelativePath", "Public/FSM.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UFSM_Statics::NewProp__currentState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_Statics::NewProp__currentState_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/FSM.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UFSM_Statics::NewProp__currentState = { "_currentState", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFSM, _currentState), Z_Construct_UEnum_Combat_Centric_Game_AIState, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_Statics::NewProp__currentState_MetaData), Z_Construct_UClass_UFSM_Statics::NewProp__currentState_MetaData) }; // 2223865670
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFSM_Statics::NewProp__speed_MetaData[] = {
		{ "Category", "FSM" },
		{ "ModuleRelativePath", "Public/FSM.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UFSM_Statics::NewProp__speed = { "_speed", nullptr, (EPropertyFlags)0x0020080000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UFSM, _speed), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_Statics::NewProp__speed_MetaData), Z_Construct_UClass_UFSM_Statics::NewProp__speed_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFSM_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_Statics::NewProp__currentState_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_Statics::NewProp__currentState,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFSM_Statics::NewProp__speed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFSM_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFSM>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UFSM_Statics::ClassParams = {
		&UFSM::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFSM_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_Statics::Class_MetaDataParams), Z_Construct_UClass_UFSM_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UFSM_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UFSM()
	{
		if (!Z_Registration_Info_UClass_UFSM.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UFSM.OuterSingleton, Z_Construct_UClass_UFSM_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UFSM.OuterSingleton;
	}
	template<> COMBAT_CENTRIC_GAME_API UClass* StaticClass<UFSM>()
	{
		return UFSM::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFSM);
	UFSM::~UFSM() {}
	struct Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_Statics::EnumInfo[] = {
		{ AIState_StaticEnum, TEXT("AIState"), &Z_Registration_Info_UEnum_AIState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2223865670U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UFSM, UFSM::StaticClass, TEXT("UFSM"), &Z_Registration_Info_UClass_UFSM, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UFSM), 978631702U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_1760288503(TEXT("/Script/Combat_Centric_Game"),
		Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_FSM_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
