// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Catavaneer_2020/Caravan.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaravan() {}
// Cross Module References
	CATAVANEER_2020_API UClass* Z_Construct_UClass_ACaravan_NoRegister();
	CATAVANEER_2020_API UClass* Z_Construct_UClass_ACaravan();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Catavaneer_2020();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CATAVANEER_2020_API UClass* Z_Construct_UClass_UCaravan_inventory_NoRegister();
// End Cross Module References
	void ACaravan::StaticRegisterNativesACaravan()
	{
	}
	UClass* Z_Construct_UClass_ACaravan_NoRegister()
	{
		return ACaravan::StaticClass();
	}
	struct Z_Construct_UClass_ACaravan_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaravanInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CaravanInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACaravan_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Catavaneer_2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaravan_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Caravan.h" },
		{ "ModuleRelativePath", "Caravan.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACaravan_Statics::NewProp_CaravanInventory_MetaData[] = {
		{ "Category", "Caravan Inventory" },
		{ "ModuleRelativePath", "Caravan.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ACaravan_Statics::NewProp_CaravanInventory = { "CaravanInventory", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACaravan, CaravanInventory), Z_Construct_UClass_UCaravan_inventory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ACaravan_Statics::NewProp_CaravanInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_ACaravan_Statics::NewProp_CaravanInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACaravan_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACaravan_Statics::NewProp_CaravanInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACaravan_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACaravan>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ACaravan_Statics::ClassParams = {
		&ACaravan::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACaravan_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ACaravan_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ACaravan_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ACaravan_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACaravan()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ACaravan_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ACaravan, 1058244596);
	template<> CATAVANEER_2020_API UClass* StaticClass<ACaravan>()
	{
		return ACaravan::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ACaravan(Z_Construct_UClass_ACaravan, &ACaravan::StaticClass, TEXT("/Script/Catavaneer_2020"), TEXT("ACaravan"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACaravan);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
