// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Widgets/SCompoundWidget.h"
#include "GlobalMenuWidgetStyle.h"

/**
 * 
 */
class HELLOSLATE_API SMainMenuUI : public SCompoundWidget
{
public:
	SLATE_BEGIN_ARGS(SMainMenuUI)
	{}

	SLATE_ARGUMENT(TWeakObjectPtr<class AMainMenuHUD>, MainMenuHD)
	SLATE_END_ARGS()

	/** Constructs this widget with InArgs */
	void Construct(const FArguments& InArgs);

	FReply PlayGameClicked();

	FReply QuitGameClicked();

	TWeakObjectPtr<class AMainMenuHUD> MainMenuHUD;

	const struct FGlobalMenuStyle* MenuStyle;
};
