// Fill out your copyright notice in the Description page of Project Settings.

#include "DuckEditorModule.h"
#include "CharacterAssetFactory.h"
#include "CharacterAsset.h"

UCharacterAssetFactory::UCharacterAssetFactory() {
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UCharacterAsset::StaticClass();
}

UObject* UCharacterAssetFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UCharacterAsset>(InParent, Class, Name, Flags);
}


