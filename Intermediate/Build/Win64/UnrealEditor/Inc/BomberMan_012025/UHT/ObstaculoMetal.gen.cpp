// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/ObstaculoMetal.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoMetal() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AObstaculo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AObstaculoMetal();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AObstaculoMetal_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AObstaculoMetal
void AObstaculoMetal::StaticRegisterNativesAObstaculoMetal()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstaculoMetal);
UClass* Z_Construct_UClass_AObstaculoMetal_NoRegister()
{
	return AObstaculoMetal::StaticClass();
}
struct Z_Construct_UClass_AObstaculoMetal_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "ObstaculoMetal.h" },
		{ "ModuleRelativePath", "ObstaculoMetal.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoMetal>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AObstaculoMetal_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AObstaculo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoMetal_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoMetal_Statics::ClassParams = {
	&AObstaculoMetal::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoMetal_Statics::Class_MetaDataParams), Z_Construct_UClass_AObstaculoMetal_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObstaculoMetal()
{
	if (!Z_Registration_Info_UClass_AObstaculoMetal.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstaculoMetal.OuterSingleton, Z_Construct_UClass_AObstaculoMetal_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObstaculoMetal.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AObstaculoMetal>()
{
	return AObstaculoMetal::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoMetal);
AObstaculoMetal::~AObstaculoMetal() {}
// End Class AObstaculoMetal

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_ObstaculoMetal_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObstaculoMetal, AObstaculoMetal::StaticClass, TEXT("AObstaculoMetal"), &Z_Registration_Info_UClass_AObstaculoMetal, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstaculoMetal), 3310253428U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_ObstaculoMetal_h_2269664783(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_ObstaculoMetal_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_ObstaculoMetal_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
