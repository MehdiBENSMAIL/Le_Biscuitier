// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Le_Biscuitier/Le_BiscuitierPlayerController.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLe_BiscuitierPlayerController() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	LE_BISCUITIER_API UClass* Z_Construct_UClass_ALe_BiscuitierPlayerController();
	LE_BISCUITIER_API UClass* Z_Construct_UClass_ALe_BiscuitierPlayerController_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Le_Biscuitier();
// End Cross Module References
	void ALe_BiscuitierPlayerController::StaticRegisterNativesALe_BiscuitierPlayerController()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ALe_BiscuitierPlayerController);
	UClass* Z_Construct_UClass_ALe_BiscuitierPlayerController_NoRegister()
	{
		return ALe_BiscuitierPlayerController::StaticClass();
	}
	struct Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Le_Biscuitier,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Collision Rendering Transformation" },
		{ "IncludePath", "Le_BiscuitierPlayerController.h" },
		{ "ModuleRelativePath", "Le_BiscuitierPlayerController.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Input Mapping Context to be used for player input */" },
#endif
		{ "ModuleRelativePath", "Le_BiscuitierPlayerController.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mapping Context to be used for player input" },
#endif
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ALe_BiscuitierPlayerController, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::NewProp_InputMappingContext_MetaData), Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::NewProp_InputMappingContext_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::NewProp_InputMappingContext,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALe_BiscuitierPlayerController>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::ClassParams = {
		&ALe_BiscuitierPlayerController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::Class_MetaDataParams), Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_ALe_BiscuitierPlayerController()
	{
		if (!Z_Registration_Info_UClass_ALe_BiscuitierPlayerController.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ALe_BiscuitierPlayerController.OuterSingleton, Z_Construct_UClass_ALe_BiscuitierPlayerController_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ALe_BiscuitierPlayerController.OuterSingleton;
	}
	template<> LE_BISCUITIER_API UClass* StaticClass<ALe_BiscuitierPlayerController>()
	{
		return ALe_BiscuitierPlayerController::StaticClass();
	}
	ALe_BiscuitierPlayerController::ALe_BiscuitierPlayerController(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALe_BiscuitierPlayerController);
	ALe_BiscuitierPlayerController::~ALe_BiscuitierPlayerController() {}
	struct Z_CompiledInDeferFile_FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierPlayerController_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierPlayerController_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ALe_BiscuitierPlayerController, ALe_BiscuitierPlayerController::StaticClass, TEXT("ALe_BiscuitierPlayerController"), &Z_Registration_Info_UClass_ALe_BiscuitierPlayerController, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ALe_BiscuitierPlayerController), 172545885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierPlayerController_h_1948771450(TEXT("/Script/Le_Biscuitier"),
		Z_CompiledInDeferFile_FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierPlayerController_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierPlayerController_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
