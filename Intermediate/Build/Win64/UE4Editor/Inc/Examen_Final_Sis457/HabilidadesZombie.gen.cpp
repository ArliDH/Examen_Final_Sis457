// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examen_Final_Sis457/HabilidadesZombie.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHabilidadesZombie() {}
// Cross Module References
	EXAMEN_FINAL_SIS457_API UClass* Z_Construct_UClass_AHabilidadesZombie_NoRegister();
	EXAMEN_FINAL_SIS457_API UClass* Z_Construct_UClass_AHabilidadesZombie();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Examen_Final_Sis457();
	EXAMEN_FINAL_SIS457_API UClass* Z_Construct_UClass_UZombiePotent_NoRegister();
// End Cross Module References
	void AHabilidadesZombie::StaticRegisterNativesAHabilidadesZombie()
	{
	}
	UClass* Z_Construct_UClass_AHabilidadesZombie_NoRegister()
	{
		return AHabilidadesZombie::StaticClass();
	}
	struct Z_Construct_UClass_AHabilidadesZombie_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHabilidadesZombie_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Examen_Final_Sis457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHabilidadesZombie_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HabilidadesZombie.h" },
		{ "ModuleRelativePath", "HabilidadesZombie.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AHabilidadesZombie_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UZombiePotent_NoRegister, (int32)VTABLE_OFFSET(AHabilidadesZombie, IZombiePotent), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHabilidadesZombie_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHabilidadesZombie>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHabilidadesZombie_Statics::ClassParams = {
		&AHabilidadesZombie::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHabilidadesZombie_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHabilidadesZombie_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHabilidadesZombie()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHabilidadesZombie_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHabilidadesZombie, 1520623672);
	template<> EXAMEN_FINAL_SIS457_API UClass* StaticClass<AHabilidadesZombie>()
	{
		return AHabilidadesZombie::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHabilidadesZombie(Z_Construct_UClass_AHabilidadesZombie, &AHabilidadesZombie::StaticClass, TEXT("/Script/Examen_Final_Sis457"), TEXT("AHabilidadesZombie"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHabilidadesZombie);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
