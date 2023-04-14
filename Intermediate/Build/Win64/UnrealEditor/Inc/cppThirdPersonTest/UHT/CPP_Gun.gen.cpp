// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppThirdPersonTest/CPP_Gun.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Gun() {}
// Cross Module References
	CPPTHIRDPERSONTEST_API UClass* Z_Construct_UClass_ACPP_Gun();
	CPPTHIRDPERSONTEST_API UClass* Z_Construct_UClass_ACPP_Gun_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cppThirdPersonTest();
// End Cross Module References
	void ACPP_Gun::StaticRegisterNativesACPP_Gun()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Gun);
	UClass* Z_Construct_UClass_ACPP_Gun_NoRegister()
	{
		return ACPP_Gun::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Gun_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Gun_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cppThirdPersonTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Gun_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_Gun.h" },
		{ "ModuleRelativePath", "CPP_Gun.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Gun_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Gun>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Gun_Statics::ClassParams = {
		&ACPP_Gun::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Gun_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Gun_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Gun()
	{
		if (!Z_Registration_Info_UClass_ACPP_Gun.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Gun.OuterSingleton, Z_Construct_UClass_ACPP_Gun_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_Gun.OuterSingleton;
	}
	template<> CPPTHIRDPERSONTEST_API UClass* StaticClass<ACPP_Gun>()
	{
		return ACPP_Gun::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Gun);
	ACPP_Gun::~ACPP_Gun() {}
	struct Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_CPP_Gun_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_CPP_Gun_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Gun, ACPP_Gun::StaticClass, TEXT("ACPP_Gun"), &Z_Registration_Info_UClass_ACPP_Gun, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Gun), 1130761344U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_CPP_Gun_h_3127391246(TEXT("/Script/cppThirdPersonTest"),
		Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_CPP_Gun_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_CPP_Gun_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
