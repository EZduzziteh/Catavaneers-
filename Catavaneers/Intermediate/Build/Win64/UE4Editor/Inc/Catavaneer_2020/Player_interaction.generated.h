// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CATAVANEER_2020_Player_interaction_generated_h
#error "Player_interaction.generated.h already included, missing '#pragma once' in Player_interaction.h"
#endif
#define CATAVANEER_2020_Player_interaction_generated_h

#define Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_RPC_WRAPPERS
#define Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayer_interaction(); \
	friend struct Z_Construct_UClass_UPlayer_interaction_Statics; \
public: \
	DECLARE_CLASS(UPlayer_interaction, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Catavaneer_2020"), NO_API) \
	DECLARE_SERIALIZER(UPlayer_interaction)


#define Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPlayer_interaction(); \
	friend struct Z_Construct_UClass_UPlayer_interaction_Statics; \
public: \
	DECLARE_CLASS(UPlayer_interaction, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Catavaneer_2020"), NO_API) \
	DECLARE_SERIALIZER(UPlayer_interaction)


#define Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayer_interaction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayer_interaction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayer_interaction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayer_interaction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayer_interaction(UPlayer_interaction&&); \
	NO_API UPlayer_interaction(const UPlayer_interaction&); \
public:


#define Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayer_interaction(UPlayer_interaction&&); \
	NO_API UPlayer_interaction(const UPlayer_interaction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayer_interaction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayer_interaction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayer_interaction)


#define Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerInventory() { return STRUCT_OFFSET(UPlayer_interaction, PlayerInventory); } \
	FORCEINLINE static uint32 __PPO__CaravanInventory() { return STRUCT_OFFSET(UPlayer_interaction, CaravanInventory); }


#define Catavaneers_Source_Catavaneer_2020_Player_interaction_h_11_PROLOG
#define Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_PRIVATE_PROPERTY_OFFSET \
	Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_RPC_WRAPPERS \
	Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_INCLASS \
	Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_PRIVATE_PROPERTY_OFFSET \
	Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_INCLASS_NO_PURE_DECLS \
	Catavaneers_Source_Catavaneer_2020_Player_interaction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CATAVANEER_2020_API UClass* StaticClass<class UPlayer_interaction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Catavaneers_Source_Catavaneer_2020_Player_interaction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
