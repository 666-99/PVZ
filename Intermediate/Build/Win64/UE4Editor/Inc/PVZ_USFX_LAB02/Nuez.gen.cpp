// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/Nuez.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNuez() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ANuez_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_ANuez();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_APlant();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void ANuez::StaticRegisterNativesANuez()
	{
	}
	UClass* Z_Construct_UClass_ANuez_NoRegister()
	{
		return ANuez::StaticClass();
	}
	struct Z_Construct_UClass_ANuez_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANuez_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlant,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANuez_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Nuez.h" },
		{ "ModuleRelativePath", "Nuez.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANuez_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANuez>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANuez_Statics::ClassParams = {
		&ANuez::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_ANuez_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANuez_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANuez()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANuez_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANuez, 663373298);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<ANuez>()
	{
		return ANuez::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANuez(Z_Construct_UClass_ANuez, &ANuez::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("ANuez"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANuez);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
