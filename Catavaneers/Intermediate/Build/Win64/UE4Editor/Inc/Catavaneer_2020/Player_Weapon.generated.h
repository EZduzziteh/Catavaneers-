// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CATAVANEER_2020_Player_Weapon_generated_h
#error "Player_Weapon.generated.h already included, missing '#pragma once' in Player_Weapon.h"
#endif
#define CATAVANEER_2020_Player_Weapon_generated_h

#define Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_RPC_WRAPPERS
#define Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayer_Weapon(); \
	friend struct Z_Construct_UClass_APlayer_Weapon_Statics; \
public: \
	DECLARE_CLASS(APlayer_Weapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Catavaneer_2020"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Weapon)


#define Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayer_Weapon(); \
	friend struct Z_Construct_UClass_APlayer_Weapon_Statics; \
public: \
	DECLARE_CLASS(APlayer_Weapon, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Catavaneer_2020"), NO_API) \
	DECLARE_SERIALIZER(APlayer_Weapon)


#define Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayer_Weapon(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayer_Weapon) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Weapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Weapon); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Weapon(APlayer_Weapon&&); \
	NO_API APlayer_Weapon(const APlayer_Weapon&); \
public:


#define Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayer_Weapon(APlayer_Weapon&&); \
	NO_API APlayer_Weapon(const APlayer_Weapon&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayer_Weapon); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayer_Weapon); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayer_Weapon)


#define Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__meshComp() { return STRUCT_OFFSET(APlayer_Weapon, meshComp); }


#define Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_9_PROLOG
#define Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_PRIVATE_PROPERTY_OFFSET \
	Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_RPC_WRAPPERS \
	Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_INCLASS \
	Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_PRIVATE_PROPERTY_OFFSET \
	Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_INCLASS_NO_PURE_DECLS \
	Catavaneers_Source_Catavaneer_2020_Player_Weapon_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CATAVANEER_2020_API UClass* StaticClass<class APlayer_Weapon>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Catavaneers_Source_Catavaneer_2020_Player_Weapon_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
