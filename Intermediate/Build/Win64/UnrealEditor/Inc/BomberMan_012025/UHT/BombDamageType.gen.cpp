// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/BombDamageType.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBombDamageType() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBombDamageType();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_UBombDamageType_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UDamageType();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class UBombDamageType
void UBombDamageType::StaticRegisterNativesUBombDamageType()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBombDamageType);
UClass* Z_Construct_UClass_UBombDamageType_NoRegister()
{
	return UBombDamageType::StaticClass();
}
struct Z_Construct_UClass_UBombDamageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "BombDamageType.h" },
		{ "ModuleRelativePath", "BombDamageType.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBombDamageType>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UBombDamageType_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDamageType,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBombDamageType_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UBombDamageType_Statics::ClassParams = {
	&UBombDamageType::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001100A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBombDamageType_Statics::Class_MetaDataParams), Z_Construct_UClass_UBombDamageType_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UBombDamageType()
{
	if (!Z_Registration_Info_UClass_UBombDamageType.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBombDamageType.OuterSingleton, Z_Construct_UClass_UBombDamageType_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UBombDamageType.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<UBombDamageType>()
{
	return UBombDamageType::StaticClass();
}
UBombDamageType::UBombDamageType(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UBombDamageType);
UBombDamageType::~UBombDamageType() {}
// End Class UBombDamageType

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_BombDamageType_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UBombDamageType, UBombDamageType::StaticClass, TEXT("UBombDamageType"), &Z_Registration_Info_UClass_UBombDamageType, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBombDamageType), 4111940158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_BombDamageType_h_2256374209(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_BombDamageType_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_BombDamageType_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
