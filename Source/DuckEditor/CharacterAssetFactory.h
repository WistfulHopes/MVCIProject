// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Factories/Factory.h"
#include "CharacterAssetFactory.generated.h"

/**
 * 
 */
UCLASS()
class UCharacterAssetFactory : public UFactory
{
	GENERATED_BODY()
	
public:
	UCharacterAssetFactory();

	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End UFactory Interface
};
