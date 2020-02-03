// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#include "TestPluginBPLibrary.h"
#include "TestPlugin.h"

UTestPluginBPLibrary::UTestPluginBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

int UTestPluginBPLibrary::PlusInt_DLL(int X, int Y)
{
	FTestPluginModule& TestPluginModule = FModuleManager::LoadModuleChecked<FTestPluginModule>(FName("TestPlugin"));
	return TestPluginModule.ExecPlusInt(X, Y);
}

