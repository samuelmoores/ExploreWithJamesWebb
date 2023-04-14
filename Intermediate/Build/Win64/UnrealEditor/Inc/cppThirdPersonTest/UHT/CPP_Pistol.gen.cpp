// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppThirdPersonTest/CPP_Pistol.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_Pistol() {}
// Cross Module References
	CPPTHIRDPERSONTEST_API UClass* Z_Construct_UClass_ACPP_Gun();
	CPPTHIRDPERSONTEST_API UClass* Z_Construct_UClass_ACPP_Pistol();
	CPPTHIRDPERSONTEST_API UClass* Z_Construct_UClass_ACPP_Pistol_NoRegister();
	UPackage* Z_Construct_UPackage__Script_cppThirdPersonTest();
// End Cross Module References
	void ACPP_Pistol::StaticRegisterNativesACPP_Pistol()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_Pistol);
	UClass* Z_Construct_UClass_ACPP_Pistol_NoRegister()
	{
		return ACPP_Pistol::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_Pistol_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_Pistol_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACPP_Gun,
		(UObject* (*)())Z_Construct_UPackage__Script_cppThirdPersonTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_Pistol_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "CPP_Pistol.h" },
		{ "ModuleRelativePath", "CPP_Pistol.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_Pistol_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_Pistol>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_Pistol_Statics::ClassParams = {
		&ACPP_Pistol::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ACPP_Pistol_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_Pistol_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_Pistol()
	{
		if (!Z_Registration_Info_UClass_ACPP_Pistol.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_Pistol.OuterSingleton, Z_Construct_UClass_ACPP_Pistol_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_Pistol.OuterSingleton;
	}
	template<> CPPTHIRDPERSONTEST_API UClass* StaticClass<ACPP_Pistol>()
	{
		return ACPP_Pistol::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_Pistol);
	ACPP_Pistol::~ACPP_Pistol() {}
	struct Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_CPP_Pistol_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_CPP_Pistol_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_Pistol, ACPP_Pistol::StaticClass, TEXT("ACPP_Pistol"), &Z_Registration_Info_UClass_ACPP_Pistol, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_Pistol), 2313454080U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_CPP_Pistol_h_2001314385(TEXT("/Script/cppThirdPersonTest"),
		Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_CPP_Pistol_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_CPP_Pistol_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
