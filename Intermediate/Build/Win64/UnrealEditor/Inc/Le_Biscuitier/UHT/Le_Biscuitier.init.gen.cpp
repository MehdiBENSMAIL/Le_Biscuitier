// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLe_Biscuitier_init() {}
	LE_BISCUITIER_API UFunction* Z_Construct_UDelegateFunction_Le_Biscuitier_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Le_Biscuitier;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Le_Biscuitier()
	{
		if (!Z_Registration_Info_UPackage__Script_Le_Biscuitier.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Le_Biscuitier_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Le_Biscuitier",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xD49631AF,
				0x61747DB8,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Le_Biscuitier.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Le_Biscuitier.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Le_Biscuitier(Z_Construct_UPackage__Script_Le_Biscuitier, TEXT("/Script/Le_Biscuitier"), Z_Registration_Info_UPackage__Script_Le_Biscuitier, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD49631AF, 0x61747DB8));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
