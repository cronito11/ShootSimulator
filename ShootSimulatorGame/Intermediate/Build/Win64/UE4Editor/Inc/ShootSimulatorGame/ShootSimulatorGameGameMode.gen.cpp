// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ShootSimulatorGame/ShootSimulatorGameGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeShootSimulatorGameGameMode() {}
// Cross Module References
	SHOOTSIMULATORGAME_API UClass* Z_Construct_UClass_AShootSimulatorGameGameMode_NoRegister();
	SHOOTSIMULATORGAME_API UClass* Z_Construct_UClass_AShootSimulatorGameGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ShootSimulatorGame();
// End Cross Module References
	void AShootSimulatorGameGameMode::StaticRegisterNativesAShootSimulatorGameGameMode()
	{
	}
	UClass* Z_Construct_UClass_AShootSimulatorGameGameMode_NoRegister()
	{
		return AShootSimulatorGameGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AShootSimulatorGameGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AShootSimulatorGameGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ShootSimulatorGame,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AShootSimulatorGameGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ShootSimulatorGameGameMode.h" },
		{ "ModuleRelativePath", "ShootSimulatorGameGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AShootSimulatorGameGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AShootSimulatorGameGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AShootSimulatorGameGameMode_Statics::ClassParams = {
		&AShootSimulatorGameGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AShootSimulatorGameGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AShootSimulatorGameGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AShootSimulatorGameGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AShootSimulatorGameGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AShootSimulatorGameGameMode, 1263374381);
	template<> SHOOTSIMULATORGAME_API UClass* StaticClass<AShootSimulatorGameGameMode>()
	{
		return AShootSimulatorGameGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AShootSimulatorGameGameMode(Z_Construct_UClass_AShootSimulatorGameGameMode, &AShootSimulatorGameGameMode::StaticClass, TEXT("/Script/ShootSimulatorGame"), TEXT("AShootSimulatorGameGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AShootSimulatorGameGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
