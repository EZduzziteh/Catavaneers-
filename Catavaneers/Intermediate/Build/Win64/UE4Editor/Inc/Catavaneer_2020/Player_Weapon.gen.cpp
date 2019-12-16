// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Catavaneer_2020/Player_Weapon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Weapon() {}
// Cross Module References
	CATAVANEER_2020_API UClass* Z_Construct_UClass_APlayer_Weapon_NoRegister();
	CATAVANEER_2020_API UClass* Z_Construct_UClass_APlayer_Weapon();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Catavaneer_2020();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
// End Cross Module References
	void APlayer_Weapon::StaticRegisterNativesAPlayer_Weapon()
	{
	}
	UClass* Z_Construct_UClass_APlayer_Weapon_NoRegister()
	{
		return APlayer_Weapon::StaticClass();
	}
	struct Z_Construct_UClass_APlayer_Weapon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_meshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayer_Weapon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Catavaneer_2020,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Weapon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player_Weapon.h" },
		{ "ModuleRelativePath", "Player_Weapon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayer_Weapon_Statics::NewProp_meshComp_MetaData[] = {
		{ "Category", "Custom Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Player_Weapon.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayer_Weapon_Statics::NewProp_meshComp = { "meshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayer_Weapon, meshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayer_Weapon_Statics::NewProp_meshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayer_Weapon_Statics::NewProp_meshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayer_Weapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayer_Weapon_Statics::NewProp_meshComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayer_Weapon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayer_Weapon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayer_Weapon_Statics::ClassParams = {
		&APlayer_Weapon::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayer_Weapon_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APlayer_Weapon_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_APlayer_Weapon_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayer_Weapon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayer_Weapon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayer_Weapon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_Weapon, 2468634633);
	template<> CATAVANEER_2020_API UClass* StaticClass<APlayer_Weapon>()
	{
		return APlayer_Weapon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_Weapon(Z_Construct_UClass_APlayer_Weapon, &APlayer_Weapon::StaticClass, TEXT("/Script/Catavaneer_2020"), TEXT("APlayer_Weapon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Weapon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
