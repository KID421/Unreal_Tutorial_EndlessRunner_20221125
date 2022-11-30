// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner202211/CPP_BaseLevel.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCPP_BaseLevel() {}
// Cross Module References
	ENDLESSRUNNER202211_API UClass* Z_Construct_UClass_ACPP_BaseLevel_NoRegister();
	ENDLESSRUNNER202211_API UClass* Z_Construct_UClass_ACPP_BaseLevel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner202211();
	ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
// End Cross Module References
	void ACPP_BaseLevel::StaticRegisterNativesACPP_BaseLevel()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACPP_BaseLevel);
	UClass* Z_Construct_UClass_ACPP_BaseLevel_NoRegister()
	{
		return ACPP_BaseLevel::StaticClass();
	}
	struct Z_Construct_UClass_ACPP_BaseLevel_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_trigger_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_trigger;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_spawnLocation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_spawnLocation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ACPP_BaseLevel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner202211,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_BaseLevel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CPP_BaseLevel.h" },
		{ "ModuleRelativePath", "CPP_BaseLevel.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_BaseLevel_Statics::NewProp_trigger_MetaData[] = {
		{ "Category", "\xe8\xa7\xb8\xe7\x99\xbc" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_BaseLevel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_BaseLevel_Statics::NewProp_trigger = { "trigger", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_BaseLevel, trigger), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_BaseLevel_Statics::NewProp_trigger_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BaseLevel_Statics::NewProp_trigger_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ACPP_BaseLevel_Statics::NewProp_spawnLocation_MetaData[] = {
		{ "Category", "\xe8\xa7\xb8\xe7\x99\xbc" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "CPP_BaseLevel.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACPP_BaseLevel_Statics::NewProp_spawnLocation = { "spawnLocation", nullptr, (EPropertyFlags)0x002008000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ACPP_BaseLevel, spawnLocation), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ACPP_BaseLevel_Statics::NewProp_spawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BaseLevel_Statics::NewProp_spawnLocation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACPP_BaseLevel_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_BaseLevel_Statics::NewProp_trigger,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACPP_BaseLevel_Statics::NewProp_spawnLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ACPP_BaseLevel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACPP_BaseLevel>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ACPP_BaseLevel_Statics::ClassParams = {
		&ACPP_BaseLevel::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ACPP_BaseLevel_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BaseLevel_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ACPP_BaseLevel_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ACPP_BaseLevel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ACPP_BaseLevel()
	{
		if (!Z_Registration_Info_UClass_ACPP_BaseLevel.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACPP_BaseLevel.OuterSingleton, Z_Construct_UClass_ACPP_BaseLevel_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ACPP_BaseLevel.OuterSingleton;
	}
	template<> ENDLESSRUNNER202211_API UClass* StaticClass<ACPP_BaseLevel>()
	{
		return ACPP_BaseLevel::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ACPP_BaseLevel);
	struct Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_CPP_BaseLevel_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_CPP_BaseLevel_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ACPP_BaseLevel, ACPP_BaseLevel::StaticClass, TEXT("ACPP_BaseLevel"), &Z_Registration_Info_UClass_ACPP_BaseLevel, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACPP_BaseLevel), 416586936U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_CPP_BaseLevel_h_2373582364(TEXT("/Script/EndlessRunner202211"),
		Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_CPP_BaseLevel_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_CPP_BaseLevel_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
