// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef EXAMEN_FINAL_SIS457_Subscriptor_generated_h
#error "Subscriptor.generated.h already included, missing '#pragma once' in Subscriptor.h"
#endif
#define EXAMEN_FINAL_SIS457_Subscriptor_generated_h

#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_SPARSE_DATA
#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_RPC_WRAPPERS
#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_RPC_WRAPPERS_NO_PURE_DECLS
#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EXAMEN_FINAL_SIS457_API USubscriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubscriptor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EXAMEN_FINAL_SIS457_API, USubscriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubscriptor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	EXAMEN_FINAL_SIS457_API USubscriptor(USubscriptor&&); \
	EXAMEN_FINAL_SIS457_API USubscriptor(const USubscriptor&); \
public:


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	EXAMEN_FINAL_SIS457_API USubscriptor(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	EXAMEN_FINAL_SIS457_API USubscriptor(USubscriptor&&); \
	EXAMEN_FINAL_SIS457_API USubscriptor(const USubscriptor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(EXAMEN_FINAL_SIS457_API, USubscriptor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USubscriptor); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USubscriptor)


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUSubscriptor(); \
	friend struct Z_Construct_UClass_USubscriptor_Statics; \
public: \
	DECLARE_CLASS(USubscriptor, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/Examen_Final_Sis457"), EXAMEN_FINAL_SIS457_API) \
	DECLARE_SERIALIZER(USubscriptor)


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_GENERATED_UINTERFACE_BODY() \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_GENERATED_UINTERFACE_BODY() \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~ISubscriptor() {} \
public: \
	typedef USubscriptor UClassType; \
	typedef ISubscriptor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~ISubscriptor() {} \
public: \
	typedef USubscriptor UClassType; \
	typedef ISubscriptor ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_10_PROLOG
#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_SPARSE_DATA \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_RPC_WRAPPERS \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_SPARSE_DATA \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> EXAMEN_FINAL_SIS457_API UClass* StaticClass<class USubscriptor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Examen_Final_Sis457_Source_Examen_Final_Sis457_Subscriptor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
