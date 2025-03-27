// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef SHOOTSIMULATORGAME_ShootSimulatorGameProjectile_generated_h
#error "ShootSimulatorGameProjectile.generated.h already included, missing '#pragma once' in ShootSimulatorGameProjectile.h"
#endif
#define SHOOTSIMULATORGAME_ShootSimulatorGameProjectile_generated_h

#define ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_SPARSE_DATA
#define ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAShootSimulatorGameProjectile(); \
	friend struct Z_Construct_UClass_AShootSimulatorGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AShootSimulatorGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootSimulatorGame"), NO_API) \
	DECLARE_SERIALIZER(AShootSimulatorGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAShootSimulatorGameProjectile(); \
	friend struct Z_Construct_UClass_AShootSimulatorGameProjectile_Statics; \
public: \
	DECLARE_CLASS(AShootSimulatorGameProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ShootSimulatorGame"), NO_API) \
	DECLARE_SERIALIZER(AShootSimulatorGameProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AShootSimulatorGameProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AShootSimulatorGameProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootSimulatorGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootSimulatorGameProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootSimulatorGameProjectile(AShootSimulatorGameProjectile&&); \
	NO_API AShootSimulatorGameProjectile(const AShootSimulatorGameProjectile&); \
public:


#define ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AShootSimulatorGameProjectile(AShootSimulatorGameProjectile&&); \
	NO_API AShootSimulatorGameProjectile(const AShootSimulatorGameProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AShootSimulatorGameProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AShootSimulatorGameProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AShootSimulatorGameProjectile)


#define ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AShootSimulatorGameProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AShootSimulatorGameProjectile, ProjectileMovement); }


#define ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_12_PROLOG
#define ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_SPARSE_DATA \
	ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_RPC_WRAPPERS \
	ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_INCLASS \
	ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_SPARSE_DATA \
	ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_INCLASS_NO_PURE_DECLS \
	ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SHOOTSIMULATORGAME_API UClass* StaticClass<class AShootSimulatorGameProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ShootSimulatorGame_Source_ShootSimulatorGame_ShootSimulatorGameProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
