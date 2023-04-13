// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "cppThirdPersonTest/HitboxActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitboxActor() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	CPPTHIRDPERSONTEST_API UClass* Z_Construct_UClass_AHitboxActor();
	CPPTHIRDPERSONTEST_API UClass* Z_Construct_UClass_AHitboxActor_NoRegister();
	CPPTHIRDPERSONTEST_API UEnum* Z_Construct_UEnum_cppThirdPersonTest_EHitboxEnum();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_cppThirdPersonTest();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_EHitboxEnum;
	static UEnum* EHitboxEnum_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_EHitboxEnum.OuterSingleton)
		{
			Z_Registration_Info_UEnum_EHitboxEnum.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_cppThirdPersonTest_EHitboxEnum, Z_Construct_UPackage__Script_cppThirdPersonTest(), TEXT("EHitboxEnum"));
		}
		return Z_Registration_Info_UEnum_EHitboxEnum.OuterSingleton;
	}
	template<> CPPTHIRDPERSONTEST_API UEnum* StaticEnum<EHitboxEnum>()
	{
		return EHitboxEnum_StaticEnum();
	}
	struct Z_Construct_UEnum_cppThirdPersonTest_EHitboxEnum_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_cppThirdPersonTest_EHitboxEnum_Statics::Enumerators[] = {
		{ "EHitboxEnum::HB_PROXIMITY", (int64)EHitboxEnum::HB_PROXIMITY },
		{ "EHitboxEnum::HB_STRIKE", (int64)EHitboxEnum::HB_STRIKE },
		{ "EHitboxEnum::HB_HURTBOX", (int64)EHitboxEnum::HB_HURTBOX },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_cppThirdPersonTest_EHitboxEnum_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HB_HURTBOX.DisplayName", "HurtBox" },
		{ "HB_HURTBOX.Name", "EHitboxEnum::HB_HURTBOX" },
		{ "HB_PROXIMITY.DisplayName", "Proximity" },
		{ "HB_PROXIMITY.Name", "EHitboxEnum::HB_PROXIMITY" },
		{ "HB_STRIKE.DisplayName", "Strike" },
		{ "HB_STRIKE.Name", "EHitboxEnum::HB_STRIKE" },
		{ "ModuleRelativePath", "HitboxActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_cppThirdPersonTest_EHitboxEnum_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_cppThirdPersonTest,
		nullptr,
		"EHitboxEnum",
		"EHitboxEnum",
		Z_Construct_UEnum_cppThirdPersonTest_EHitboxEnum_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_cppThirdPersonTest_EHitboxEnum_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_cppThirdPersonTest_EHitboxEnum_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_cppThirdPersonTest_EHitboxEnum_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_cppThirdPersonTest_EHitboxEnum()
	{
		if (!Z_Registration_Info_UEnum_EHitboxEnum.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EHitboxEnum.InnerSingleton, Z_Construct_UEnum_cppThirdPersonTest_EHitboxEnum_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_EHitboxEnum.InnerSingleton;
	}
	void AHitboxActor::StaticRegisterNativesAHitboxActor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AHitboxActor);
	UClass* Z_Construct_UClass_AHitboxActor_NoRegister()
	{
		return AHitboxActor::StaticClass();
	}
	struct Z_Construct_UClass_AHitboxActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FBytePropertyParams NewProp_hitBoxType_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitBoxType_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_hitBoxType;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitboxDamage_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HitboxDamage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HitBoxLocation_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_HitBoxLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHitboxActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_cppThirdPersonTest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HitboxActor.h" },
		{ "ModuleRelativePath", "HitboxActor.h" },
	};
#endif
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitBoxType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitBoxType_MetaData[] = {
		{ "Category", "HitboxActor" },
		{ "ModuleRelativePath", "HitboxActor.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitBoxType = { "hitBoxType", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHitboxActor, hitBoxType), Z_Construct_UEnum_cppThirdPersonTest_EHitboxEnum, METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitBoxType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitBoxType_MetaData)) }; // 189955332
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::NewProp_HitboxDamage_MetaData[] = {
		{ "Category", "HitboxActor" },
		{ "ModuleRelativePath", "HitboxActor.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_HitboxDamage = { "HitboxDamage", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHitboxActor, HitboxDamage), METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::NewProp_HitboxDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::NewProp_HitboxDamage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHitboxActor_Statics::NewProp_HitBoxLocation_MetaData[] = {
		{ "Category", "HitboxActor" },
		{ "ModuleRelativePath", "HitboxActor.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AHitboxActor_Statics::NewProp_HitBoxLocation = { "HitBoxLocation", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AHitboxActor, HitBoxLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::NewProp_HitBoxLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::NewProp_HitBoxLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHitboxActor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitBoxType_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_hitBoxType,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_HitboxDamage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHitboxActor_Statics::NewProp_HitBoxLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHitboxActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHitboxActor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AHitboxActor_Statics::ClassParams = {
		&AHitboxActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AHitboxActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHitboxActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHitboxActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHitboxActor()
	{
		if (!Z_Registration_Info_UClass_AHitboxActor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AHitboxActor.OuterSingleton, Z_Construct_UClass_AHitboxActor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AHitboxActor.OuterSingleton;
	}
	template<> CPPTHIRDPERSONTEST_API UClass* StaticClass<AHitboxActor>()
	{
		return AHitboxActor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHitboxActor);
	AHitboxActor::~AHitboxActor() {}
	struct Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_HitboxActor_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_HitboxActor_h_Statics::EnumInfo[] = {
		{ EHitboxEnum_StaticEnum, TEXT("EHitboxEnum"), &Z_Registration_Info_UEnum_EHitboxEnum, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 189955332U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_HitboxActor_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AHitboxActor, AHitboxActor::StaticClass, TEXT("AHitboxActor"), &Z_Registration_Info_UClass_AHitboxActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AHitboxActor), 1746870262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_HitboxActor_h_2796145857(TEXT("/Script/cppThirdPersonTest"),
		Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_HitboxActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_HitboxActor_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_HitboxActor_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_samue_Documents_Unreal_Projects_cppThirdPersonTest_Source_cppThirdPersonTest_HitboxActor_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
