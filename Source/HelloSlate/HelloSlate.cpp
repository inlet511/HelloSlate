// Copyright Epic Games, Inc. All Rights Reserved.

#include "HelloSlate.h"
#include "Modules/ModuleManager.h"
#include "Styling/SlateStyleRegistry.h"
#include "MenuStyles.h"

class FHelloSlateGameModule :public FDefaultGameModuleImpl
{
	virtual void StartupModule() override
	{
		FSlateStyleRegistry::UnRegisterSlateStyle(FMenuStyles::GetStyleSetName());
		FMenuStyles::Initialize();
	}

	virtual void ShutdownModule() override
	{
		FMenuStyles::Shutdown();
	}
};


IMPLEMENT_PRIMARY_GAME_MODULE(FHelloSlateGameModule, HelloSlate, "HelloSlate" );
