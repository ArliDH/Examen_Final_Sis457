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
#ifdef EXAMEN_FINAL_SIS457_Zombie_generated_h
#error "Zombie.generated.h already included, missing '#pragma once' in Zombie.h"
#endif
#define EXAMEN_FINAL_SIS457_Zombie_generated_h

#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_SPARSE_DATA
#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnOverlapBeginFunction);


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit); \
	DECLARE_FUNCTION(execOnOverlapBeginFunction);


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombie(); \
	friend struct Z_Construct_UClass_AZombie_Statics; \
public: \
	DECLARE_CLASS(AZombie, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Examen_Final_Sis457"), NO_API) \
	DECLARE_SERIALIZER(AZombie) \
	virtual UObject* _getUObject() const override { return const_cast<AZombie*>(this); }


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAZombie(); \
	friend struct Z_Construct_UClass_AZombie_Statics; \
public: \
	DECLARE_CLASS(AZombie, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Examen_Final_Sis457"), NO_API) \
	DECLARE_SERIALIZER(AZombie) \
	virtual UObject* _getUObject() const override { return const_cast<AZombie*>(this); }


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombie(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombie) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombie); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombie(AZombie&&); \
	NO_API AZombie(const AZombie&); \
public:


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombie(AZombie&&); \
	NO_API AZombie(const AZombie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombie); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombie)


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ClockTower() { return STRUCT_OFFSET(AZombie, ClockTower); } \
	FORCEINLINE static uint32 __PPO__MoveSpeed() { return STRUCT_OFFSET(AZombie, MoveSpeed); }


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_13_PROLOG
#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_PRIVATE_PROPERTY_OFFSET \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_SPARSE_DATA \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_RPC_WRAPPERS \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_INCLASS \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_PRIVATE_PROPERTY_OFFSET \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_SPARSE_DATA \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_INCLASS_NO_PURE_DECLS \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXAMEN_FINAL_SIS457_API UClass* StaticClass<class AZombie>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Examen_Final_Sis457_Source_Examen_Final_Sis457_Zombie_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
