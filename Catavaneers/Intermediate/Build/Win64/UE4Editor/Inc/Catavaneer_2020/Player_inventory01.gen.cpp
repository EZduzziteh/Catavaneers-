// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Catavaneer_2020/Player_inventory01.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_inventory01() {}
// Cross Module References
	CATAVANEER_2020_API UClass* Z_Construct_UClass_APlayer_inventory01_NoRegister();
	CATAVANEER_2020_API UClass* Z_Construct_UClass_APlayer_inventory01();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Catavaneer_2020();
// End Cross Module References
	void APlayer_inventory01::StaticRegisterNativesAPlayer_inventory01()
	{
	}
	UClass* Z_Construct_UClass_APlayer_inventory01_NoRegister()
	{
		return APlayer_inventory01::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_inventory01_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_inventory01_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Catavaneer_2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_inventory01_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player_inventory01.h" },
		{ "ModuleRelativePath", "Player_inventory01.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_inventory01_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_inventory01>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_inventory01_Statics::ClassParams = {
		&APlayer_inventory01::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_inventory01_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayer_inventory01_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_inventory01()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer_inventory01_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_inventory01, 1583223662);
	template<> CATAVANEER_2020_API UClass* StaticClass<APlayer_inventory01>()
	{
		return APlayer_inventory01::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_inventory01(Z_Construct_UClass_APlayer_inventory01, &APlayer_inventory01::StaticClass, TEXT("/Script/Catavaneer_2020"), TEXT("APlayer_inventory01"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_inventory01);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
