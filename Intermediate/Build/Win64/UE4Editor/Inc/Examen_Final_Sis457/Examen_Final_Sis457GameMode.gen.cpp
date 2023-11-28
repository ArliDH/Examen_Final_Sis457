// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examen_Final_Sis457/Examen_Final_Sis457GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExamen_Final_Sis457GameMode() {}
// Cross Module References
	EXAMEN_FINAL_SIS457_API UClass* Z_Construct_UClass_AExamen_Final_Sis457GameMode_NoRegister();
	EXAMEN_FINAL_SIS457_API UClass* Z_Construct_UClass_AExamen_Final_Sis457GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Examen_Final_Sis457();
// End Cross Module References
	void AExamen_Final_Sis457GameMode::StaticRegisterNativesAExamen_Final_Sis457GameMode()
	{
	}
	UClass* Z_Construct_UClass_AExamen_Final_Sis457GameMode_NoRegister()
	{
		return AExamen_Final_Sis457GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AExamen_Final_Sis457GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AExamen_Final_Sis457GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Examen_Final_Sis457,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AExamen_Final_Sis457GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Examen_Final_Sis457GameMode.h" },
		{ "ModuleRelativePath", "Examen_Final_Sis457GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AExamen_Final_Sis457GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AExamen_Final_Sis457GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AExamen_Final_Sis457GameMode_Statics::ClassParams = {
		&AExamen_Final_Sis457GameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AExamen_Final_Sis457GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AExamen_Final_Sis457GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AExamen_Final_Sis457GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AExamen_Final_Sis457GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AExamen_Final_Sis457GameMode, 2657785973);
	template<> EXAMEN_FINAL_SIS457_API UClass* StaticClass<AExamen_Final_Sis457GameMode>()
	{
		return AExamen_Final_Sis457GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AExamen_Final_Sis457GameMode(Z_Construct_UClass_AExamen_Final_Sis457GameMode, &AExamen_Final_Sis457GameMode::StaticClass, TEXT("/Script/Examen_Final_Sis457"), TEXT("AExamen_Final_Sis457GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AExamen_Final_Sis457GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
