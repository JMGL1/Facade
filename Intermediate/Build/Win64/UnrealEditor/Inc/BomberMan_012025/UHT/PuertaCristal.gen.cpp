// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/PuertaCristal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuertaCristal() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_APuerta();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_APuertaCristal();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_APuertaCristal_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class APuertaCristal
void APuertaCristal::StaticRegisterNativesAPuertaCristal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuertaCristal);
UClass* Z_Construct_UClass_APuertaCristal_NoRegister()
{
	return APuertaCristal::StaticClass();
}
struct Z_Construct_UClass_APuertaCristal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "PuertaCristal.h" },
		{ "ModuleRelativePath", "PuertaCristal.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuertaCristal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APuertaCristal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APuerta,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuertaCristal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APuertaCristal_Statics::ClassParams = {
	&APuertaCristal::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuertaCristal_Statics::Class_MetaDataParams), Z_Construct_UClass_APuertaCristal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APuertaCristal()
{
	if (!Z_Registration_Info_UClass_APuertaCristal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APuertaCristal.OuterSingleton, Z_Construct_UClass_APuertaCristal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APuertaCristal.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<APuertaCristal>()
{
	return APuertaCristal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APuertaCristal);
APuertaCristal::~APuertaCristal() {}
// End Class APuertaCristal

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_PuertaCristal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APuertaCristal, APuertaCristal::StaticClass, TEXT("APuertaCristal"), &Z_Registration_Info_UClass_APuertaCristal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuertaCristal), 1748669379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_PuertaCristal_h_3074397359(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_PuertaCristal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_PuertaCristal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
