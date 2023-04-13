// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppThirdPersonTest/cppThirdPersonTestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodecppThirdPersonTestGameMode() {}
// Cross Module References
	CPPTHIRDPERSONTEST_API UClass* Z_Construct_UClass_AcppThirdPersonTestGameMode();
	CPPTHIRDPERSONTEST_API UClass* Z_Construct_UClass_AcppThirdPersonTestGameMode_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_cppThirdPersonTest();
// End Cross Module References
	void AcppThirdPersonTestGameMode::StaticRegisterNativesAcppThirdPersonTestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AcppThirdPersonTestGameMode);
	UClass* Z_Construct_UClass_AcppThirdPersonTestGameMode_NoRegister()
	{
		return AcppThirdPersonTestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AcppThirdPersonTestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AcppThirdPersonTestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_cppThirdPersonTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AcppThirdPersonTestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "cppThirdPersonTestGameMode.h" },
		{ "ModuleRelativePath", "cppThirdPersonTestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AcppThirdPersonTestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AcppThirdPersonTestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AcppThirdPersonTestGameMode_Statics::ClassParams = {
		&AcppThirdPersonTestGameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AcppThirdPersonTestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AcppThirdPersonTestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AcppThirdPersonTestGameMode()
	{
		if (!Z_Registration_Info_UClass_AcppThirdPersonTestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AcppThirdPersonTestGameMode.OuterSingleton, Z_Construct_UClass_AcppThirdPersonTestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AcppThirdPersonTestGameMode.OuterSingleton;
	}
	template<> CPPTHIRDPERSONTEST_API UClass* StaticClass<AcppThirdPersonTestGameMode>()
	{
		return AcppThirdPersonTestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AcppThirdPersonTestGameMode);
	AcppThirdPersonTestGameMode::~AcppThirdPersonTestGameMode() {}
	struct Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_cppThirdPersonTestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_cppThirdPersonTestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AcppThirdPersonTestGameMode, AcppThirdPersonTestGameMode::StaticClass, TEXT("AcppThirdPersonTestGameMode"), &Z_Registration_Info_UClass_AcppThirdPersonTestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AcppThirdPersonTestGameMode), 2678266960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_cppThirdPersonTestGameMode_h_1010108993(TEXT("/Script/cppThirdPersonTest"),
		Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_cppThirdPersonTestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_cppThirdPersonTestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
