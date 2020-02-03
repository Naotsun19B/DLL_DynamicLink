// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestPlugin/Public/TestPluginBPLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestPluginBPLibrary() {}
// Cross Module References
	TESTPLUGIN_API UClass* Z_Construct_UClass_UTestPluginBPLibrary_NoRegister();
	TESTPLUGIN_API UClass* Z_Construct_UClass_UTestPluginBPLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TestPlugin();
	TESTPLUGIN_API UFunction* Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL();
// End Cross Module References
	void UTestPluginBPLibrary::StaticRegisterNativesUTestPluginBPLibrary()
	{
		UClass* Class = UTestPluginBPLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlusInt_DLL", &UTestPluginBPLibrary::execPlusInt_DLL },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL_Statics
	{
		struct TestPluginBPLibrary_eventPlusInt_DLL_Parms
		{
			int32 X;
			int32 Y;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Y;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_X;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestPluginBPLibrary_eventPlusInt_DLL_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestPluginBPLibrary_eventPlusInt_DLL_Parms, Y), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TestPluginBPLibrary_eventPlusInt_DLL_Parms, X), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL_Statics::NewProp_X,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL_Statics::Function_MetaDataParams[] = {
		{ "Category", "TestPlugin" },
		{ "ModuleRelativePath", "Public/TestPluginBPLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTestPluginBPLibrary, nullptr, "PlusInt_DLL", sizeof(TestPluginBPLibrary_eventPlusInt_DLL_Parms), Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTestPluginBPLibrary_NoRegister()
	{
		return UTestPluginBPLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UTestPluginBPLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTestPluginBPLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TestPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTestPluginBPLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTestPluginBPLibrary_PlusInt_DLL, "PlusInt_DLL" }, // 3576475531
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTestPluginBPLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TestPluginBPLibrary.h" },
		{ "ModuleRelativePath", "Public/TestPluginBPLibrary.h" },
		{ "ToolTip", "*      Function library class.\n*      Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.\n*\n*      When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.\n*      BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.\n*      BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.\n*      DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.\n*                              Its lets you name the node using characters not allowed in C++ function names.\n*      CompactNodeTitle - the word(s) that appear on the node.\n*      Keywords -      the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu.\n*                              Good example is \"Print String\" node which you can find also by using keyword \"log\".\n*      Category -      the category your node will be under in the Blueprint drop-down menu.\n*\n*      For more info on custom blueprint nodes visit documentation:\n*      https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTestPluginBPLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestPluginBPLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTestPluginBPLibrary_Statics::ClassParams = {
		&UTestPluginBPLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTestPluginBPLibrary_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UTestPluginBPLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTestPluginBPLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTestPluginBPLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTestPluginBPLibrary, 1186276148);
	template<> TESTPLUGIN_API UClass* StaticClass<UTestPluginBPLibrary>()
	{
		return UTestPluginBPLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTestPluginBPLibrary(Z_Construct_UClass_UTestPluginBPLibrary, &UTestPluginBPLibrary::StaticClass, TEXT("/Script/TestPlugin"), TEXT("UTestPluginBPLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTestPluginBPLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
