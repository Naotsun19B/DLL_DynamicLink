// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Modules/ModuleManager.h"

typedef int(*PlusInt)(int X, int Y);

class FTestPluginModule : public IModuleInterface
{
private:
	//���[�h����Dll�̃|�C���^
	void* ModulePtr;

	//Dll����擾����֐��̃|�C���^
	PlusInt PlusIntPtr;

public:
	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	int ExecPlusInt(int X, int Y);
};
