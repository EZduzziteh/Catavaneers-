// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Catavaneer_2020/player_movement.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplayer_movement() {}
// Cross Module References
	CATAVANEER_2020_API UClass* Z_Construct_UClass_Aplayer_movement_NoRegister();
	CATAVANEER_2020_API UClass* Z_Construct_UClass_Aplayer_movement();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Catavaneer_2020();
	CATAVANEER_2020_API UClass* Z_Construct_UClass_APlayer_Weapon_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void Aplayer_movement::StaticRegisterNativesAplayer_movement()
	{
	}
	UClass* Z_Construct_UClass_Aplayer_movement_NoRegister()
	{
		return Aplayer_movement::StaticClass();
	}
	struct Z_Construct_UClass_Aplayer_movement_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_currentWeapon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_weaponType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_weaponType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_springComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_springComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_cameraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_cameraComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aplayer_movement_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Catavaneer_2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aplayer_movement_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "player_movement.h" },
		{ "ModuleRelativePath", "player_movement.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aplayer_movement_Statics::NewProp_currentWeapon_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "player_movement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aplayer_movement_Statics::NewProp_currentWeapon = { "currentWeapon", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aplayer_movement, currentWeapon), Z_Construct_UClass_APlayer_Weapon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aplayer_movement_Statics::NewProp_currentWeapon_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aplayer_movement_Statics::NewProp_currentWeapon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aplayer_movement_Statics::NewProp_weaponType_MetaData[] = {
		{ "Category", "Weapon Properties" },
		{ "ModuleRelativePath", "player_movement.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_Aplayer_movement_Statics::NewProp_weaponType = { "weaponType", nullptr, (EPropertyFlags)0x0014000000010015, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aplayer_movement, weaponType), Z_Construct_UClass_APlayer_Weapon_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_Aplayer_movement_Statics::NewProp_weaponType_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aplayer_movement_Statics::NewProp_weaponType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aplayer_movement_Statics::NewProp_springComp_MetaData[] = {
		{ "Category", "Custom Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "player_movement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aplayer_movement_Statics::NewProp_springComp = { "springComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aplayer_movement, springComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aplayer_movement_Statics::NewProp_springComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aplayer_movement_Statics::NewProp_springComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aplayer_movement_Statics::NewProp_cameraComp_MetaData[] = {
		{ "Category", "Custom Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "player_movement.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Aplayer_movement_Statics::NewProp_cameraComp = { "cameraComp", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Aplayer_movement, cameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_Aplayer_movement_Statics::NewProp_cameraComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_Aplayer_movement_Statics::NewProp_cameraComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Aplayer_movement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aplayer_movement_Statics::NewProp_currentWeapon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aplayer_movement_Statics::NewProp_weaponType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aplayer_movement_Statics::NewProp_springComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Aplayer_movement_Statics::NewProp_cameraComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aplayer_movement_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aplayer_movement>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aplayer_movement_Statics::ClassParams = {
		&Aplayer_movement::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Aplayer_movement_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_Aplayer_movement_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_Aplayer_movement_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_Aplayer_movement_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aplayer_movement()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aplayer_movement_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aplayer_movement, 2006877658);
	template<> CATAVANEER_2020_API UClass* StaticClass<Aplayer_movement>()
	{
		return Aplayer_movement::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aplayer_movement(Z_Construct_UClass_Aplayer_movement, &Aplayer_movement::StaticClass, TEXT("/Script/Catavaneer_2020"), TEXT("Aplayer_movement"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aplayer_movement);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
