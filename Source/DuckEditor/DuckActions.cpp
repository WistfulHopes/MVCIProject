// Fill out your copyright notice in the Description page of Project Settings.

#include "DuckEditorModule.h"
#include "DuckActions.h"
#include "CharacterAsset.h"
#include "PersonalData.h"

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
	return LOCTEXT("FCharacterAssetTypeName", "Character Asset");
}

FColor FCharacterAssetTypeActions::GetTypeColor() const
{
	return MainColor;
}

uint32 FCharacterAssetTypeActions::GetCategories()
{
	return EAssetTypeCategories::Basic | MyAssetCategory;
}

// PersonalData

FPersonalDataTypeActions::FPersonalDataTypeActions(EAssetTypeCategories::Type InAssetCategory)
{
	MyAssetCategory = InAssetCategory;
}

bool FPersonalDataTypeActions::CanFilter()
{
	return true;
}

UClass* FPersonalDataTypeActions::GetSupportedClass() const
{
	return UPersonalData::StaticClass();
}

FText FPersonalDataTypeActions::GetName() const
{
	return LOCTEXT("FPersonalDataTypeName", "Personal Data");
}

FColor FPersonalDataTypeActions::GetTypeColor() const
{
	return MainColor;
}

uint32 FPersonalDataTypeActions::GetCategories()
{
	return EAssetTypeCategories::Basic | MyAssetCategory;
}

#undef LOCTEXT_NAMESPACE
