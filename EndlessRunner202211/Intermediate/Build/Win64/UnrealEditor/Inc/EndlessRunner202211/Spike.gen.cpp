// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EndlessRunner202211/Spike.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpike() {}
// Cross Module References
	ENDLESSRUNNER202211_API UClass* Z_Construct_UClass_ASpike_NoRegister();
	ENDLESSRUNNER202211_API UClass* Z_Construct_UClass_ASpike();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_EndlessRunner202211();
// End Cross Module References
	void ASpike::StaticRegisterNativesASpike()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ASpike);
	UClass* Z_Construct_UClass_ASpike_NoRegister()
	{
		return ASpike::StaticClass();
	}
	struct Z_Construct_UClass_ASpike_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpike_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_EndlessRunner202211,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpike_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Spike.h" },
		{ "ModuleRelativePath", "Spike.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpike_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpike>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ASpike_Statics::ClassParams = {
		&ASpike::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpike_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpike_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpike()
	{
		if (!Z_Registration_Info_UClass_ASpike.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ASpike.OuterSingleton, Z_Construct_UClass_ASpike_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ASpike.OuterSingleton;
	}
	template<> ENDLESSRUNNER202211_API UClass* StaticClass<ASpike>()
	{
		return ASpike::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpike);
	struct Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_Spike_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_Spike_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ASpike, ASpike::StaticClass, TEXT("ASpike"), &Z_Registration_Info_UClass_ASpike, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ASpike), 584187355U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_Spike_h_2681468273(TEXT("/Script/EndlessRunner202211"),
		Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_Spike_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_EndlessRunner202211_Source_EndlessRunner202211_Spike_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
