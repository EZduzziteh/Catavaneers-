// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef CATAVANEER_2020_Caravan_generated_h
#error "Caravan.generated.h already included, missing '#pragma once' in Caravan.h"
#endif
#define CATAVANEER_2020_Caravan_generated_h

#define Catavaneers_Source_Catavaneer_2020_Caravan_h_13_RPC_WRAPPERS
#define Catavaneers_Source_Catavaneer_2020_Caravan_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Catavaneers_Source_Catavaneer_2020_Caravan_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACaravan(); \
	friend struct Z_Construct_UClass_ACaravan_Statics; \
public: \
	DECLARE_CLASS(ACaravan, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Catavaneer_2020"), NO_API) \
	DECLARE_SERIALIZER(ACaravan)


#define Catavaneers_Source_Catavaneer_2020_Caravan_h_13_INCLASS \
private: \
	static void StaticRegisterNativesACaravan(); \
	friend struct Z_Construct_UClass_ACaravan_Statics; \
public: \
	DECLARE_CLASS(ACaravan, AActor, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Catavaneer_2020"), NO_API) \
	DECLARE_SERIALIZER(ACaravan)


#define Catavaneers_Source_Catavaneer_2020_Caravan_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ACaravan(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ACaravan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaravan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaravan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACaravan(ACaravan&&); \
	NO_API ACaravan(const ACaravan&); \
public:


#define Catavaneers_Source_Catavaneer_2020_Caravan_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ACaravan(ACaravan&&); \
	NO_API ACaravan(const ACaravan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACaravan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACaravan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACaravan)


#define Catavaneers_Source_Catavaneer_2020_Caravan_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CaravanInventory() { return STRUCT_OFFSET(ACaravan, CaravanInventory); }


#define Catavaneers_Source_Catavaneer_2020_Caravan_h_10_PROLOG
#define Catavaneers_Source_Catavaneer_2020_Caravan_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Catavaneers_Source_Catavaneer_2020_Caravan_h_13_PRIVATE_PROPERTY_OFFSET \
	Catavaneers_Source_Catavaneer_2020_Caravan_h_13_RPC_WRAPPERS \
	Catavaneers_Source_Catavaneer_2020_Caravan_h_13_INCLASS \
	Catavaneers_Source_Catavaneer_2020_Caravan_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Catavaneers_Source_Catavaneer_2020_Caravan_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Catavaneers_Source_Catavaneer_2020_Caravan_h_13_PRIVATE_PROPERTY_OFFSET \
	Catavaneers_Source_Catavaneer_2020_Caravan_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Catavaneers_Source_Catavaneer_2020_Caravan_h_13_INCLASS_NO_PURE_DECLS \
	Catavaneers_Source_Catavaneer_2020_Caravan_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CATAVANEER_2020_API UClass* StaticClass<class ACaravan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Catavaneers_Source_Catavaneer_2020_Caravan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
