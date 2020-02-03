// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TestPlugin.h"
#include "Misc/Paths.h"

#define LOCTEXT_NAMESPACE "FTestPluginModule"

void FTestPluginModule::StartupModule()
{
	//dllファイルのパスを取得
	FString DllPath = FPaths::ConvertRelativePathToFull(FPaths::Combine(FPaths::ProjectPluginsDir(), TEXT("TestPlugin"), TEXT("ThirdParty")));
#ifdef _WIN64
	DllPath = FPaths::Combine(DllPath, TEXT("Win64"));
#elif _WIN32
	DllPath = FPaths::Combine(DllPath, TEXT("Win32"));
#endif
	DllPath = FPaths::Combine(DllPath, TEXT("DllTest.dll"));

	//モジュールをロード
	ModulePtr = FPlatformProcess::GetDllHandle(*DllPath);
	if (ModulePtr == nullptr)
	{
		UE_LOG(LogTemp, Fatal, TEXT("Failed to load module"));
	}

	//関数ポインタを取得
	PlusIntPtr = (PlusInt)FPlatformProcess::GetDllExport(ModulePtr, TEXT("PlusInt"));
	if (PlusIntPtr == nullptr)
	{
		UE_LOG(LogTemp, Fatal, TEXT("Failed to get function pointer"));
	}

	UE_LOG(LogTemp, Log, TEXT("Dll loaded"));
}

void FTestPluginModule::ShutdownModule()
{
	FPlatformProcess::FreeDllHandle(ModulePtr);
	UE_LOG(LogTemp, Log, TEXT("Dll unloaded"));
}

int FTestPluginModule::ExecPlusInt(int X, int Y)
{
	return PlusIntPtr(X, Y);
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FTestPluginModule, TestPlugin)