// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/Obstaculo.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstaculo() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AObstaculo();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AObstaculo_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AObstaculo
void AObstaculo::StaticRegisterNativesAObstaculo()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AObstaculo);
UClass* Z_Construct_UClass_AObstaculo_NoRegister()
{
	return AObstaculo::StaticClass();
}
struct Z_Construct_UClass_AObstaculo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Obstaculo.h" },
		{ "ModuleRelativePath", "Obstaculo.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MallaObstaculo_MetaData[] = {
		{ "Category", "Componentes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Componente de malla est\xef\xbf\xbdtica\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Obstaculo.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Componente de malla est\xef\xbf\xbdtica" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MallaObstaculo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstaculo>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AObstaculo_Statics::NewProp_MallaObstaculo = { "MallaObstaculo", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AObstaculo, MallaObstaculo), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MallaObstaculo_MetaData), NewProp_MallaObstaculo_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstaculo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstaculo_Statics::NewProp_MallaObstaculo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AObstaculo_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AObstaculo_Statics::ClassParams = {
	&AObstaculo::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AObstaculo_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AObstaculo_Statics::Class_MetaDataParams), Z_Construct_UClass_AObstaculo_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AObstaculo()
{
	if (!Z_Registration_Info_UClass_AObstaculo.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AObstaculo.OuterSingleton, Z_Construct_UClass_AObstaculo_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AObstaculo.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AObstaculo>()
{
	return AObstaculo::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AObstaculo);
AObstaculo::~AObstaculo() {}
// End Class AObstaculo

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_Obstaculo_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AObstaculo, AObstaculo::StaticClass, TEXT("AObstaculo"), &Z_Registration_Info_UClass_AObstaculo, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AObstaculo), 780944490U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_Obstaculo_h_1173192706(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_Obstaculo_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_Obstaculo_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
