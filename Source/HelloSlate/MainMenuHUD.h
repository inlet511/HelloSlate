// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MainMenuHUD.generated.h"

/**
 * 
 */
UCLASS()
class HELLOSLATE_API AMainMenuHUD : public AHUD
{
	GENERATED_BODY()

	virtual void PostInitializeComponents() override;

	TSharedPtr<class SMainMenuUI> MainMenuUI;

public:
	UFUNCTION(BlueprintImplementableEvent, Category="Menus|Main Menu")
	void PlayGameClicked();

	UFUNCTION(BlueprintImplementableEvent, Category="Menus|Main Menu")
	void QuitGameClicked();
};
