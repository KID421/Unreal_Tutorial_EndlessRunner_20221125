// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner202211/EndlessRunner202211GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEndlessRunner202211GameMode() {}
// Cross Module References
	ENDLESSRUNNER202211_API UClass* Z_Construct_UClass_AEndlessRunner202211GameMode_NoRegister();
	ENDLESSRUNNER202211_API UClass* Z_Construct_UClass_AEndlessRunner202211GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner202211();
// End Cross Module References
	void AEndlessRunner202211GameMode::StaticRegisterNativesAEndlessRunner202211GameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AEndlessRunner202211GameMode);
	UClass* Z_Construct_UClass_AEndlessRunner202211GameMode_NoRegister()
	{
		return AEndlessRunner202211GameMode::StaticClass();
	}
	struct Z_Construct_UClass_AEndlessRunner202211GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEndlessRunner202211GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner202211,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEndlessRunner202211GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "EndlessRunner202211GameMode.h" },
		{ "ModuleRelativePath", "EndlessRunner202211GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEndlessRunner202211GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEndlessRunner202211GameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AEndlessRunner202211GameMode_Statics::ClassParams = {
		&AEndlessRunner202211GameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AEndlessRunner202211GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEndlessRunner202211GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEndlessRunner202211GameMode()
	{
		if (!Z_Registration_Info_UClass_AEndlessRunner202211GameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AEndlessRunner202211GameMode.OuterSingleton, Z_Construct_UClass_AEndlessRunner202211GameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AEndlessRunner202211GameMode.OuterSingleton;
	}
	template<> ENDLESSRUNNER202211_API UClass* StaticClass<AEndlessRunner202211GameMode>()
	{
		return AEndlessRunner202211GameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEndlessRunner202211GameMode);
	struct Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_EndlessRunner202211GameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_EndlessRunner202211GameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AEndlessRunner202211GameMode, AEndlessRunner202211GameMode::StaticClass, TEXT("AEndlessRunner202211GameMode"), &Z_Registration_Info_UClass_AEndlessRunner202211GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AEndlessRunner202211GameMode), 1517612618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_EndlessRunner202211GameMode_h_3375743750(TEXT("/Script/EndlessRunner202211"),
		Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_EndlessRunner202211GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_EndlessRunner202211GameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
