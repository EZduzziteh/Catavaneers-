// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Catavaneer_2020/Player_inventory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_inventory() {}
// Cross Module References
	CATAVANEER_2020_API UClass* Z_Construct_UClass_UPlayer_inventory_NoRegister();
	CATAVANEER_2020_API UClass* Z_Construct_UClass_UPlayer_inventory();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Catavaneer_2020();
// End Cross Module References
	void UPlayer_inventory::StaticRegisterNativesUPlayer_inventory()
	{
	}
	UClass* Z_Construct_UClass_UPlayer_inventory_NoRegister()
	{
		return UPlayer_inventory::StaticClass();
	}
	struct Z_Construct_UClass_UPlayer_inventory_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Weapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Bandage_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Bandage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trap2_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Trap2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Trap1_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Trap1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaravanPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_CaravanPart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_wood_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_wood;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GP_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_GP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayer_inventory_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Catavaneer_2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_inventory_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player_inventory.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Player_inventory.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_score_MetaData[] = {
		{ "Category", "Player Inventory" },
		{ "ModuleRelativePath", "Player_inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_score = { "score", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayer_inventory, score), METADATA_PARAMS(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_score_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Weapon_MetaData[] = {
		{ "Category", "Player Inventory" },
		{ "ModuleRelativePath", "Player_inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Weapon = { "Weapon", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayer_inventory, Weapon), METADATA_PARAMS(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Weapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Weapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Bandage_MetaData[] = {
		{ "Category", "Player Inventory" },
		{ "ModuleRelativePath", "Player_inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Bandage = { "Bandage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayer_inventory, Bandage), METADATA_PARAMS(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Bandage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Bandage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Trap2_MetaData[] = {
		{ "Category", "Player Inventory" },
		{ "ModuleRelativePath", "Player_inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Trap2 = { "Trap2", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayer_inventory, Trap2), METADATA_PARAMS(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Trap2_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Trap2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Trap1_MetaData[] = {
		{ "Category", "Player Inventory" },
		{ "ModuleRelativePath", "Player_inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Trap1 = { "Trap1", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayer_inventory, Trap1), METADATA_PARAMS(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Trap1_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Trap1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_CaravanPart_MetaData[] = {
		{ "Category", "Player Inventory" },
		{ "ModuleRelativePath", "Player_inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_CaravanPart = { "CaravanPart", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayer_inventory, CaravanPart), METADATA_PARAMS(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_CaravanPart_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_CaravanPart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_wood_MetaData[] = {
		{ "Category", "Player Inventory" },
		{ "ModuleRelativePath", "Player_inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_wood = { "wood", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayer_inventory, wood), METADATA_PARAMS(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_wood_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_wood_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_GP_MetaData[] = {
		{ "Category", "Player Inventory" },
		{ "ModuleRelativePath", "Player_inventory.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_GP = { "GP", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayer_inventory, GP), METADATA_PARAMS(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_GP_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_GP_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayer_inventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Weapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Bandage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Trap2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_Trap1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_CaravanPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_wood,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_inventory_Statics::NewProp_GP,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayer_inventory_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayer_inventory>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayer_inventory_Statics::ClassParams = {
		&UPlayer_inventory::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayer_inventory_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPlayer_inventory_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayer_inventory_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayer_inventory_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayer_inventory()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayer_inventory_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayer_inventory, 1337352014);
	template<> CATAVANEER_2020_API UClass* StaticClass<UPlayer_inventory>()
	{
		return UPlayer_inventory::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayer_inventory(Z_Construct_UClass_UPlayer_inventory, &UPlayer_inventory::StaticClass, TEXT("/Script/Catavaneer_2020"), TEXT("UPlayer_inventory"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayer_inventory);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
