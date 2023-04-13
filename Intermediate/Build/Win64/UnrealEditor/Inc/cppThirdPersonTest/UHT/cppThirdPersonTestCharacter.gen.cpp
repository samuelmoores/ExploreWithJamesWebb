// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppThirdPersonTest/cppThirdPersonTestCharacter.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecppThirdPersonTestCharacter() {}
// Cross Module References
	CPPTHIRDPERSONTEST_API UClass* Z_Construct_UClass_AcppThirdPersonTestCharacter();
	CPPTHIRDPERSONTEST_API UClass* Z_Construct_UClass_AcppThirdPersonTestCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	UPackage* Z_Construct_UPackage__Script_cppThirdPersonTest();
// End Cross Module References
	DEFINE_FUNCTION(AcppThirdPersonTestCharacter::execendBlock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->endBlock();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AcppThirdPersonTestCharacter::execblock)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->block();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AcppThirdPersonTestCharacter::exechealArmor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_healAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->healArmor(Z_Param_healAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AcppThirdPersonTestCharacter::execDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DamageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Damage(Z_Param_DamageAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AcppThirdPersonTestCharacter::execHeal)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_healAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Heal(Z_Param_healAmount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AcppThirdPersonTestCharacter::execStartHealing)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartHealing();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AcppThirdPersonTestCharacter::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	void AcppThirdPersonTestCharacter::StaticRegisterNativesAcppThirdPersonTestCharacter()
	{
		UClass* Class = AcppThirdPersonTestCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "block", &AcppThirdPersonTestCharacter::execblock },
			{ "Damage", &AcppThirdPersonTestCharacter::execDamage },
			{ "endBlock", &AcppThirdPersonTestCharacter::execendBlock },
			{ "Heal", &AcppThirdPersonTestCharacter::execHeal },
			{ "healArmor", &AcppThirdPersonTestCharacter::exechealArmor },
			{ "OnOverlapBegin", &AcppThirdPersonTestCharacter::execOnOverlapBegin },
			{ "StartHealing", &AcppThirdPersonTestCharacter::execStartHealing },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AcppThirdPersonTestCharacter_block_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcppThirdPersonTestCharacter_block_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_block_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AcppThirdPersonTestCharacter, nullptr, "block", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AcppThirdPersonTestCharacter_block_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AcppThirdPersonTestCharacter_block_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AcppThirdPersonTestCharacter_block()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AcppThirdPersonTestCharacter_block_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AcppThirdPersonTestCharacter_Damage_Statics
	{
		struct cppThirdPersonTestCharacter_eventDamage_Parms
		{
			float DamageAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DamageAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_Damage_Statics::NewProp_DamageAmount = { "DamageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppThirdPersonTestCharacter_eventDamage_Parms, DamageAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AcppThirdPersonTestCharacter_Damage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcppThirdPersonTestCharacter_Damage_Statics::NewProp_DamageAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcppThirdPersonTestCharacter_Damage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_Damage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AcppThirdPersonTestCharacter, nullptr, "Damage", nullptr, nullptr, sizeof(Z_Construct_UFunction_AcppThirdPersonTestCharacter_Damage_Statics::cppThirdPersonTestCharacter_eventDamage_Parms), Z_Construct_UFunction_AcppThirdPersonTestCharacter_Damage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AcppThirdPersonTestCharacter_Damage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AcppThirdPersonTestCharacter_Damage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AcppThirdPersonTestCharacter_Damage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AcppThirdPersonTestCharacter_Damage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AcppThirdPersonTestCharacter_Damage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AcppThirdPersonTestCharacter_endBlock_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcppThirdPersonTestCharacter_endBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_endBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AcppThirdPersonTestCharacter, nullptr, "endBlock", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AcppThirdPersonTestCharacter_endBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AcppThirdPersonTestCharacter_endBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AcppThirdPersonTestCharacter_endBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AcppThirdPersonTestCharacter_endBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AcppThirdPersonTestCharacter_Heal_Statics
	{
		struct cppThirdPersonTestCharacter_eventHeal_Parms
		{
			float healAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_healAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_Heal_Statics::NewProp_healAmount = { "healAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppThirdPersonTestCharacter_eventHeal_Parms, healAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AcppThirdPersonTestCharacter_Heal_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcppThirdPersonTestCharacter_Heal_Statics::NewProp_healAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcppThirdPersonTestCharacter_Heal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_Heal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AcppThirdPersonTestCharacter, nullptr, "Heal", nullptr, nullptr, sizeof(Z_Construct_UFunction_AcppThirdPersonTestCharacter_Heal_Statics::cppThirdPersonTestCharacter_eventHeal_Parms), Z_Construct_UFunction_AcppThirdPersonTestCharacter_Heal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AcppThirdPersonTestCharacter_Heal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AcppThirdPersonTestCharacter_Heal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AcppThirdPersonTestCharacter_Heal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AcppThirdPersonTestCharacter_Heal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AcppThirdPersonTestCharacter_Heal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AcppThirdPersonTestCharacter_healArmor_Statics
	{
		struct cppThirdPersonTestCharacter_eventhealArmor_Parms
		{
			float healAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_healAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_healArmor_Statics::NewProp_healAmount = { "healAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppThirdPersonTestCharacter_eventhealArmor_Parms, healAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AcppThirdPersonTestCharacter_healArmor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcppThirdPersonTestCharacter_healArmor_Statics::NewProp_healAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcppThirdPersonTestCharacter_healArmor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_healArmor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AcppThirdPersonTestCharacter, nullptr, "healArmor", nullptr, nullptr, sizeof(Z_Construct_UFunction_AcppThirdPersonTestCharacter_healArmor_Statics::cppThirdPersonTestCharacter_eventhealArmor_Parms), Z_Construct_UFunction_AcppThirdPersonTestCharacter_healArmor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AcppThirdPersonTestCharacter_healArmor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AcppThirdPersonTestCharacter_healArmor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AcppThirdPersonTestCharacter_healArmor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AcppThirdPersonTestCharacter_healArmor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AcppThirdPersonTestCharacter_healArmor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics
	{
		struct cppThirdPersonTestCharacter_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppThirdPersonTestCharacter_eventOnOverlapBegin_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppThirdPersonTestCharacter_eventOnOverlapBegin_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppThirdPersonTestCharacter_eventOnOverlapBegin_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_OtherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppThirdPersonTestCharacter_eventOnOverlapBegin_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((cppThirdPersonTestCharacter_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(cppThirdPersonTestCharacter_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(cppThirdPersonTestCharacter_eventOnOverlapBegin_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_SweepResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_OverlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_OtherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_OtherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_OtherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** called when something enters the sphere component */" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
		{ "ToolTip", "called when something enters the sphere component" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AcppThirdPersonTestCharacter, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::cppThirdPersonTestCharacter_eventOnOverlapBegin_Parms), Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AcppThirdPersonTestCharacter_StartHealing_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AcppThirdPersonTestCharacter_StartHealing_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AcppThirdPersonTestCharacter_StartHealing_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AcppThirdPersonTestCharacter, nullptr, "StartHealing", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AcppThirdPersonTestCharacter_StartHealing_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AcppThirdPersonTestCharacter_StartHealing_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AcppThirdPersonTestCharacter_StartHealing()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AcppThirdPersonTestCharacter_StartHealing_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AcppThirdPersonTestCharacter);
	UClass* Z_Construct_UClass_AcppThirdPersonTestCharacter_NoRegister()
	{
		return AcppThirdPersonTestCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraBoom_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraBoom;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FollowCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FollowCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DefaultMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DefaultMappingContext;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AimAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AimAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PunchAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PunchAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HealAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HealAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DamageAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DamageAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EquipAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EquipAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockAction_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BlockAction;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isSprinting_MetaData[];
#endif
		static void NewProp_isSprinting_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isSprinting;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isPunching_MetaData[];
#endif
		static void NewProp_isPunching_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isPunching;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAiming_MetaData[];
#endif
		static void NewProp_isAiming_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAiming;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerHealth_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playerHealth;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerStamina_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playerStamina;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isOverlappingItem_MetaData[];
#endif
		static void NewProp_isOverlappingItem_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isOverlappingItem;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hasArmor_MetaData[];
#endif
		static void NewProp_hasArmor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hasArmor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_playerArmor_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_playerArmor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[];
#endif
		static void NewProp_isDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_canAim_MetaData[];
#endif
		static void NewProp_canAim_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_canAim;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isJumping_MetaData[];
#endif
		static void NewProp_isJumping_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isJumping;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isBlocking_MetaData[];
#endif
		static void NewProp_isBlocking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isBlocking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_cppThirdPersonTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AcppThirdPersonTestCharacter_block, "block" }, // 1237393724
		{ &Z_Construct_UFunction_AcppThirdPersonTestCharacter_Damage, "Damage" }, // 3937988510
		{ &Z_Construct_UFunction_AcppThirdPersonTestCharacter_endBlock, "endBlock" }, // 920959319
		{ &Z_Construct_UFunction_AcppThirdPersonTestCharacter_Heal, "Heal" }, // 529442119
		{ &Z_Construct_UFunction_AcppThirdPersonTestCharacter_healArmor, "healArmor" }, // 275171410
		{ &Z_Construct_UFunction_AcppThirdPersonTestCharacter_OnOverlapBegin, "OnOverlapBegin" }, // 3722800556
		{ &Z_Construct_UFunction_AcppThirdPersonTestCharacter_StartHealing, "StartHealing" }, // 581724119
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "cppThirdPersonTestCharacter.h" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_CameraBoom_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Camera boom positioning the camera behind the character */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
		{ "ToolTip", "Camera boom positioning the camera behind the character" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_CameraBoom = { "CameraBoom", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, CameraBoom), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_CameraBoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_CameraBoom_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_FollowCamera_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Camera" },
		{ "Comment", "/** Follow camera */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
		{ "ToolTip", "Follow camera" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_FollowCamera = { "FollowCamera", nullptr, (EPropertyFlags)0x00400000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, FollowCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_FollowCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_FollowCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_DefaultMappingContext_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** MappingContext */" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
		{ "ToolTip", "MappingContext" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_DefaultMappingContext = { "DefaultMappingContext", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, DefaultMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_DefaultMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_DefaultMappingContext_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Jump Input Action */" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
		{ "ToolTip", "Jump Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_MoveAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Move Input Action */" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
		{ "ToolTip", "Move Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_MoveAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_MoveAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Look Input Action */" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
		{ "ToolTip", "Look Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_SprintAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Sprint Input Action*/" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
		{ "ToolTip", "Sprint Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_SprintAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_SprintAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_AimAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Aim Input Action*/" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
		{ "ToolTip", "Aim Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_AimAction = { "AimAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, AimAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_AimAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_AimAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_PunchAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Punch Input Action*/" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
		{ "ToolTip", "Punch Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_PunchAction = { "PunchAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, PunchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_PunchAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_PunchAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_HealAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Heal Input Action*/" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
		{ "ToolTip", "Heal Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_HealAction = { "HealAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, HealAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_HealAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_HealAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_DamageAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Damage Input Action*/" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
		{ "ToolTip", "Damage Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_DamageAction = { "DamageAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, DamageAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_DamageAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_DamageAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_EquipAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Damage Input Action*/" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
		{ "ToolTip", "Damage Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_EquipAction = { "EquipAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, EquipAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_EquipAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_EquipAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_BlockAction_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "Input" },
		{ "Comment", "/** Damage Input Action*/" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
		{ "ToolTip", "Damage Input Action" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_BlockAction = { "BlockAction", nullptr, (EPropertyFlags)0x0040000000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, BlockAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_BlockAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_BlockAction_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isSprinting_MetaData[] = {
		{ "Category", "cppThirdPersonTestCharacter" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isSprinting_SetBit(void* Obj)
	{
		((AcppThirdPersonTestCharacter*)Obj)->isSprinting = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isSprinting = { "isSprinting", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AcppThirdPersonTestCharacter), &Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isSprinting_SetBit, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isSprinting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isSprinting_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isPunching_MetaData[] = {
		{ "Category", "cppThirdPersonTestCharacter" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isPunching_SetBit(void* Obj)
	{
		((AcppThirdPersonTestCharacter*)Obj)->isPunching = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isPunching = { "isPunching", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AcppThirdPersonTestCharacter), &Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isPunching_SetBit, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isPunching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isPunching_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isAiming_MetaData[] = {
		{ "Category", "cppThirdPersonTestCharacter" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isAiming_SetBit(void* Obj)
	{
		((AcppThirdPersonTestCharacter*)Obj)->isAiming = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isAiming = { "isAiming", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AcppThirdPersonTestCharacter), &Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isAiming_SetBit, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isAiming_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isAiming_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_playerHealth_MetaData[] = {
		{ "Category", "cppThirdPersonTestCharacter" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_playerHealth = { "playerHealth", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, playerHealth), METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_playerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_playerHealth_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_playerStamina_MetaData[] = {
		{ "Category", "cppThirdPersonTestCharacter" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_playerStamina = { "playerStamina", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, playerStamina), METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_playerStamina_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_playerStamina_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isOverlappingItem_MetaData[] = {
		{ "Category", "cppThirdPersonTestCharacter" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isOverlappingItem_SetBit(void* Obj)
	{
		((AcppThirdPersonTestCharacter*)Obj)->isOverlappingItem = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isOverlappingItem = { "isOverlappingItem", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AcppThirdPersonTestCharacter), &Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isOverlappingItem_SetBit, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isOverlappingItem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isOverlappingItem_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_hasArmor_MetaData[] = {
		{ "Category", "cppThirdPersonTestCharacter" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_hasArmor_SetBit(void* Obj)
	{
		((AcppThirdPersonTestCharacter*)Obj)->hasArmor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_hasArmor = { "hasArmor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AcppThirdPersonTestCharacter), &Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_hasArmor_SetBit, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_hasArmor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_hasArmor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_playerArmor_MetaData[] = {
		{ "Category", "cppThirdPersonTestCharacter" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_playerArmor = { "playerArmor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AcppThirdPersonTestCharacter, playerArmor), METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_playerArmor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_playerArmor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isDead_MetaData[] = {
		{ "Category", "cppThirdPersonTestCharacter" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isDead_SetBit(void* Obj)
	{
		((AcppThirdPersonTestCharacter*)Obj)->isDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AcppThirdPersonTestCharacter), &Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_canAim_MetaData[] = {
		{ "Category", "cppThirdPersonTestCharacter" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_canAim_SetBit(void* Obj)
	{
		((AcppThirdPersonTestCharacter*)Obj)->canAim = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_canAim = { "canAim", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AcppThirdPersonTestCharacter), &Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_canAim_SetBit, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_canAim_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_canAim_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isJumping_MetaData[] = {
		{ "Category", "cppThirdPersonTestCharacter" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isJumping_SetBit(void* Obj)
	{
		((AcppThirdPersonTestCharacter*)Obj)->isJumping = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isJumping = { "isJumping", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AcppThirdPersonTestCharacter), &Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isJumping_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isBlocking_MetaData[] = {
		{ "Category", "cppThirdPersonTestCharacter" },
		{ "ModuleRelativePath", "cppThirdPersonTestCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isBlocking_SetBit(void* Obj)
	{
		((AcppThirdPersonTestCharacter*)Obj)->isBlocking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isBlocking = { "isBlocking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AcppThirdPersonTestCharacter), &Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isBlocking_SetBit, METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isBlocking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isBlocking_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_CameraBoom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_FollowCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_DefaultMappingContext,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_JumpAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_MoveAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_LookAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_SprintAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_AimAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_PunchAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_HealAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_DamageAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_EquipAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_BlockAction,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isSprinting,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isPunching,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isAiming,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_playerHealth,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_playerStamina,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isOverlappingItem,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_hasArmor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_playerArmor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_canAim,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isJumping,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::NewProp_isBlocking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AcppThirdPersonTestCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::ClassParams = {
		&AcppThirdPersonTestCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AcppThirdPersonTestCharacter()
	{
		if (!Z_Registration_Info_UClass_AcppThirdPersonTestCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AcppThirdPersonTestCharacter.OuterSingleton, Z_Construct_UClass_AcppThirdPersonTestCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AcppThirdPersonTestCharacter.OuterSingleton;
	}
	template<> CPPTHIRDPERSONTEST_API UClass* StaticClass<AcppThirdPersonTestCharacter>()
	{
		return AcppThirdPersonTestCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcppThirdPersonTestCharacter);
	AcppThirdPersonTestCharacter::~AcppThirdPersonTestCharacter() {}
	struct Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_cppThirdPersonTestCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_cppThirdPersonTestCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AcppThirdPersonTestCharacter, AcppThirdPersonTestCharacter::StaticClass, TEXT("AcppThirdPersonTestCharacter"), &Z_Registration_Info_UClass_AcppThirdPersonTestCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AcppThirdPersonTestCharacter), 2418072589U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_cppThirdPersonTestCharacter_h_1657205735(TEXT("/Script/cppThirdPersonTest"),
		Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_cppThirdPersonTestCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_cppThirdPersonTestCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
