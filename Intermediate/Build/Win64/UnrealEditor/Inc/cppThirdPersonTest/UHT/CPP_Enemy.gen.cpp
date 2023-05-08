// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppThirdPersonTest/CPP_Enemy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Enemy() {}
// Cross Module References
	CPPTHIRDPERSONTEST_API UClass* Z_Construct_UClass_ACPP_Enemy();
	CPPTHIRDPERSONTEST_API UClass* Z_Construct_UClass_ACPP_Enemy_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_cppThirdPersonTest();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_Enemy::execAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Attack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ACPP_Enemy::exectakeDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_damageAmount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->takeDamage(Z_Param_damageAmount);
		P_NATIVE_END;
	}
	void ACPP_Enemy::StaticRegisterNativesACPP_Enemy()
	{
		UClass* Class = ACPP_Enemy::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &ACPP_Enemy::execAttack },
			{ "takeDamage", &ACPP_Enemy::exectakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_Enemy_Attack_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Enemy_Attack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Enemy_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Enemy, nullptr, "Attack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Enemy_Attack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Enemy_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Enemy_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Enemy_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ACPP_Enemy_takeDamage_Statics
	{
		struct CPP_Enemy_eventtakeDamage_Parms
		{
			float damageAmount;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_damageAmount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ACPP_Enemy_takeDamage_Statics::NewProp_damageAmount = { "damageAmount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(CPP_Enemy_eventtakeDamage_Parms, damageAmount), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_Enemy_takeDamage_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_Enemy_takeDamage_Statics::NewProp_damageAmount,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_Enemy_takeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_Enemy.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_Enemy_takeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_Enemy, nullptr, "takeDamage", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACPP_Enemy_takeDamage_Statics::CPP_Enemy_eventtakeDamage_Parms), Z_Construct_UFunction_ACPP_Enemy_takeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Enemy_takeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_Enemy_takeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_Enemy_takeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_Enemy_takeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_Enemy_takeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Enemy);
	UClass* Z_Construct_UClass_ACPP_Enemy_NoRegister()
	{
		return ACPP_Enemy::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Enemy_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_health_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_health;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[];
#endif
		static void NewProp_isDead_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isDead;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isHit_MetaData[];
#endif
		static void NewProp_isHit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isHit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnEnemy_MetaData[];
#endif
		static void NewProp_spawnEnemy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_spawnEnemy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isAttacking_MetaData[];
#endif
		static void NewProp_isAttacking_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isAttacking;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Enemy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_cppThirdPersonTest,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_Enemy_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_Enemy_Attack, "Attack" }, // 1209283493
		{ &Z_Construct_UFunction_ACPP_Enemy_takeDamage, "takeDamage" }, // 1348504068
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Enemy_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_Enemy.h" },
		{ "ModuleRelativePath", "CPP_Enemy.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_health_MetaData[] = {
		{ "Category", "CPP_Enemy" },
		{ "Comment", "//Variables\n" },
		{ "ModuleRelativePath", "CPP_Enemy.h" },
		{ "ToolTip", "Variables" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_health = { "health", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(ACPP_Enemy, health), METADATA_PARAMS(Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_health_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isDead_MetaData[] = {
		{ "Category", "CPP_Enemy" },
		{ "ModuleRelativePath", "CPP_Enemy.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isDead_SetBit(void* Obj)
	{
		((ACPP_Enemy*)Obj)->isDead = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACPP_Enemy), &Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isDead_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isDead_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isHit_MetaData[] = {
		{ "Category", "CPP_Enemy" },
		{ "ModuleRelativePath", "CPP_Enemy.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isHit_SetBit(void* Obj)
	{
		((ACPP_Enemy*)Obj)->isHit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isHit = { "isHit", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACPP_Enemy), &Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isHit_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isHit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_spawnEnemy_MetaData[] = {
		{ "Category", "CPP_Enemy" },
		{ "ModuleRelativePath", "CPP_Enemy.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_spawnEnemy_SetBit(void* Obj)
	{
		((ACPP_Enemy*)Obj)->spawnEnemy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_spawnEnemy = { "spawnEnemy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACPP_Enemy), &Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_spawnEnemy_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_spawnEnemy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_spawnEnemy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isAttacking_MetaData[] = {
		{ "Category", "CPP_Enemy" },
		{ "ModuleRelativePath", "CPP_Enemy.h" },
	};
#endif
	void Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isAttacking_SetBit(void* Obj)
	{
		((ACPP_Enemy*)Obj)->isAttacking = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isAttacking = { "isAttacking", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(ACPP_Enemy), &Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isAttacking_SetBit, METADATA_PARAMS(Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isAttacking_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isAttacking_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_Enemy_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_health,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isDead,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isHit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_spawnEnemy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_Enemy_Statics::NewProp_isAttacking,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Enemy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Enemy>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Enemy_Statics::ClassParams = {
		&ACPP_Enemy::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_Enemy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Enemy_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Enemy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Enemy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Enemy()
	{
		if (!Z_Registration_Info_UClass_ACPP_Enemy.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Enemy.OuterSingleton, Z_Construct_UClass_ACPP_Enemy_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_Enemy.OuterSingleton;
	}
	template<> CPPTHIRDPERSONTEST_API UClass* StaticClass<ACPP_Enemy>()
	{
		return ACPP_Enemy::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Enemy);
	ACPP_Enemy::~ACPP_Enemy() {}
	struct Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_CPP_Enemy_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_CPP_Enemy_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Enemy, ACPP_Enemy::StaticClass, TEXT("ACPP_Enemy"), &Z_Registration_Info_UClass_ACPP_Enemy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Enemy), 199022846U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_CPP_Enemy_h_3384673812(TEXT("/Script/cppThirdPersonTest"),
		Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_CPP_Enemy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_CPP_Enemy_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
