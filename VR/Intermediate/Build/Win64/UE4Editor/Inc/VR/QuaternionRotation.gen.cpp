// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VR/Public/QuaternionRotation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuaternionRotation() {}
// Cross Module References
	VR_API UClass* Z_Construct_UClass_UQuaternionRotation_NoRegister();
	VR_API UClass* Z_Construct_UClass_UQuaternionRotation();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_VR();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FQuat();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
	DEFINE_FUNCTION(UQuaternionRotation::execAddActorLocalRotationQuat)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Delta_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionRotation::AddActorLocalRotationQuat(Z_Param_Actor,Z_Param_Out_Delta_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionRotation::execSetActorRelativeRotationQuat)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Desired_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionRotation::SetActorRelativeRotationQuat(Z_Param_Actor,Z_Param_Out_Desired_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionRotation::execSetActorWorldRotationQuat)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Desired_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionRotation::SetActorWorldRotationQuat(Z_Param_Actor,Z_Param_Out_Desired_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionRotation::execAddLocalRotationQuat)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Delta_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionRotation::AddLocalRotationQuat(Z_Param_SceneComponent,Z_Param_Out_Delta_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionRotation::execSetRelativeRotationQuat)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Desired_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionRotation::SetRelativeRotationQuat(Z_Param_SceneComponent,Z_Param_Out_Desired_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionRotation::execSetWorldRotationQuat)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_SceneComponent);
		P_GET_STRUCT_REF(FQuat,Z_Param_Out_Desired_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		UQuaternionRotation::SetWorldRotationQuat(Z_Param_SceneComponent,Z_Param_Out_Desired_Rotation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuaternionRotation::execEuler_To_Quaternion)
	{
		P_GET_STRUCT(FRotator,Z_Param_Current_Rotation);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQuat*)Z_Param__Result=UQuaternionRotation::Euler_To_Quaternion(Z_Param_Current_Rotation);
		P_NATIVE_END;
	}
	void UQuaternionRotation::StaticRegisterNativesUQuaternionRotation()
	{
		UClass* Class = UQuaternionRotation::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddActorLocalRotationQuat", &UQuaternionRotation::execAddActorLocalRotationQuat },
			{ "AddLocalRotationQuat", &UQuaternionRotation::execAddLocalRotationQuat },
			{ "Euler_To_Quaternion", &UQuaternionRotation::execEuler_To_Quaternion },
			{ "SetActorRelativeRotationQuat", &UQuaternionRotation::execSetActorRelativeRotationQuat },
			{ "SetActorWorldRotationQuat", &UQuaternionRotation::execSetActorWorldRotationQuat },
			{ "SetRelativeRotationQuat", &UQuaternionRotation::execSetRelativeRotationQuat },
			{ "SetWorldRotationQuat", &UQuaternionRotation::execSetWorldRotationQuat },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics
	{
		struct QuaternionRotation_eventAddActorLocalRotationQuat_Parms
		{
			AActor* Actor;
			FQuat Delta_Rotation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delta_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Delta_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionRotation_eventAddActorLocalRotationQuat_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics::NewProp_Delta_Rotation = { "Delta_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionRotation_eventAddActorLocalRotationQuat_Parms, Delta_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics::NewProp_Delta_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quaternion Rotation" },
		{ "Comment", "// Function to add delta rotation to current local rotation of Actor\n" },
		{ "DisplayName", "Add Actor Local Rotation (Quaternion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "Public/QuaternionRotation.h" },
		{ "ToolTip", "Function to add delta rotation to current local rotation of Actor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionRotation, nullptr, "AddActorLocalRotationQuat", nullptr, nullptr, sizeof(QuaternionRotation_eventAddActorLocalRotationQuat_Parms), Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics
	{
		struct QuaternionRotation_eventAddLocalRotationQuat_Parms
		{
			USceneComponent* SceneComponent;
			FQuat Delta_Rotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Delta_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Delta_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionRotation_eventAddLocalRotationQuat_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::NewProp_Delta_Rotation = { "Delta_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionRotation_eventAddLocalRotationQuat_Parms, Delta_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::NewProp_Delta_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::NewProp_Delta_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quaternion Rotation" },
		{ "Comment", "// Function to add delta rotation to current local rotation of scene component\n" },
		{ "DisplayName", "Add Local Rotation (Quaterion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "Public/QuaternionRotation.h" },
		{ "ToolTip", "Function to add delta rotation to current local rotation of scene component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionRotation, nullptr, "AddLocalRotationQuat", nullptr, nullptr, sizeof(QuaternionRotation_eventAddLocalRotationQuat_Parms), Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionRotation_Euler_To_Quaternion_Statics
	{
		struct QuaternionRotation_eventEuler_To_Quaternion_Parms
		{
			FRotator Current_Rotation;
			FQuat ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Current_Rotation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionRotation_Euler_To_Quaternion_Statics::NewProp_Current_Rotation = { "Current_Rotation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionRotation_eventEuler_To_Quaternion_Parms, Current_Rotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionRotation_Euler_To_Quaternion_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionRotation_eventEuler_To_Quaternion_Parms, ReturnValue), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionRotation_Euler_To_Quaternion_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionRotation_Euler_To_Quaternion_Statics::NewProp_Current_Rotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionRotation_Euler_To_Quaternion_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_Euler_To_Quaternion_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quaternion Rotation" },
		{ "Comment", "// Convert Euler Rotations To Quaternions\n" },
		{ "DisplayName", "Euler To Quaternion" },
		{ "Keywords", "rotation, quaterion" },
		{ "ModuleRelativePath", "Public/QuaternionRotation.h" },
		{ "ToolTip", "Convert Euler Rotations To Quaternions" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionRotation_Euler_To_Quaternion_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionRotation, nullptr, "Euler_To_Quaternion", nullptr, nullptr, sizeof(QuaternionRotation_eventEuler_To_Quaternion_Parms), Z_Construct_UFunction_UQuaternionRotation_Euler_To_Quaternion_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_Euler_To_Quaternion_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_Euler_To_Quaternion_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_Euler_To_Quaternion_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionRotation_Euler_To_Quaternion()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionRotation_Euler_To_Quaternion_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics
	{
		struct QuaternionRotation_eventSetActorRelativeRotationQuat_Parms
		{
			AActor* Actor;
			FQuat Desired_Rotation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desired_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Desired_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionRotation_eventSetActorRelativeRotationQuat_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics::NewProp_Desired_Rotation = { "Desired_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionRotation_eventSetActorRelativeRotationQuat_Parms, Desired_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics::NewProp_Desired_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quaternion Rotation" },
		{ "Comment", "// Function to set relative rotation of Actor to input quaternion rotation\n" },
		{ "DisplayName", "Set Actor Relative Rotation (Quaternion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "Public/QuaternionRotation.h" },
		{ "ToolTip", "Function to set relative rotation of Actor to input quaternion rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionRotation, nullptr, "SetActorRelativeRotationQuat", nullptr, nullptr, sizeof(QuaternionRotation_eventSetActorRelativeRotationQuat_Parms), Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics
	{
		struct QuaternionRotation_eventSetActorWorldRotationQuat_Parms
		{
			AActor* Actor;
			FQuat Desired_Rotation;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desired_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Desired_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionRotation_eventSetActorWorldRotationQuat_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics::NewProp_Desired_Rotation = { "Desired_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionRotation_eventSetActorWorldRotationQuat_Parms, Desired_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics::NewProp_Desired_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quaternion Rotation" },
		{ "Comment", "// Function to set world rotation of Actor to input quaternion rotation\n" },
		{ "DisplayName", "Set Actor World Rotation (Quaternion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "Public/QuaternionRotation.h" },
		{ "ToolTip", "Function to set world rotation of Actor to input quaternion rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionRotation, nullptr, "SetActorWorldRotationQuat", nullptr, nullptr, sizeof(QuaternionRotation_eventSetActorWorldRotationQuat_Parms), Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics
	{
		struct QuaternionRotation_eventSetRelativeRotationQuat_Parms
		{
			USceneComponent* SceneComponent;
			FQuat Desired_Rotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desired_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Desired_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionRotation_eventSetRelativeRotationQuat_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::NewProp_Desired_Rotation = { "Desired_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionRotation_eventSetRelativeRotationQuat_Parms, Desired_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::NewProp_Desired_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::NewProp_Desired_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quaternion Rotation" },
		{ "Comment", "// Function to set relative rotation of scene component to input quaternion rotation\n" },
		{ "DisplayName", "Set Relative Rotation (Quaterion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "Public/QuaternionRotation.h" },
		{ "ToolTip", "Function to set relative rotation of scene component to input quaternion rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionRotation, nullptr, "SetRelativeRotationQuat", nullptr, nullptr, sizeof(QuaternionRotation_eventSetRelativeRotationQuat_Parms), Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics
	{
		struct QuaternionRotation_eventSetWorldRotationQuat_Parms
		{
			USceneComponent* SceneComponent;
			FQuat Desired_Rotation;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SceneComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SceneComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Desired_Rotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Desired_Rotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::NewProp_SceneComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::NewProp_SceneComponent = { "SceneComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionRotation_eventSetWorldRotationQuat_Parms, SceneComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::NewProp_SceneComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::NewProp_SceneComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::NewProp_Desired_Rotation = { "Desired_Rotation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(QuaternionRotation_eventSetWorldRotationQuat_Parms, Desired_Rotation), Z_Construct_UScriptStruct_FQuat, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::NewProp_Desired_Rotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::NewProp_SceneComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::NewProp_Desired_Rotation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::Function_MetaDataParams[] = {
		{ "Category", "Quaternion Rotation" },
		{ "Comment", "// Function to set world rotation of scene component to input quaternion rotation\n" },
		{ "DisplayName", "Set World Rotation (Quaterion)" },
		{ "Keywords", "rotation, quaternion" },
		{ "ModuleRelativePath", "Public/QuaternionRotation.h" },
		{ "ToolTip", "Function to set world rotation of scene component to input quaternion rotation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuaternionRotation, nullptr, "SetWorldRotationQuat", nullptr, nullptr, sizeof(QuaternionRotation_eventSetWorldRotationQuat_Parms), Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UQuaternionRotation_NoRegister()
	{
		return UQuaternionRotation::StaticClass();
	}
	struct Z_Construct_UClass_UQuaternionRotation_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuaternionRotation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_VR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuaternionRotation_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuaternionRotation_AddActorLocalRotationQuat, "AddActorLocalRotationQuat" }, // 2863526162
		{ &Z_Construct_UFunction_UQuaternionRotation_AddLocalRotationQuat, "AddLocalRotationQuat" }, // 250114704
		{ &Z_Construct_UFunction_UQuaternionRotation_Euler_To_Quaternion, "Euler_To_Quaternion" }, // 4080817547
		{ &Z_Construct_UFunction_UQuaternionRotation_SetActorRelativeRotationQuat, "SetActorRelativeRotationQuat" }, // 2294529671
		{ &Z_Construct_UFunction_UQuaternionRotation_SetActorWorldRotationQuat, "SetActorWorldRotationQuat" }, // 1926659552
		{ &Z_Construct_UFunction_UQuaternionRotation_SetRelativeRotationQuat, "SetRelativeRotationQuat" }, // 2914854048
		{ &Z_Construct_UFunction_UQuaternionRotation_SetWorldRotationQuat, "SetWorldRotationQuat" }, // 834213838
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuaternionRotation_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "QuaternionRotation.h" },
		{ "ModuleRelativePath", "Public/QuaternionRotation.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuaternionRotation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuaternionRotation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UQuaternionRotation_Statics::ClassParams = {
		&UQuaternionRotation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UQuaternionRotation_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UQuaternionRotation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UQuaternionRotation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UQuaternionRotation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UQuaternionRotation, 2607896357);
	template<> VR_API UClass* StaticClass<UQuaternionRotation>()
	{
		return UQuaternionRotation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UQuaternionRotation(Z_Construct_UClass_UQuaternionRotation, &UQuaternionRotation::StaticClass, TEXT("/Script/VR"), TEXT("UQuaternionRotation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuaternionRotation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
