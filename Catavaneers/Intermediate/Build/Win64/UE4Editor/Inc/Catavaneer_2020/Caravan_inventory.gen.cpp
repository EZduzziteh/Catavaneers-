// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Catavaneer_2020/Caravan_inventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCaravan_inventory() {}
// Cross Module References
	CATAVANEER_2020_API UClass* Z_Construct_UClass_UCaravan_inventory_NoRegister();
	CATAVANEER_2020_API UClass* Z_Construct_UClass_UCaravan_inventory();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Catavaneer_2020();
// End Cross Module References
	void UCaravan_inventory::StaticRegisterNativesUCaravan_inventory()
	{
	}
	UClass* Z_Construct_UClass_UCaravan_inventory_NoRegister()
	{
		return UCaravan_inventory::StaticClass();
	}
	struct Z_Construct_UClass_UCaravan_inventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_traps_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_traps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bandages_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_bandages;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wood_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_wood;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCaravan_inventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Catavaneer_2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaravan_inventory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Caravan_inventory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Caravan_inventory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaravan_inventory_Statics::NewProp_traps_MetaData[] = {
		{ "Category", "Caravan Inventory" },
		{ "ModuleRelativePath", "Caravan_inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCaravan_inventory_Statics::NewProp_traps = { "traps", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaravan_inventory, traps), METADATA_PARAMS(Z_Construct_UClass_UCaravan_inventory_Statics::NewProp_traps_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCaravan_inventory_Statics::NewProp_traps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaravan_inventory_Statics::NewProp_bandages_MetaData[] = {
		{ "Category", "Caravan Inventory" },
		{ "ModuleRelativePath", "Caravan_inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCaravan_inventory_Statics::NewProp_bandages = { "bandages", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaravan_inventory, bandages), METADATA_PARAMS(Z_Construct_UClass_UCaravan_inventory_Statics::NewProp_bandages_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCaravan_inventory_Statics::NewProp_bandages_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCaravan_inventory_Statics::NewProp_wood_MetaData[] = {
		{ "Category", "Caravan Inventory" },
		{ "ModuleRelativePath", "Caravan_inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UCaravan_inventory_Statics::NewProp_wood = { "wood", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCaravan_inventory, wood), METADATA_PARAMS(Z_Construct_UClass_UCaravan_inventory_Statics::NewProp_wood_MetaData, ARRAY_COUNT(Z_Construct_UClass_UCaravan_inventory_Statics::NewProp_wood_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCaravan_inventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaravan_inventory_Statics::NewProp_traps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaravan_inventory_Statics::NewProp_bandages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCaravan_inventory_Statics::NewProp_wood,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCaravan_inventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCaravan_inventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCaravan_inventory_Statics::ClassParams = {
		&UCaravan_inventory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCaravan_inventory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UCaravan_inventory_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCaravan_inventory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UCaravan_inventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCaravan_inventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCaravan_inventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCaravan_inventory, 187780099);
	template<> CATAVANEER_2020_API UClass* StaticClass<UCaravan_inventory>()
	{
		return UCaravan_inventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCaravan_inventory(Z_Construct_UClass_UCaravan_inventory, &UCaravan_inventory::StaticClass, TEXT("/Script/Catavaneer_2020"), TEXT("UCaravan_inventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCaravan_inventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
