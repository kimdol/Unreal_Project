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
	COMBAT_CENTRIC_GAME_API UClass* Z_Construct_UClass_UPoolingObject_NoRegister();
	COMBAT_CENTRIC_GAME_API UFunction* Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Combat_Centric_Game();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature_Statics
	{
		struct _Script_Combat_Centric_Game_eventDDynamicSample_Parms
		{
			int32 intvalue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_intvalue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature_Statics::NewProp_intvalue = { "intvalue", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_Combat_Centric_Game_eventDDynamicSample_Parms, intvalue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature_Statics::NewProp_intvalue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScriptCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Combat_Centric_Game, nullptr, "DDynamicSample__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature_Statics::_Script_Combat_Centric_Game_eventDDynamicSample_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00120000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature_Statics::_Script_Combat_Centric_Game_eventDDynamicSample_Parms) < MAX_uint16);
	UFunction* Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FDDynamicSample_DelegateWrapper(const FScriptDelegate& DDynamicSample, int32 intvalue)
{
	struct _Script_Combat_Centric_Game_eventDDynamicSample_Parms
	{
		int32 intvalue;
	};
	_Script_Combat_Centric_Game_eventDDynamicSample_Parms Parms;
	Parms.intvalue=intvalue;
	DDynamicSample.ProcessDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(AScriptCharacter::execSampleFunc)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SampleFunc();
		P_NATIVE_END;
	}
	void AScriptCharacter::StaticRegisterNativesAScriptCharacter()
	{
		UClass* Class = AScriptCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SampleFunc", &AScriptCharacter::execSampleFunc },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AScriptCharacter_SampleFunc_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AScriptCharacter_SampleFunc_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScriptCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AScriptCharacter_SampleFunc_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AScriptCharacter, nullptr, "SampleFunc", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AScriptCharacter_SampleFunc_Statics::Function_MetaDataParams), Z_Construct_UFunction_AScriptCharacter_SampleFunc_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_AScriptCharacter_SampleFunc()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AScriptCharacter_SampleFunc_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AScriptCharacter);
	UClass* Z_Construct_UClass_AScriptCharacter_NoRegister()
	{
		return AScriptCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AScriptCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__sampleFloatValue_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp__sampleFloatValue;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp__samepleScriptCharacterClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp__samepleScriptCharacterClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSample_MetaData[];
#endif
		static const UECodeGen_Private::FDelegatePropertyParams NewProp_DynamicSample;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AScriptCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Combat_Centric_Game,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScriptCharacter_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AScriptCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AScriptCharacter_SampleFunc, "SampleFunc" }, // 6133128
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScriptCharacter_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScriptCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ScriptCharacter.h" },
		{ "ModuleRelativePath", "Public/ScriptCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScriptCharacter_Statics::NewProp__sampleFloatValue_MetaData[] = {
		{ "Category", "ScriptCharacter" },
		{ "ModuleRelativePath", "Public/ScriptCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AScriptCharacter_Statics::NewProp__sampleFloatValue = { "_sampleFloatValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScriptCharacter, _sampleFloatValue), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScriptCharacter_Statics::NewProp__sampleFloatValue_MetaData), Z_Construct_UClass_AScriptCharacter_Statics::NewProp__sampleFloatValue_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScriptCharacter_Statics::NewProp__samepleScriptCharacterClass_MetaData[] = {
		{ "Category", "ScriptCharacter" },
		{ "ModuleRelativePath", "Public/ScriptCharacter.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AScriptCharacter_Statics::NewProp__samepleScriptCharacterClass = { "_samepleScriptCharacterClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScriptCharacter, _samepleScriptCharacterClass), Z_Construct_UClass_UClass, Z_Construct_UClass_AScriptCharacter_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScriptCharacter_Statics::NewProp__samepleScriptCharacterClass_MetaData), Z_Construct_UClass_AScriptCharacter_Statics::NewProp__samepleScriptCharacterClass_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AScriptCharacter_Statics::NewProp_DynamicSample_MetaData[] = {
		{ "Category", "ScriptCharacter" },
		{ "ModuleRelativePath", "Public/ScriptCharacter.h" },
	};
#endif
	const UECodeGen_Private::FDelegatePropertyParams Z_Construct_UClass_AScriptCharacter_Statics::NewProp_DynamicSample = { "DynamicSample", nullptr, (EPropertyFlags)0x0010000000080004, UECodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AScriptCharacter, DynamicSample), Z_Construct_UDelegateFunction_Combat_Centric_Game_DDynamicSample__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScriptCharacter_Statics::NewProp_DynamicSample_MetaData), Z_Construct_UClass_AScriptCharacter_Statics::NewProp_DynamicSample_MetaData) }; // 2806989156
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AScriptCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScriptCharacter_Statics::NewProp__sampleFloatValue,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScriptCharacter_Statics::NewProp__samepleScriptCharacterClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AScriptCharacter_Statics::NewProp_DynamicSample,
	};
		const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AScriptCharacter_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPoolingObject_NoRegister, (int32)VTABLE_OFFSET(AScriptCharacter, IPoolingObject), false },  // 4192054050
		};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScriptCharacter_Statics::InterfaceParams) < 64);
	const FCppClassTypeInfoStatic Z_Construct_UClass_AScriptCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AScriptCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AScriptCharacter_Statics::ClassParams = {
		&AScriptCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AScriptCharacter_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AScriptCharacter_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AScriptCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_AScriptCharacter_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AScriptCharacter_Statics::PropPointers) < 2048);
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
		{ Z_Construct_UClass_AScriptCharacter, AScriptCharacter::StaticClass, TEXT("AScriptCharacter"), &Z_Registration_Info_UClass_AScriptCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AScriptCharacter), 2130348906U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_2695069412(TEXT("/Script/Combat_Centric_Game"),
		Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Combat_Centric_Game_Source_Combat_Centric_Game_Public_ScriptCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
