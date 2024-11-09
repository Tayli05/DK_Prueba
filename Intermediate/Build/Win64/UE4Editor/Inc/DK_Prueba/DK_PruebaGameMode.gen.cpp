// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DK_Prueba/DK_PruebaGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDK_PruebaGameMode() {}
// Cross Module References
	DK_PRUEBA_API UClass* Z_Construct_UClass_ADK_PruebaGameMode_NoRegister();
	DK_PRUEBA_API UClass* Z_Construct_UClass_ADK_PruebaGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_DK_Prueba();
// End Cross Module References
	void ADK_PruebaGameMode::StaticRegisterNativesADK_PruebaGameMode()
	{
	}
	UClass* Z_Construct_UClass_ADK_PruebaGameMode_NoRegister()
	{
		return ADK_PruebaGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ADK_PruebaGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADK_PruebaGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DK_Prueba,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADK_PruebaGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DK_PruebaGameMode.h" },
		{ "ModuleRelativePath", "DK_PruebaGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADK_PruebaGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADK_PruebaGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADK_PruebaGameMode_Statics::ClassParams = {
		&ADK_PruebaGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ADK_PruebaGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADK_PruebaGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADK_PruebaGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADK_PruebaGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADK_PruebaGameMode, 1608268092);
	template<> DK_PRUEBA_API UClass* StaticClass<ADK_PruebaGameMode>()
	{
		return ADK_PruebaGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADK_PruebaGameMode(Z_Construct_UClass_ADK_PruebaGameMode, &ADK_PruebaGameMode::StaticClass, TEXT("/Script/DK_Prueba"), TEXT("ADK_PruebaGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADK_PruebaGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
