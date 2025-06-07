// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "BomberMan_012025/FacadeBomba.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFacadeBomba() {}

// Begin Cross Module References
BOMBERMAN_012025_API UClass* Z_Construct_UClass_ABomba_NoRegister();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AFacadeBomba();
BOMBERMAN_012025_API UClass* Z_Construct_UClass_AFacadeBomba_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
UPackage* Z_Construct_UPackage__Script_BomberMan_012025();
// End Cross Module References

// Begin Class AFacadeBomba Function DetonateRemoteBomb
struct Z_Construct_UFunction_AFacadeBomba_DetonateRemoteBomb_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bomb System" },
		{ "ModuleRelativePath", "FacadeBomba.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFacadeBomba_DetonateRemoteBomb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFacadeBomba, nullptr, "DetonateRemoteBomb", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFacadeBomba_DetonateRemoteBomb_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFacadeBomba_DetonateRemoteBomb_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_AFacadeBomba_DetonateRemoteBomb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFacadeBomba_DetonateRemoteBomb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFacadeBomba::execDetonateRemoteBomb)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DetonateRemoteBomb();
	P_NATIVE_END;
}
// End Class AFacadeBomba Function DetonateRemoteBomb

// Begin Class AFacadeBomba Function PlaceBomb
struct Z_Construct_UFunction_AFacadeBomba_PlaceBomb_Statics
{
	struct FacadeBomba_eventPlaceBomb_Parms
	{
		AActor* InstigatorActor;
		FVector Location;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Bomb System" },
		{ "ModuleRelativePath", "FacadeBomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InstigatorActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Location;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFacadeBomba_PlaceBomb_Statics::NewProp_InstigatorActor = { "InstigatorActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FacadeBomba_eventPlaceBomb_Parms, InstigatorActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AFacadeBomba_PlaceBomb_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FacadeBomba_eventPlaceBomb_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Location_MetaData), NewProp_Location_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFacadeBomba_PlaceBomb_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFacadeBomba_PlaceBomb_Statics::NewProp_InstigatorActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFacadeBomba_PlaceBomb_Statics::NewProp_Location,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AFacadeBomba_PlaceBomb_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AFacadeBomba_PlaceBomb_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFacadeBomba, nullptr, "PlaceBomb", nullptr, nullptr, Z_Construct_UFunction_AFacadeBomba_PlaceBomb_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFacadeBomba_PlaceBomb_Statics::PropPointers), sizeof(Z_Construct_UFunction_AFacadeBomba_PlaceBomb_Statics::FacadeBomba_eventPlaceBomb_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AFacadeBomba_PlaceBomb_Statics::Function_MetaDataParams), Z_Construct_UFunction_AFacadeBomba_PlaceBomb_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AFacadeBomba_PlaceBomb_Statics::FacadeBomba_eventPlaceBomb_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AFacadeBomba_PlaceBomb()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AFacadeBomba_PlaceBomb_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AFacadeBomba::execPlaceBomb)
{
	P_GET_OBJECT(AActor,Z_Param_InstigatorActor);
	P_GET_STRUCT_REF(FVector,Z_Param_Out_Location);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlaceBomb(Z_Param_InstigatorActor,Z_Param_Out_Location);
	P_NATIVE_END;
}
// End Class AFacadeBomba Function PlaceBomb

// Begin Class AFacadeBomba
void AFacadeBomba::StaticRegisterNativesAFacadeBomba()
{
	UClass* Class = AFacadeBomba::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DetonateRemoteBomb", &AFacadeBomba::execDetonateRemoteBomb },
		{ "PlaceBomb", &AFacadeBomba::execPlaceBomb },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFacadeBomba);
UClass* Z_Construct_UClass_AFacadeBomba_NoRegister()
{
	return AFacadeBomba::StaticClass();
}
struct Z_Construct_UClass_AFacadeBomba_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "FacadeBomba.h" },
		{ "ModuleRelativePath", "FacadeBomba.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BombClass_MetaData[] = {
		{ "Category", "Bomb System" },
		{ "ModuleRelativePath", "FacadeBomba.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_BombClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AFacadeBomba_DetonateRemoteBomb, "DetonateRemoteBomb" }, // 3938864130
		{ &Z_Construct_UFunction_AFacadeBomba_PlaceBomb, "PlaceBomb" }, // 3555636631
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFacadeBomba>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_AFacadeBomba_Statics::NewProp_BombClass = { "BombClass", nullptr, (EPropertyFlags)0x0044000000010001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AFacadeBomba, BombClass), Z_Construct_UClass_UClass, Z_Construct_UClass_ABomba_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BombClass_MetaData), NewProp_BombClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFacadeBomba_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFacadeBomba_Statics::NewProp_BombClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeBomba_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AFacadeBomba_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_BomberMan_012025,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeBomba_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AFacadeBomba_Statics::ClassParams = {
	&AFacadeBomba::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AFacadeBomba_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeBomba_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AFacadeBomba_Statics::Class_MetaDataParams), Z_Construct_UClass_AFacadeBomba_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AFacadeBomba()
{
	if (!Z_Registration_Info_UClass_AFacadeBomba.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFacadeBomba.OuterSingleton, Z_Construct_UClass_AFacadeBomba_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AFacadeBomba.OuterSingleton;
}
template<> BOMBERMAN_012025_API UClass* StaticClass<AFacadeBomba>()
{
	return AFacadeBomba::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AFacadeBomba);
AFacadeBomba::~AFacadeBomba() {}
// End Class AFacadeBomba

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_FacadeBomba_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AFacadeBomba, AFacadeBomba::StaticClass, TEXT("AFacadeBomba"), &Z_Registration_Info_UClass_AFacadeBomba, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFacadeBomba), 4209784048U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_FacadeBomba_h_4090845773(TEXT("/Script/BomberMan_012025"),
	Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_FacadeBomba_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_X13_Desktop_Patrones_de_Diseno_Unreal_Estructurales_BomberMan_012025_Source_BomberMan_012025_FacadeBomba_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
