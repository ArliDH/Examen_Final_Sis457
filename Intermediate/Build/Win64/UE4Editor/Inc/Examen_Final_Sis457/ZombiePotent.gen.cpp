// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examen_Final_Sis457/ZombiePotent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombiePotent() {}
// Cross Module References
	EXAMEN_FINAL_SIS457_API UClass* Z_Construct_UClass_UZombiePotent_NoRegister();
	EXAMEN_FINAL_SIS457_API UClass* Z_Construct_UClass_UZombiePotent();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Examen_Final_Sis457();
// End Cross Module References
	void UZombiePotent::StaticRegisterNativesUZombiePotent()
	{
	}
	UClass* Z_Construct_UClass_UZombiePotent_NoRegister()
	{
		return UZombiePotent::StaticClass();
	}
	struct Z_Construct_UClass_UZombiePotent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZombiePotent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Examen_Final_Sis457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZombiePotent_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "ZombiePotent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZombiePotent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IZombiePotent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZombiePotent_Statics::ClassParams = {
		&UZombiePotent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000840A1u,
		METADATA_PARAMS(Z_Construct_UClass_UZombiePotent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZombiePotent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZombiePotent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZombiePotent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZombiePotent, 3685504195);
	template<> EXAMEN_FINAL_SIS457_API UClass* StaticClass<UZombiePotent>()
	{
		return UZombiePotent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZombiePotent(Z_Construct_UClass_UZombiePotent, &UZombiePotent::StaticClass, TEXT("/Script/Examen_Final_Sis457"), TEXT("UZombiePotent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZombiePotent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
