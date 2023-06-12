// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "Factories/Factory.h"
#include "PersonalDataFactory.generated.h"

/**
 * 
 */
UCLASS()
class DUCKEDITOR_API UPersonalDataFactory : public UFactory
{
	GENERATED_BODY()

	UPersonalDataFactory();
	
	virtual UObject* FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn) override;
	// End UFactory Interface
};
