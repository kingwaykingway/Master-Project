// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FQuat;
class USceneComponent;
struct FRotator;
#ifdef DEEPORBIT_QuaternionRotation_generated_h
#error "QuaternionRotation.generated.h already included, missing '#pragma once' in QuaternionRotation.h"
#endif
#define DEEPORBIT_QuaternionRotation_generated_h

#define DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_SPARSE_DATA
#define DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddActorLocalRotationQuat); \
	DECLARE_FUNCTION(execSetActorRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetActorWorldRotationQuat); \
	DECLARE_FUNCTION(execAddLocalRotationQuat); \
	DECLARE_FUNCTION(execSetRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetWorldRotationQuat); \
	DECLARE_FUNCTION(execEuler_To_Quaternion);


#define DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddActorLocalRotationQuat); \
	DECLARE_FUNCTION(execSetActorRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetActorWorldRotationQuat); \
	DECLARE_FUNCTION(execAddLocalRotationQuat); \
	DECLARE_FUNCTION(execSetRelativeRotationQuat); \
	DECLARE_FUNCTION(execSetWorldRotationQuat); \
	DECLARE_FUNCTION(execEuler_To_Quaternion);


#define DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUQuaternionRotation(); \
	friend struct Z_Construct_UClass_UQuaternionRotation_Statics; \
public: \
	DECLARE_CLASS(UQuaternionRotation, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeepOrbit"), NO_API) \
	DECLARE_SERIALIZER(UQuaternionRotation)


#define DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUQuaternionRotation(); \
	friend struct Z_Construct_UClass_UQuaternionRotation_Statics; \
public: \
	DECLARE_CLASS(UQuaternionRotation, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeepOrbit"), NO_API) \
	DECLARE_SERIALIZER(UQuaternionRotation)


#define DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuaternionRotation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuaternionRotation) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuaternionRotation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuaternionRotation); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuaternionRotation(UQuaternionRotation&&); \
	NO_API UQuaternionRotation(const UQuaternionRotation&); \
public:


#define DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UQuaternionRotation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UQuaternionRotation(UQuaternionRotation&&); \
	NO_API UQuaternionRotation(const UQuaternionRotation&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UQuaternionRotation); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UQuaternionRotation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UQuaternionRotation)


#define DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_PRIVATE_PROPERTY_OFFSET
#define DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_12_PROLOG
#define DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_PRIVATE_PROPERTY_OFFSET \
	DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_SPARSE_DATA \
	DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_RPC_WRAPPERS \
	DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_INCLASS \
	DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_PRIVATE_PROPERTY_OFFSET \
	DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_SPARSE_DATA \
	DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_INCLASS_NO_PURE_DECLS \
	DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEEPORBIT_API UClass* StaticClass<class UQuaternionRotation>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeepOrbit_Source_DeepOrbit_Public_QuaternionRotation_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
