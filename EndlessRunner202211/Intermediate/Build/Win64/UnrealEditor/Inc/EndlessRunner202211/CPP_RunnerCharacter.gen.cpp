// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner202211/CPP_RunnerCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_RunnerCharacter() {}
// Cross Module References
	ENDLESSRUNNER202211_API UClass* Z_Construct_UClass_ACPP_RunnerCharacter_NoRegister();
	ENDLESSRUNNER202211_API UClass* Z_Construct_UClass_ACPP_RunnerCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner202211();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ACPP_RunnerCharacter::execOnOverlapBegin)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_overlappedComp);
		P_GET_OBJECT(AActor,Z_Param_otherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_otherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_otherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_sweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOverlapBegin(Z_Param_overlappedComp,Z_Param_otherActor,Z_Param_otherComp,Z_Param_otherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_sweepResult);
		P_NATIVE_END;
	}
	void ACPP_RunnerCharacter::StaticRegisterNativesACPP_RunnerCharacter()
	{
		UClass* Class = ACPP_RunnerCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnOverlapBegin", &ACPP_RunnerCharacter::execOnOverlapBegin },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics
	{
		struct CPP_RunnerCharacter_eventOnOverlapBegin_Parms
		{
			UPrimitiveComponent* overlappedComp;
			AActor* otherActor;
			UPrimitiveComponent* otherComp;
			int32 otherBodyIndex;
			bool bFromSweep;
			FHitResult sweepResult;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_overlappedComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_overlappedComp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherActor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_otherComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_otherComp;
		static const UECodeGen_Private::FIntPropertyParams NewProp_otherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sweepResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_sweepResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_overlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_overlappedComp = { "overlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_RunnerCharacter_eventOnOverlapBegin_Parms, overlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_overlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_overlappedComp_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_otherActor = { "otherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_RunnerCharacter_eventOnOverlapBegin_Parms, otherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_otherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_otherComp = { "otherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_RunnerCharacter_eventOnOverlapBegin_Parms, otherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_otherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_otherComp_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_otherBodyIndex = { "otherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_RunnerCharacter_eventOnOverlapBegin_Parms, otherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((CPP_RunnerCharacter_eventOnOverlapBegin_Parms*)Obj)->bFromSweep = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(CPP_RunnerCharacter_eventOnOverlapBegin_Parms), &Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_sweepResult = { "sweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(CPP_RunnerCharacter_eventOnOverlapBegin_Parms, sweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_sweepResult_MetaData)) }; // 1416937132
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_overlappedComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_otherActor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_otherComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_otherBodyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_bFromSweep,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::NewProp_sweepResult,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "CPP_RunnerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACPP_RunnerCharacter, nullptr, "OnOverlapBegin", nullptr, nullptr, sizeof(Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::CPP_RunnerCharacter_eventOnOverlapBegin_Parms), Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_RunnerCharacter);
	UClass* Z_Construct_UClass_ACPP_RunnerCharacter_NoRegister()
	{
		return ACPP_RunnerCharacter::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_RunnerCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_sideViewCamera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_sideViewCamera;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_RunnerCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner202211,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ACPP_RunnerCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ACPP_RunnerCharacter_OnOverlapBegin, "OnOverlapBegin" }, // 3868251126
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_RunnerCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CPP_RunnerCharacter.h" },
		{ "ModuleRelativePath", "CPP_RunnerCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_RunnerCharacter_Statics::NewProp_sideViewCamera_MetaData[] = {
		{ "Category", "CPP_RunnerCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_RunnerCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_RunnerCharacter_Statics::NewProp_sideViewCamera = { "sideViewCamera", nullptr, (EPropertyFlags)0x00400000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_RunnerCharacter, sideViewCamera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_RunnerCharacter_Statics::NewProp_sideViewCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RunnerCharacter_Statics::NewProp_sideViewCamera_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_RunnerCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_RunnerCharacter_Statics::NewProp_sideViewCamera,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_RunnerCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_RunnerCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_RunnerCharacter_Statics::ClassParams = {
		&ACPP_RunnerCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ACPP_RunnerCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RunnerCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_RunnerCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_RunnerCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_RunnerCharacter()
	{
		if (!Z_Registration_Info_UClass_ACPP_RunnerCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_RunnerCharacter.OuterSingleton, Z_Construct_UClass_ACPP_RunnerCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_RunnerCharacter.OuterSingleton;
	}
	template<> ENDLESSRUNNER202211_API UClass* StaticClass<ACPP_RunnerCharacter>()
	{
		return ACPP_RunnerCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_RunnerCharacter);
	struct Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_CPP_RunnerCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_CPP_RunnerCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_RunnerCharacter, ACPP_RunnerCharacter::StaticClass, TEXT("ACPP_RunnerCharacter"), &Z_Registration_Info_UClass_ACPP_RunnerCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_RunnerCharacter), 2189821924U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_CPP_RunnerCharacter_h_2446540210(TEXT("/Script/EndlessRunner202211"),
		Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_CPP_RunnerCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_CPP_RunnerCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
