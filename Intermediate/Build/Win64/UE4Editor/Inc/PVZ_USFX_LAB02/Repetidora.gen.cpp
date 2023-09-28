// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Repetidora.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRepetidora() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ARepetidora_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ARepetidora();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlant();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void ARepetidora::StaticRegisterNativesARepetidora()
	{
	}
	UClass* Z_Construct_UClass_ARepetidora_NoRegister()
	{
		return ARepetidora::StaticClass();
	}
	struct Z_Construct_UClass_ARepetidora_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ARepetidora_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlant,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ARepetidora_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Repetidora.h" },
		{ "ModuleRelativePath", "Repetidora.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ARepetidora_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARepetidora>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ARepetidora_Statics::ClassParams = {
		&ARepetidora::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ARepetidora_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ARepetidora_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ARepetidora()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ARepetidora_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ARepetidora, 1525675198);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ARepetidora>()
	{
		return ARepetidora::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ARepetidora(Z_Construct_UClass_ARepetidora, &ARepetidora::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ARepetidora"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ARepetidora);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
