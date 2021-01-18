// Fill out your copyright notice in the Description page of Project Settings.


#include "HelloSlateGameMode.h"
#include "MainMenuHUD.h"

AHelloSlateGameMode::AHelloSlateGameMode()
{
	HUDClass = AMainMenuHUD::StaticClass();
}
