// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TutorialCharacter.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TutorialCharacter_generated_h
#error "TutorialCharacter.generated.h already included, missing '#pragma once' in TutorialCharacter.h"
#endif
#define TESTPROJECT_TutorialCharacter_generated_h

#define FID_TestProject_Source_TestProject_TutorialCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSpawnActor);


#define FID_TestProject_Source_TestProject_TutorialCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATutorialCharacter(); \
	friend struct Z_Construct_UClass_ATutorialCharacter_Statics; \
public: \
	DECLARE_CLASS(ATutorialCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATutorialCharacter)


#define FID_TestProject_Source_TestProject_TutorialCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATutorialCharacter(ATutorialCharacter&&); \
	ATutorialCharacter(const ATutorialCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATutorialCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATutorialCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATutorialCharacter) \
	NO_API virtual ~ATutorialCharacter();


#define FID_TestProject_Source_TestProject_TutorialCharacter_h_9_PROLOG
#define FID_TestProject_Source_TestProject_TutorialCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProject_Source_TestProject_TutorialCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_TutorialCharacter_h_12_INCLASS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_TutorialCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATutorialCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProject_Source_TestProject_TutorialCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
