// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Examen_Final_Sis457/HabilidadEnormizar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHabilidadEnormizar() {}
// Cross Module References
	EXAMEN_FINAL_SIS457_API UClass* Z_Construct_UClass_AHabilidadEnormizar_NoRegister();
	EXAMEN_FINAL_SIS457_API UClass* Z_Construct_UClass_AHabilidadEnormizar();
	EXAMEN_FINAL_SIS457_API UClass* Z_Construct_UClass_AHabilidadesZombie();
	UPackage* Z_Construct_UPackage__Script_Examen_Final_Sis457();
// End Cross Module References
	DEFINE_FUNCTION(AHabilidadEnormizar::execScaleActor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ScaleActor(Z_Param_NewScale);
		P_NATIVE_END;
	}
	void AHabilidadEnormizar::StaticRegisterNativesAHabilidadEnormizar()
	{
		UClass* Class = AHabilidadEnormizar::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ScaleActor", &AHabilidadEnormizar::execScaleActor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHabilidadEnormizar_ScaleActor_Statics
	{
		struct HabilidadEnormizar_eventScaleActor_Parms
		{
			float NewScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AHabilidadEnormizar_ScaleActor_Statics::NewProp_NewScale = { "NewScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HabilidadEnormizar_eventScaleActor_Parms, NewScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHabilidadEnormizar_ScaleActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHabilidadEnormizar_ScaleActor_Statics::NewProp_NewScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHabilidadEnormizar_ScaleActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scaling" },
		{ "ModuleRelativePath", "HabilidadEnormizar.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHabilidadEnormizar_ScaleActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHabilidadEnormizar, nullptr, "ScaleActor", nullptr, nullptr, sizeof(HabilidadEnormizar_eventScaleActor_Parms), Z_Construct_UFunction_AHabilidadEnormizar_ScaleActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AHabilidadEnormizar_ScaleActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHabilidadEnormizar_ScaleActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AHabilidadEnormizar_ScaleActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHabilidadEnormizar_ScaleActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHabilidadEnormizar_ScaleActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHabilidadEnormizar_NoRegister()
	{
		return AHabilidadEnormizar::StaticClass();
	}
	struct Z_Construct_UClass_AHabilidadEnormizar_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHabilidadEnormizar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHabilidadesZombie,
		(UObject* (*)())Z_Construct_UPackage__Script_Examen_Final_Sis457,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHabilidadEnormizar_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHabilidadEnormizar_ScaleActor, "ScaleActor" }, // 3806736136
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHabilidadEnormizar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "HabilidadEnormizar.h" },
		{ "ModuleRelativePath", "HabilidadEnormizar.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHabilidadEnormizar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHabilidadEnormizar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHabilidadEnormizar_Statics::ClassParams = {
		&AHabilidadEnormizar::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AHabilidadEnormizar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHabilidadEnormizar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHabilidadEnormizar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHabilidadEnormizar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHabilidadEnormizar, 3478025335);
	template<> EXAMEN_FINAL_SIS457_API UClass* StaticClass<AHabilidadEnormizar>()
	{
		return AHabilidadEnormizar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHabilidadEnormizar(Z_Construct_UClass_AHabilidadEnormizar, &AHabilidadEnormizar::StaticClass, TEXT("/Script/Examen_Final_Sis457"), TEXT("AHabilidadEnormizar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHabilidadEnormizar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
