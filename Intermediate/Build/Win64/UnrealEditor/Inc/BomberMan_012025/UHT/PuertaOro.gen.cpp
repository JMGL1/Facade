// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/PuertaOro.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePuertaOro() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_APuerta();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_APuertaOro();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_APuertaOro_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class APuertaOro
void APuertaOro::StaticRegisterNativesAPuertaOro()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(APuertaOro);
UClass* Z_Construct_UClass_APuertaOro_NoRegister()
{
	return APuertaOro::StaticClass();
}
struct Z_Construct_UClass_APuertaOro_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "PuertaOro.h" },
		{ "ModuleRelativePath", "PuertaOro.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APuertaOro>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_APuertaOro_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APuerta,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_APuertaOro_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_APuertaOro_Statics::ClassParams = {
	&APuertaOro::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_APuertaOro_Statics::Class_MetaDataParams), Z_Construct_UClass_APuertaOro_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_APuertaOro()
{
	if (!Z_Registration_Info_UClass_APuertaOro.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_APuertaOro.OuterSingleton, Z_Construct_UClass_APuertaOro_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_APuertaOro.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<APuertaOro>()
{
	return APuertaOro::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(APuertaOro);
APuertaOro::~APuertaOro() {}
// End Class APuertaOro

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_PuertaOro_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_APuertaOro, APuertaOro::StaticClass, TEXT("APuertaOro"), &Z_Registration_Info_UClass_APuertaOro, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(APuertaOro), 4087586138U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_PuertaOro_h_2333315977(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_PuertaOro_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_PuertaOro_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
