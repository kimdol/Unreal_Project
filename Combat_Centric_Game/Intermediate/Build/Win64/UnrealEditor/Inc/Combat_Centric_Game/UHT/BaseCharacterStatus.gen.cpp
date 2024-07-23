// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Combat_Centric_Game/Public/BaseCharacterStatus.h"
#include "AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseCharacterStatus() {}
// Cross Module References
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_UBaseCharacterStatus();
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_UBaseCharacterStatus_NoRegister();
	COMBAT_CENTRIC_GAME_API UFunction* Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
	UPackage* Z_Construct_UPackage__Script_Combat_Centric_Game();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature_Statics
	{
		struct _Script_Combat_Centric_Game_eventDHPCanged_Parms
		{
			float hpRate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_hpRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature_Statics::NewProp_hpRate = { "hpRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Combat_Centric_Game_eventDHPCanged_Parms, hpRate), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature_Statics::NewProp_hpRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseCharacterStatus.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Combat_Centric_Game, nullptr, "DHPCanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature_Statics::_Script_Combat_Centric_Game_eventDHPCanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature_Statics::_Script_Combat_Centric_Game_eventDHPCanged_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDHPCanged_DelegateWrapper(const FMulticastScriptDelegate& DHPCanged, float hpRate)
{
	struct _Script_Combat_Centric_Game_eventDHPCanged_Parms
	{
		float hpRate;
	};
	_Script_Combat_Centric_Game_eventDHPCanged_Parms Parms;
	Parms.hpRate=hpRate;
	DHPCanged.ProcessMulticastDelegate<UObject>(&Parms);
}
	void UBaseCharacterStatus::StaticRegisterNativesUBaseCharacterStatus()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBaseCharacterStatus);
	UClass* Z_Construct_UClass_UBaseCharacterStatus_NoRegister()
	{
		return UBaseCharacterStatus::StaticClass();
	}
	struct Z_Construct_UClass_UBaseCharacterStatus_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__health_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__maxHealth_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__maxHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__stamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__stamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__maxStamina_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__maxStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__attackPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__attackPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__defencePoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp__defencePoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HPChanged_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_HPChanged;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseCharacterStatus_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Centric_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterStatus_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterStatus_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "BaseCharacterStatus.h" },
		{ "ModuleRelativePath", "Public/BaseCharacterStatus.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__health_MetaData[] = {
		{ "Category", "BaseCharacterStatus" },
		{ "ModuleRelativePath", "Public/BaseCharacterStatus.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__health = { "_health", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterStatus, _health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__health_MetaData), Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__health_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__maxHealth_MetaData[] = {
		{ "Category", "BaseCharacterStatus" },
		{ "ModuleRelativePath", "Public/BaseCharacterStatus.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__maxHealth = { "_maxHealth", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterStatus, _maxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__maxHealth_MetaData), Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__maxHealth_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__stamina_MetaData[] = {
		{ "Category", "BaseCharacterStatus" },
		{ "ModuleRelativePath", "Public/BaseCharacterStatus.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__stamina = { "_stamina", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterStatus, _stamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__stamina_MetaData), Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__stamina_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__maxStamina_MetaData[] = {
		{ "Category", "BaseCharacterStatus" },
		{ "ModuleRelativePath", "Public/BaseCharacterStatus.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__maxStamina = { "_maxStamina", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterStatus, _maxStamina), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__maxStamina_MetaData), Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__maxStamina_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__attackPoint_MetaData[] = {
		{ "Category", "BaseCharacterStatus" },
		{ "ModuleRelativePath", "Public/BaseCharacterStatus.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__attackPoint = { "_attackPoint", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterStatus, _attackPoint), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__attackPoint_MetaData), Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__attackPoint_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__defencePoint_MetaData[] = {
		{ "Category", "BaseCharacterStatus" },
		{ "ModuleRelativePath", "Public/BaseCharacterStatus.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__defencePoint = { "_defencePoint", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterStatus, _defencePoint), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__defencePoint_MetaData), Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__defencePoint_MetaData) }; // 2151517668
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp_HPChanged_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/BaseCharacterStatus.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp_HPChanged = { "HPChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UBaseCharacterStatus, HPChanged), Z_Construct_UDelegateFunction_Combat_Centric_Game_DHPCanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp_HPChanged_MetaData), Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp_HPChanged_MetaData) }; // 555014241
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseCharacterStatus_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__maxHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__stamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__maxStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__attackPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp__defencePoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseCharacterStatus_Statics::NewProp_HPChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseCharacterStatus_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseCharacterStatus>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBaseCharacterStatus_Statics::ClassParams = {
		&UBaseCharacterStatus::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBaseCharacterStatus_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterStatus_Statics::PropPointers),
		0,
		0x00B000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterStatus_Statics::Class_MetaDataParams), Z_Construct_UClass_UBaseCharacterStatus_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBaseCharacterStatus_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_UBaseCharacterStatus()
	{
		if (!Z_Registration_Info_UClass_UBaseCharacterStatus.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBaseCharacterStatus.OuterSingleton, Z_Construct_UClass_UBaseCharacterStatus_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBaseCharacterStatus.OuterSingleton;
	}
	template<> COMBAT_CENTRIC_GAME_API UClass* StaticClass<UBaseCharacterStatus>()
	{
		return UBaseCharacterStatus::StaticClass();
	}
	UBaseCharacterStatus::UBaseCharacterStatus(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseCharacterStatus);
	UBaseCharacterStatus::~UBaseCharacterStatus() {}
	struct Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacterStatus_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacterStatus_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBaseCharacterStatus, UBaseCharacterStatus::StaticClass, TEXT("UBaseCharacterStatus"), &Z_Registration_Info_UClass_UBaseCharacterStatus, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBaseCharacterStatus), 2328017899U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacterStatus_h_707710735(TEXT("/Script/Combat_Centric_Game"),
		Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacterStatus_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_BaseCharacterStatus_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
