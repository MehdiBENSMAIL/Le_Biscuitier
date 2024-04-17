// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Le_Biscuitier/Le_BiscuitierGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLe_BiscuitierGameMode() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	LE_BISCUITIER_API UClass* Z_Construct_UClass_ALe_BiscuitierGameMode();
	LE_BISCUITIER_API UClass* Z_Construct_UClass_ALe_BiscuitierGameMode_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Le_Biscuitier();
// End Cross Module References
	void ALe_BiscuitierGameMode::StaticRegisterNativesALe_BiscuitierGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALe_BiscuitierGameMode);
	UClass* Z_Construct_UClass_ALe_BiscuitierGameMode_NoRegister()
	{
		return ALe_BiscuitierGameMode::StaticClass();
	}
	struct Z_Construct_UClass_ALe_BiscuitierGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALe_BiscuitierGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Le_Biscuitier,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALe_BiscuitierGameMode_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALe_BiscuitierGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Le_BiscuitierGameMode.h" },
		{ "ModuleRelativePath", "Le_BiscuitierGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALe_BiscuitierGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALe_BiscuitierGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALe_BiscuitierGameMode_Statics::ClassParams = {
		&ALe_BiscuitierGameMode::StaticClass,
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
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALe_BiscuitierGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ALe_BiscuitierGameMode_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_ALe_BiscuitierGameMode()
	{
		if (!Z_Registration_Info_UClass_ALe_BiscuitierGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALe_BiscuitierGameMode.OuterSingleton, Z_Construct_UClass_ALe_BiscuitierGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALe_BiscuitierGameMode.OuterSingleton;
	}
	template<> LE_BISCUITIER_API UClass* StaticClass<ALe_BiscuitierGameMode>()
	{
		return ALe_BiscuitierGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALe_BiscuitierGameMode);
	ALe_BiscuitierGameMode::~ALe_BiscuitierGameMode() {}
	struct Z_CompiledInDeferFile_FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALe_BiscuitierGameMode, ALe_BiscuitierGameMode::StaticClass, TEXT("ALe_BiscuitierGameMode"), &Z_Registration_Info_UClass_ALe_BiscuitierGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALe_BiscuitierGameMode), 3950712925U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierGameMode_h_4144560962(TEXT("/Script/Le_Biscuitier"),
		Z_CompiledInDeferFile_FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
