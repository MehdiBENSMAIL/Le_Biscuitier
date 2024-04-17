// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Le_BiscuitierProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef LE_BISCUITIER_Le_BiscuitierProjectile_generated_h
#error "Le_BiscuitierProjectile.generated.h already included, missing '#pragma once' in Le_BiscuitierProjectile.h"
#endif
#define LE_BISCUITIER_Le_BiscuitierProjectile_generated_h

#define FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_15_SPARSE_DATA
#define FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_15_ACCESSORS
#define FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesALe_BiscuitierProjectile(); \
	friend struct Z_Construct_UClass_ALe_BiscuitierProjectile_Statics; \
public: \
	DECLARE_CLASS(ALe_BiscuitierProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Le_Biscuitier"), NO_API) \
	DECLARE_SERIALIZER(ALe_BiscuitierProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ALe_BiscuitierProjectile(ALe_BiscuitierProjectile&&); \
	NO_API ALe_BiscuitierProjectile(const ALe_BiscuitierProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ALe_BiscuitierProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ALe_BiscuitierProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ALe_BiscuitierProjectile) \
	NO_API virtual ~ALe_BiscuitierProjectile();


#define FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_12_PROLOG
#define FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_15_SPARSE_DATA \
	FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_15_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_15_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_15_ACCESSORS \
	FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> LE_BISCUITIER_API UClass* StaticClass<class ALe_BiscuitierProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Le_Biscuitier_Source_Le_Biscuitier_Le_BiscuitierProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
