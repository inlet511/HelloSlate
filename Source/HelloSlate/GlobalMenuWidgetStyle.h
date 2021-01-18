// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Styling/SlateWidgetStyle.h"
#include "Styling/SlateWidgetStyleContainerBase.h"
#include "GlobalMenuWidgetStyle.generated.h"

/**
 * 
 */
USTRUCT()
struct HELLOSLATE_API FGlobalMenuStyle : public FSlateWidgetStyle
{
	GENERATED_USTRUCT_BODY()

	FGlobalMenuStyle();
	virtual ~FGlobalMenuStyle();

	// FSlateWidgetStyle
	virtual void GetResources(TArray<const FSlateBrush*>& OutBrushes) const override;
	static const FName TypeName;
	virtual const FName GetTypeName() const override;
	static const FGlobalMenuStyle& GetDefault();

	UPROPERTY(EditAnywhere, Category= Appearance)
	FButtonStyle MenuButtonStyle;

	UPROPERTY(EditAnywhere, Category= Appearance)
	FTextBlockStyle MenuButtonTextStyle;

	UPROPERTY(EditAnywhere, Category= Appearance)
	FTextBlockStyle MenuTitleStyle;

};

/**
 */
UCLASS(hidecategories=Object, MinimalAPI)
class UGlobalMenuWidgetStyle : public USlateWidgetStyleContainerBase
{
	GENERATED_BODY()

public:
	/** The actual data describing the widget appearance. */
	UPROPERTY(Category=Appearance, EditAnywhere, meta=(ShowOnlyInnerProperties))
	FGlobalMenuStyle WidgetStyle;

	virtual const struct FSlateWidgetStyle* const GetStyle() const override
	{
		return static_cast< const struct FSlateWidgetStyle* >( &WidgetStyle );
	}
};
