// Fill out your copyright notice in the Description page of Project Settings.

#include "DuckEditorModule.h"
#include "DuckActions.h"
#include "CharacterAsset.h"

#define LOCTEXT_NAMESPACE "DuckAssetTypeActions"

FColor MainColor = FColor(129, 196, 115);

// CharacterAsset

FCharacterAssetTypeActions::FCharacterAssetTypeActions(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

bool FCharacterAssetTypeActions::CanFilter()
{
	return true;
}

UClass* FCharacterAssetTypeActions::GetSupportedClass() const
{
	return UCharacterAsset::StaticClass();
}

FText FCharacterAssetTypeActions::GetName() const
{
	return LOCTEXT("FCharacterAssetTypeName", "Character Item");
}

FColor FCharacterAssetTypeActions::GetTypeColor() const
{
	return MainColor;
}

uint32 FCharacterAssetTypeActions::GetCategories()
{
	return EAssetTypeCategories::Basic | MyAssetCategory;
}

#undef LOCTEXT_NAMESPACE
