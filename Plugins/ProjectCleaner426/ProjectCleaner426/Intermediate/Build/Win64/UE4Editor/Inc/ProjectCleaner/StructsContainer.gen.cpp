// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProjectCleaner/Public/StructsContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStructsContainer() {}
// Cross Module References
	PROJECTCLEANER_API UClass* Z_Construct_UClass_UCleanerConfigs_NoRegister();
	PROJECTCLEANER_API UClass* Z_Construct_UClass_UCleanerConfigs();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ProjectCleaner();
	PROJECTCLEANER_API UClass* Z_Construct_UClass_UExcludeOptions_NoRegister();
	PROJECTCLEANER_API UClass* Z_Construct_UClass_UExcludeOptions();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	PROJECTCLEANER_API UClass* Z_Construct_UClass_UIndirectAsset_NoRegister();
	PROJECTCLEANER_API UClass* Z_Construct_UClass_UIndirectAsset();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetData();
	PROJECTCLEANER_API UClass* Z_Construct_UClass_UCorruptedFile_NoRegister();
	PROJECTCLEANER_API UClass* Z_Construct_UClass_UCorruptedFile();
	PROJECTCLEANER_API UClass* Z_Construct_UClass_UNonEngineFile_NoRegister();
	PROJECTCLEANER_API UClass* Z_Construct_UClass_UNonEngineFile();
// End Cross Module References
	void UCleanerConfigs::StaticRegisterNativesUCleanerConfigs()
	{
	}
	UClass* Z_Construct_UClass_UCleanerConfigs_NoRegister()
	{
		return UCleanerConfigs::StaticClass();
	}
	struct Z_Construct_UClass_UCleanerConfigs_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bScanDeveloperContents_MetaData[];
#endif
		static void NewProp_bScanDeveloperContents_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bScanDeveloperContents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutomaticallyDeleteEmptyFolders_MetaData[];
#endif
		static void NewProp_bAutomaticallyDeleteEmptyFolders_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutomaticallyDeleteEmptyFolders;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeleteChunkLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DeleteChunkLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCleanerConfigs_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectCleaner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCleanerConfigs_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StructsContainer.h" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_bScanDeveloperContents_MetaData[] = {
		{ "Category", "CleanerConfigs" },
		{ "DisplayName", "Scan Developer Contents Folders" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
	void Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_bScanDeveloperContents_SetBit(void* Obj)
	{
		((UCleanerConfigs*)Obj)->bScanDeveloperContents = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_bScanDeveloperContents = { "bScanDeveloperContents", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCleanerConfigs), &Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_bScanDeveloperContents_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_bScanDeveloperContents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_bScanDeveloperContents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_bAutomaticallyDeleteEmptyFolders_MetaData[] = {
		{ "Category", "CleanerConfigs" },
		{ "DisplayName", "Remove Empty Folders After Assets Deleted" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
	void Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_bAutomaticallyDeleteEmptyFolders_SetBit(void* Obj)
	{
		((UCleanerConfigs*)Obj)->bAutomaticallyDeleteEmptyFolders = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_bAutomaticallyDeleteEmptyFolders = { "bAutomaticallyDeleteEmptyFolders", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UCleanerConfigs), &Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_bAutomaticallyDeleteEmptyFolders_SetBit, METADATA_PARAMS(Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_bAutomaticallyDeleteEmptyFolders_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_bAutomaticallyDeleteEmptyFolders_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_DeleteChunkLimit_MetaData[] = {
		{ "Category", "CleanerConfigs" },
		{ "ClampMax", "1000" },
		{ "ClampMin", "20" },
		{ "DisplayName", "Deletion Chunk Limit" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
		{ "ToolTip", "To prevent engine from freezing when deleting a lot of assets, we delete them by chunks.Here you can specify chunk limit.Pick lower values if your PC got low RAM capacity. Default is 20" },
		{ "UIMax", "1000" },
		{ "UIMin", "20" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_DeleteChunkLimit = { "DeleteChunkLimit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCleanerConfigs, DeleteChunkLimit), METADATA_PARAMS(Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_DeleteChunkLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_DeleteChunkLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCleanerConfigs_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_bScanDeveloperContents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_bAutomaticallyDeleteEmptyFolders,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCleanerConfigs_Statics::NewProp_DeleteChunkLimit,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCleanerConfigs_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCleanerConfigs>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCleanerConfigs_Statics::ClassParams = {
		&UCleanerConfigs::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCleanerConfigs_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCleanerConfigs_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCleanerConfigs_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCleanerConfigs_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCleanerConfigs()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCleanerConfigs_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCleanerConfigs, 2860074976);
	template<> PROJECTCLEANER_API UClass* StaticClass<UCleanerConfigs>()
	{
		return UCleanerConfigs::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCleanerConfigs(Z_Construct_UClass_UCleanerConfigs, &UCleanerConfigs::StaticClass, TEXT("/Script/ProjectCleaner"), TEXT("UCleanerConfigs"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCleanerConfigs);
	void UExcludeOptions::StaticRegisterNativesUExcludeOptions()
	{
	}
	UClass* Z_Construct_UClass_UExcludeOptions_NoRegister()
	{
		return UExcludeOptions::StaticClass();
	}
	struct Z_Construct_UClass_UExcludeOptions_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Paths_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Paths_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Paths;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Classes_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Classes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Classes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExcludeOptions_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectCleaner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExcludeOptions_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StructsContainer.h" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UExcludeOptions_Statics::NewProp_Paths_Inner = { "Paths", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExcludeOptions_Statics::NewProp_Paths_MetaData[] = {
		{ "Category", "ExcludeOptions" },
		{ "ContentDir", "" },
		{ "DisplayName", "Paths" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExcludeOptions_Statics::NewProp_Paths = { "Paths", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExcludeOptions, Paths), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExcludeOptions_Statics::NewProp_Paths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExcludeOptions_Statics::NewProp_Paths_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UExcludeOptions_Statics::NewProp_Classes_Inner = { "Classes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExcludeOptions_Statics::NewProp_Classes_MetaData[] = {
		{ "Category", "ExcludeOptions" },
		{ "DisplayName", "Classes" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UExcludeOptions_Statics::NewProp_Classes = { "Classes", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UExcludeOptions, Classes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UExcludeOptions_Statics::NewProp_Classes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExcludeOptions_Statics::NewProp_Classes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExcludeOptions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExcludeOptions_Statics::NewProp_Paths_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExcludeOptions_Statics::NewProp_Paths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExcludeOptions_Statics::NewProp_Classes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExcludeOptions_Statics::NewProp_Classes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExcludeOptions_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExcludeOptions>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExcludeOptions_Statics::ClassParams = {
		&UExcludeOptions::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExcludeOptions_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExcludeOptions_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UExcludeOptions_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExcludeOptions_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExcludeOptions()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExcludeOptions_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExcludeOptions, 3085568672);
	template<> PROJECTCLEANER_API UClass* StaticClass<UExcludeOptions>()
	{
		return UExcludeOptions::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExcludeOptions(Z_Construct_UClass_UExcludeOptions, &UExcludeOptions::StaticClass, TEXT("/Script/ProjectCleaner"), TEXT("UExcludeOptions"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExcludeOptions);
	void UIndirectAsset::StaticRegisterNativesUIndirectAsset()
	{
	}
	UClass* Z_Construct_UClass_UIndirectAsset_NoRegister()
	{
		return UIndirectAsset::StaticClass();
	}
	struct Z_Construct_UClass_UIndirectAsset_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AssetPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LineNum_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LineNum;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AssetData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIndirectAsset_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectCleaner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectAsset_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StructsContainer.h" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectAsset_Statics::NewProp_AssetName_MetaData[] = {
		{ "Category", "AssetUsedIndirectly" },
		{ "DisplayName", "AssetName" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIndirectAsset_Statics::NewProp_AssetName = { "AssetName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndirectAsset, AssetName), METADATA_PARAMS(Z_Construct_UClass_UIndirectAsset_Statics::NewProp_AssetName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectAsset_Statics::NewProp_AssetName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectAsset_Statics::NewProp_AssetPath_MetaData[] = {
		{ "Category", "AssetUsedIndirectly" },
		{ "DisplayName", "AssetPath" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIndirectAsset_Statics::NewProp_AssetPath = { "AssetPath", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndirectAsset, AssetPath), METADATA_PARAMS(Z_Construct_UClass_UIndirectAsset_Statics::NewProp_AssetPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectAsset_Statics::NewProp_AssetPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectAsset_Statics::NewProp_FilePath_MetaData[] = {
		{ "Category", "AssetUsedIndirectly" },
		{ "DisplayName", "FilePath where asset used" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UIndirectAsset_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndirectAsset, FilePath), METADATA_PARAMS(Z_Construct_UClass_UIndirectAsset_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectAsset_Statics::NewProp_FilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectAsset_Statics::NewProp_LineNum_MetaData[] = {
		{ "Category", "AssetUsedIndirectly" },
		{ "DisplayName", "Line where asset used" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UIndirectAsset_Statics::NewProp_LineNum = { "LineNum", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndirectAsset, LineNum), METADATA_PARAMS(Z_Construct_UClass_UIndirectAsset_Statics::NewProp_LineNum_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectAsset_Statics::NewProp_LineNum_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIndirectAsset_Statics::NewProp_AssetData_MetaData[] = {
		{ "Category", "AssetUsedIndirectly" },
		{ "DisplayName", "AssetData" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UIndirectAsset_Statics::NewProp_AssetData = { "AssetData", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIndirectAsset, AssetData), Z_Construct_UScriptStruct_FAssetData, METADATA_PARAMS(Z_Construct_UClass_UIndirectAsset_Statics::NewProp_AssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectAsset_Statics::NewProp_AssetData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIndirectAsset_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectAsset_Statics::NewProp_AssetName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectAsset_Statics::NewProp_AssetPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectAsset_Statics::NewProp_FilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectAsset_Statics::NewProp_LineNum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIndirectAsset_Statics::NewProp_AssetData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIndirectAsset_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIndirectAsset>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIndirectAsset_Statics::ClassParams = {
		&UIndirectAsset::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIndirectAsset_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectAsset_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UIndirectAsset_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIndirectAsset_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIndirectAsset()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIndirectAsset_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIndirectAsset, 580287346);
	template<> PROJECTCLEANER_API UClass* StaticClass<UIndirectAsset>()
	{
		return UIndirectAsset::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIndirectAsset(Z_Construct_UClass_UIndirectAsset, &UIndirectAsset::StaticClass, TEXT("/Script/ProjectCleaner"), TEXT("UIndirectAsset"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIndirectAsset);
	void UCorruptedFile::StaticRegisterNativesUCorruptedFile()
	{
	}
	UClass* Z_Construct_UClass_UCorruptedFile_NoRegister()
	{
		return UCorruptedFile::StaticClass();
	}
	struct Z_Construct_UClass_UCorruptedFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbsolutePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AbsolutePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCorruptedFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectCleaner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorruptedFile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StructsContainer.h" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorruptedFile_Statics::NewProp_Name_MetaData[] = {
		{ "Category", "CorruptedFile" },
		{ "DisplayName", "Name" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCorruptedFile_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorruptedFile, Name), METADATA_PARAMS(Z_Construct_UClass_UCorruptedFile_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorruptedFile_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCorruptedFile_Statics::NewProp_AbsolutePath_MetaData[] = {
		{ "Category", "CorruptedFile" },
		{ "DisplayName", "AbsolutePath" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UCorruptedFile_Statics::NewProp_AbsolutePath = { "AbsolutePath", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCorruptedFile, AbsolutePath), METADATA_PARAMS(Z_Construct_UClass_UCorruptedFile_Statics::NewProp_AbsolutePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCorruptedFile_Statics::NewProp_AbsolutePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCorruptedFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorruptedFile_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCorruptedFile_Statics::NewProp_AbsolutePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCorruptedFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCorruptedFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCorruptedFile_Statics::ClassParams = {
		&UCorruptedFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCorruptedFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCorruptedFile_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UCorruptedFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCorruptedFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCorruptedFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCorruptedFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCorruptedFile, 3506827368);
	template<> PROJECTCLEANER_API UClass* StaticClass<UCorruptedFile>()
	{
		return UCorruptedFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCorruptedFile(Z_Construct_UClass_UCorruptedFile, &UCorruptedFile::StaticClass, TEXT("/Script/ProjectCleaner"), TEXT("UCorruptedFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCorruptedFile);
	void UNonEngineFile::StaticRegisterNativesUNonEngineFile()
	{
	}
	UClass* Z_Construct_UClass_UNonEngineFile_NoRegister()
	{
		return UNonEngineFile::StaticClass();
	}
	struct Z_Construct_UClass_UNonEngineFile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FilePath;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNonEngineFile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ProjectCleaner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNonEngineFile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StructsContainer.h" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNonEngineFile_Statics::NewProp_FileName_MetaData[] = {
		{ "Category", "NonEngineFile" },
		{ "DisplayName", "FileName" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNonEngineFile_Statics::NewProp_FileName = { "FileName", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNonEngineFile, FileName), METADATA_PARAMS(Z_Construct_UClass_UNonEngineFile_Statics::NewProp_FileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNonEngineFile_Statics::NewProp_FileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNonEngineFile_Statics::NewProp_FilePath_MetaData[] = {
		{ "Category", "NonEngineFile" },
		{ "DisplayName", "FilePath" },
		{ "ModuleRelativePath", "Public/StructsContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UNonEngineFile_Statics::NewProp_FilePath = { "FilePath", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNonEngineFile, FilePath), METADATA_PARAMS(Z_Construct_UClass_UNonEngineFile_Statics::NewProp_FilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNonEngineFile_Statics::NewProp_FilePath_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNonEngineFile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNonEngineFile_Statics::NewProp_FileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNonEngineFile_Statics::NewProp_FilePath,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNonEngineFile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNonEngineFile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNonEngineFile_Statics::ClassParams = {
		&UNonEngineFile::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNonEngineFile_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNonEngineFile_Statics::PropPointers),
		0,
		0x000000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UNonEngineFile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNonEngineFile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNonEngineFile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNonEngineFile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNonEngineFile, 3604423729);
	template<> PROJECTCLEANER_API UClass* StaticClass<UNonEngineFile>()
	{
		return UNonEngineFile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNonEngineFile(Z_Construct_UClass_UNonEngineFile, &UNonEngineFile::StaticClass, TEXT("/Script/ProjectCleaner"), TEXT("UNonEngineFile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNonEngineFile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
