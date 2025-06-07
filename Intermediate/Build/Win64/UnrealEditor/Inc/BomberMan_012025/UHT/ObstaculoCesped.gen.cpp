// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/ObstaculoCesped.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculoCesped() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AObstaculo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AObstaculoCesped();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AObstaculoCesped_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AObstaculoCesped
void AObstaculoCesped::StaticRegisterNativesAObstaculoCesped()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstaculoCesped);
UClass* Z_Construct_UClass_AObstaculoCesped_NoRegister()
{
	return AObstaculoCesped::StaticClass();
}
struct Z_Construct_UClass_AObstaculoCesped_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "ObstaculoCesped.h" },
		{ "ModuleRelativePath", "ObstaculoCesped.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculoCesped>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AObstaculoCesped_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AObstaculo,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoCesped_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstaculoCesped_Statics::ClassParams = {
	&AObstaculoCesped::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculoCesped_Statics::Class_MetaDataParams), Z_Construct_UClass_AObstaculoCesped_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObstaculoCesped()
{
	if (!Z_Registration_Info_UClass_AObstaculoCesped.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstaculoCesped.OuterSingleton, Z_Construct_UClass_AObstaculoCesped_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObstaculoCesped.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AObstaculoCesped>()
{
	return AObstaculoCesped::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculoCesped);
AObstaculoCesped::~AObstaculoCesped() {}
// End Class AObstaculoCesped

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_ObstaculoCesped_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObstaculoCesped, AObstaculoCesped::StaticClass, TEXT("AObstaculoCesped"), &Z_Registration_Info_UClass_AObstaculoCesped, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstaculoCesped), 3133733480U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_ObstaculoCesped_h_2509806995(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_ObstaculoCesped_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_ObstaculoCesped_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
