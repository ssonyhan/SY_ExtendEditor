// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SuperManager/Public/AssetActions/QuickAssetAction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuickAssetAction() {}
// Cross Module References
	BLUTILITY_API UClass* Z_Construct_UClass_UAssetActionUtility();
	SUPERMANAGER_API UClass* Z_Construct_UClass_UQuickAssetAction();
	SUPERMANAGER_API UClass* Z_Construct_UClass_UQuickAssetAction_NoRegister();
	UPackage* Z_Construct_UPackage__Script_SuperManager();
// End Cross Module References
	DEFINE_FUNCTION(UQuickAssetAction::execRemoveUnusedAssets)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveUnusedAssets();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuickAssetAction::execAddPrefixes)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPrefixes();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UQuickAssetAction::execDuplicateAssets)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_NumOfDuplicates);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DuplicateAssets(Z_Param_NumOfDuplicates);
		P_NATIVE_END;
	}
	void UQuickAssetAction::StaticRegisterNativesUQuickAssetAction()
	{
		UClass* Class = UQuickAssetAction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPrefixes", &UQuickAssetAction::execAddPrefixes },
			{ "DuplicateAssets", &UQuickAssetAction::execDuplicateAssets },
			{ "RemoveUnusedAssets", &UQuickAssetAction::execRemoveUnusedAssets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UQuickAssetAction_AddPrefixes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickAssetAction_AddPrefixes_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/AssetActions/QuickAssetAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickAssetAction_AddPrefixes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickAssetAction, nullptr, "AddPrefixes", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickAssetAction_AddPrefixes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuickAssetAction_AddPrefixes_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UQuickAssetAction_AddPrefixes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickAssetAction_AddPrefixes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics
	{
		struct QuickAssetAction_eventDuplicateAssets_Parms
		{
			int32 NumOfDuplicates;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumOfDuplicates;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::NewProp_NumOfDuplicates = { "NumOfDuplicates", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(QuickAssetAction_eventDuplicateAssets_Parms, NumOfDuplicates), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::NewProp_NumOfDuplicates,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/AssetActions/QuickAssetAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickAssetAction, nullptr, "DuplicateAssets", nullptr, nullptr, Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::PropPointers), sizeof(Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::QuickAssetAction_eventDuplicateAssets_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::QuickAssetAction_eventDuplicateAssets_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UQuickAssetAction_RemoveUnusedAssets_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UQuickAssetAction_RemoveUnusedAssets_Statics::Function_MetaDataParams[] = {
		{ "CallInEditor", "true" },
		{ "ModuleRelativePath", "Public/AssetActions/QuickAssetAction.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UQuickAssetAction_RemoveUnusedAssets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UQuickAssetAction, nullptr, "RemoveUnusedAssets", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UQuickAssetAction_RemoveUnusedAssets_Statics::Function_MetaDataParams), Z_Construct_UFunction_UQuickAssetAction_RemoveUnusedAssets_Statics::Function_MetaDataParams) };
	UFunction* Z_Construct_UFunction_UQuickAssetAction_RemoveUnusedAssets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UQuickAssetAction_RemoveUnusedAssets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UQuickAssetAction);
	UClass* Z_Construct_UClass_UQuickAssetAction_NoRegister()
	{
		return UQuickAssetAction::StaticClass();
	}
	struct Z_Construct_UClass_UQuickAssetAction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UQuickAssetAction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAssetActionUtility,
		(UObject* (*)())Z_Construct_UPackage__Script_SuperManager,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickAssetAction_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UQuickAssetAction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UQuickAssetAction_AddPrefixes, "AddPrefixes" }, // 1239928128
		{ &Z_Construct_UFunction_UQuickAssetAction_DuplicateAssets, "DuplicateAssets" }, // 3690016543
		{ &Z_Construct_UFunction_UQuickAssetAction_RemoveUnusedAssets, "RemoveUnusedAssets" }, // 3394612261
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickAssetAction_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UQuickAssetAction_Statics::Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "HideCategories", "Object" },
		{ "IncludePath", "AssetActions/QuickAssetAction.h" },
		{ "ModuleRelativePath", "Public/AssetActions/QuickAssetAction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UQuickAssetAction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UQuickAssetAction>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UQuickAssetAction_Statics::ClassParams = {
		&UQuickAssetAction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UQuickAssetAction_Statics::Class_MetaDataParams), Z_Construct_UClass_UQuickAssetAction_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UQuickAssetAction()
	{
		if (!Z_Registration_Info_UClass_UQuickAssetAction.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UQuickAssetAction.OuterSingleton, Z_Construct_UClass_UQuickAssetAction_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UQuickAssetAction.OuterSingleton;
	}
	template<> SUPERMANAGER_API UClass* StaticClass<UQuickAssetAction>()
	{
		return UQuickAssetAction::StaticClass();
	}
	UQuickAssetAction::UQuickAssetAction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UQuickAssetAction);
	UQuickAssetAction::~UQuickAssetAction() {}
	struct Z_CompiledInDeferFile_FID_SY_ExtendEditor_Plugins_SuperManager_Source_SuperManager_Public_AssetActions_QuickAssetAction_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SY_ExtendEditor_Plugins_SuperManager_Source_SuperManager_Public_AssetActions_QuickAssetAction_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UQuickAssetAction, UQuickAssetAction::StaticClass, TEXT("UQuickAssetAction"), &Z_Registration_Info_UClass_UQuickAssetAction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UQuickAssetAction), 1926023594U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_SY_ExtendEditor_Plugins_SuperManager_Source_SuperManager_Public_AssetActions_QuickAssetAction_h_793085816(TEXT("/Script/SuperManager"),
		Z_CompiledInDeferFile_FID_SY_ExtendEditor_Plugins_SuperManager_Source_SuperManager_Public_AssetActions_QuickAssetAction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_SY_ExtendEditor_Plugins_SuperManager_Source_SuperManager_Public_AssetActions_QuickAssetAction_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
