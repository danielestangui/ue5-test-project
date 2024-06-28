// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TutorialCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTutorialCharacter() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_ACharacter();
TESTPROJECT_API UClass* Z_Construct_UClass_ATutorialCharacter();
TESTPROJECT_API UClass* Z_Construct_UClass_ATutorialCharacter_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class ATutorialCharacter Function SpawnActor
struct Z_Construct_UFunction_ATutorialCharacter_SpawnActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "TutorialCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATutorialCharacter_SpawnActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATutorialCharacter, nullptr, "SpawnActor", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATutorialCharacter_SpawnActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATutorialCharacter_SpawnActor_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_ATutorialCharacter_SpawnActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATutorialCharacter_SpawnActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATutorialCharacter::execSpawnActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SpawnActor();
	P_NATIVE_END;
}
// End Class ATutorialCharacter Function SpawnActor

// Begin Class ATutorialCharacter
void ATutorialCharacter::StaticRegisterNativesATutorialCharacter()
{
	UClass* Class = ATutorialCharacter::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SpawnActor", &ATutorialCharacter::execSpawnActor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATutorialCharacter);
UClass* Z_Construct_UClass_ATutorialCharacter_NoRegister()
{
	return ATutorialCharacter::StaticClass();
}
struct Z_Construct_UClass_ATutorialCharacter_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "TutorialCharacter.h" },
		{ "ModuleRelativePath", "TutorialCharacter.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_actorBPToSpawn_MetaData[] = {
		{ "Category", "TutorialCharacter" },
		{ "ModuleRelativePath", "TutorialCharacter.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_actorBPToSpawn;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATutorialCharacter_SpawnActor, "SpawnActor" }, // 1238214953
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATutorialCharacter>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_ATutorialCharacter_Statics::NewProp_actorBPToSpawn = { "actorBPToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATutorialCharacter, actorBPToSpawn), Z_Construct_UClass_UClass, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_actorBPToSpawn_MetaData), NewProp_actorBPToSpawn_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATutorialCharacter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATutorialCharacter_Statics::NewProp_actorBPToSpawn,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialCharacter_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATutorialCharacter_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_ACharacter,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialCharacter_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATutorialCharacter_Statics::ClassParams = {
	&ATutorialCharacter::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATutorialCharacter_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialCharacter_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATutorialCharacter_Statics::Class_MetaDataParams), Z_Construct_UClass_ATutorialCharacter_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATutorialCharacter()
{
	if (!Z_Registration_Info_UClass_ATutorialCharacter.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATutorialCharacter.OuterSingleton, Z_Construct_UClass_ATutorialCharacter_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATutorialCharacter.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<ATutorialCharacter>()
{
	return ATutorialCharacter::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATutorialCharacter);
ATutorialCharacter::~ATutorialCharacter() {}
// End Class ATutorialCharacter

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TutorialCharacter_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATutorialCharacter, ATutorialCharacter::StaticClass, TEXT("ATutorialCharacter"), &Z_Registration_Info_UClass_ATutorialCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATutorialCharacter), 3445135940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TutorialCharacter_h_4112608435(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TutorialCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TutorialCharacter_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
