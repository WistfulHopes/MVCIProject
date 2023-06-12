// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Developer/AssetTools/Public/AssetTypeActions_Base.h"

// CharacterAsset

class FCharacterAssetTypeActions : public FAssetTypeActions_Base
{
	
public:

	FCharacterAssetTypeActions(EAssetTypeCategories::Type InAssetCategory);

	virtual bool CanFilter() override;
	UClass* GetSupportedClass() const override;
	virtual FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;

private:
	
	EAssetTypeCategories::Type MyAssetCategory;
};

// PersonalData

class FPersonalDataTypeActions : public FAssetTypeActions_Base
{
	
public:

	FPersonalDataTypeActions(EAssetTypeCategories::Type InAssetCategory);

	virtual bool CanFilter() override;
	UClass* GetSupportedClass() const override;
	virtual FText GetName() const override;
	FColor GetTypeColor() const override;
	uint32 GetCategories() override;

private:
	
	EAssetTypeCategories::Type MyAssetCategory;
};