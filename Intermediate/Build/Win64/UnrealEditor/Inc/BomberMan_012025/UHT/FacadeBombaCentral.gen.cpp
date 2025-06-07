// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/FacadeBombaCentral.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacadeBombaCentral() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AFacadeBombaCentral();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AFacadeBombaCentral_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AFacadeBombaCentral
void AFacadeBombaCentral::StaticRegisterNativesAFacadeBombaCentral()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFacadeBombaCentral);
UClass* Z_Construct_UClass_AFacadeBombaCentral_NoRegister()
{
	return AFacadeBombaCentral::StaticClass();
}
struct Z_Construct_UClass_AFacadeBombaCentral_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FacadeBombaCentral.h" },
		{ "ModuleRelativePath", "FacadeBombaCentral.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacadeBombaCentral>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AFacadeBombaCentral_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeBombaCentral_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFacadeBombaCentral_Statics::ClassParams = {
	&AFacadeBombaCentral::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeBombaCentral_Statics::Class_MetaDataParams), Z_Construct_UClass_AFacadeBombaCentral_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFacadeBombaCentral()
{
	if (!Z_Registration_Info_UClass_AFacadeBombaCentral.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFacadeBombaCentral.OuterSingleton, Z_Construct_UClass_AFacadeBombaCentral_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFacadeBombaCentral.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AFacadeBombaCentral>()
{
	return AFacadeBombaCentral::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFacadeBombaCentral);
AFacadeBombaCentral::~AFacadeBombaCentral() {}
// End Class AFacadeBombaCentral

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_FacadeBombaCentral_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFacadeBombaCentral, AFacadeBombaCentral::StaticClass, TEXT("AFacadeBombaCentral"), &Z_Registration_Info_UClass_AFacadeBombaCentral, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFacadeBombaCentral), 2542437011U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_FacadeBombaCentral_h_2254947663(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_FacadeBombaCentral_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_FacadeBombaCentral_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
