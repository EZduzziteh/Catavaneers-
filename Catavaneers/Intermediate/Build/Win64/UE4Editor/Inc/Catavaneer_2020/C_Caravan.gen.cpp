// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Catavaneer_2020/C_Caravan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_Caravan() {}
// Cross Module References
	CATAVANEER_2020_API UClass* Z_Construct_UClass_AC_Caravan_NoRegister();
	CATAVANEER_2020_API UClass* Z_Construct_UClass_AC_Caravan();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Catavaneer_2020();
// End Cross Module References
	void AC_Caravan::StaticRegisterNativesAC_Caravan()
	{
	}
	UClass* Z_Construct_UClass_AC_Caravan_NoRegister()
	{
		return AC_Caravan::StaticClass();
	}
	struct Z_Construct_UClass_AC_Caravan_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_Caravan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Catavaneer_2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_Caravan_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "C_Caravan.h" },
		{ "ModuleRelativePath", "C_Caravan.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_Caravan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_Caravan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AC_Caravan_Statics::ClassParams = {
		&AC_Caravan::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AC_Caravan_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AC_Caravan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AC_Caravan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AC_Caravan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AC_Caravan, 1969771966);
	template<> CATAVANEER_2020_API UClass* StaticClass<AC_Caravan>()
	{
		return AC_Caravan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AC_Caravan(Z_Construct_UClass_AC_Caravan, &AC_Caravan::StaticClass, TEXT("/Script/Catavaneer_2020"), TEXT("AC_Caravan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_Caravan);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
