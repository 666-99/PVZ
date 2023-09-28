// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Hongo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHongo() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AHongo_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_AHongo();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlant();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void AHongo::StaticRegisterNativesAHongo()
	{
	}
	UClass* Z_Construct_UClass_AHongo_NoRegister()
	{
		return AHongo::StaticClass();
	}
	struct Z_Construct_UClass_AHongo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHongo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlant,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHongo_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Hongo.h" },
		{ "ModuleRelativePath", "Hongo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHongo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHongo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHongo_Statics::ClassParams = {
		&AHongo::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AHongo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AHongo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHongo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHongo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHongo, 2240703941);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<AHongo>()
	{
		return AHongo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHongo(Z_Construct_UClass_AHongo, &AHongo::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("AHongo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHongo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
