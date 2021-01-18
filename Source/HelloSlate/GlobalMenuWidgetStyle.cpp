// Fill out your copyright notice in the Description page of Project Settings.


#include "GlobalMenuWidgetStyle.h"

FGlobalMenuStyle::FGlobalMenuStyle()
{
}

FGlobalMenuStyle::~FGlobalMenuStyle()
{
}

const FName FGlobalMenuStyle::TypeName(TEXT("FGlobalMenuStyle"));

const FName FGlobalMenuStyle::GetTypeName() const
{
	//static const FName InTypeName = TEXT("FGlobalStyle");
	return TypeName;
}

const FGlobalMenuStyle& FGlobalMenuStyle::GetDefault()
{
	static FGlobalMenuStyle Default;
	return Default;
}

void FGlobalMenuStyle::GetResources(TArray<const FSlateBrush*>& OutBrushes) const
{
	// Add any brush resources here so that Slate can correctly atlas and reference them
}

