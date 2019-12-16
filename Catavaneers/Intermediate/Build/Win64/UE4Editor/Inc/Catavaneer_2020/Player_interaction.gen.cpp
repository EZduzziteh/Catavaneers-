// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Catavaneer_2020/Player_interaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_interaction() {}
// Cross Module References
	CATAVANEER_2020_API UClass* Z_Construct_UClass_UPlayer_interaction_NoRegister();
	CATAVANEER_2020_API UClass* Z_Construct_UClass_UPlayer_interaction();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_Catavaneer_2020();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	CATAVANEER_2020_API UClass* Z_Construct_UClass_UCaravan_inventory_NoRegister();
	CATAVANEER_2020_API UClass* Z_Construct_UClass_UPlayer_inventory_NoRegister();
// End Cross Module References
	void UPlayer_interaction::StaticRegisterNativesUPlayer_interaction()
	{
	}
	UClass* Z_Construct_UClass_UPlayer_interaction_NoRegister()
	{
		return UPlayer_interaction::StaticClass();
	}
	struct Z_Construct_UClass_UPlayer_interaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CaravanInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_CaravanInventory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PlayerInventory;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayer_interaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_Catavaneer_2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_interaction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Player_interaction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Player_interaction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_interaction_Statics::NewProp_CaravanInventory_MetaData[] = {
		{ "Category", "Caravan Inventory" },
		{ "ModuleRelativePath", "Player_interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayer_interaction_Statics::NewProp_CaravanInventory = { "CaravanInventory", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayer_interaction, CaravanInventory), Z_Construct_UClass_UCaravan_inventory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPlayer_interaction_Statics::NewProp_CaravanInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayer_interaction_Statics::NewProp_CaravanInventory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayer_interaction_Statics::NewProp_PlayerInventory_MetaData[] = {
		{ "Category", "Player Inventory" },
		{ "ModuleRelativePath", "Player_interaction.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UPlayer_interaction_Statics::NewProp_PlayerInventory = { "PlayerInventory", nullptr, (EPropertyFlags)0x0024080000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayer_interaction, PlayerInventory), Z_Construct_UClass_UPlayer_inventory_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UPlayer_interaction_Statics::NewProp_PlayerInventory_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayer_interaction_Statics::NewProp_PlayerInventory_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayer_interaction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_interaction_Statics::NewProp_CaravanInventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayer_interaction_Statics::NewProp_PlayerInventory,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayer_interaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayer_interaction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayer_interaction_Statics::ClassParams = {
		&UPlayer_interaction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayer_interaction_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPlayer_interaction_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayer_interaction_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayer_interaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayer_interaction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayer_interaction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayer_interaction, 959961549);
	template<> CATAVANEER_2020_API UClass* StaticClass<UPlayer_interaction>()
	{
		return UPlayer_interaction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayer_interaction(Z_Construct_UClass_UPlayer_interaction, &UPlayer_interaction::StaticClass, TEXT("/Script/Catavaneer_2020"), TEXT("UPlayer_interaction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayer_interaction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
