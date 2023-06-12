// Fill out your copyright notice in the Description page of Project Settings.

#include "DuckEditorModule.h"
#include "PersonalDataFactory.h"
#include "PersonalData.h"

UPersonalDataFactory::UPersonalDataFactory()
{
	bCreateNew = true;
	bEditAfterNew = true;
	SupportedClass = UPersonalData::StaticClass();
}

UObject* UPersonalDataFactory::FactoryCreateNew(UClass* Class, UObject* InParent, FName Name, EObjectFlags Flags,
                                                UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UPersonalData>(InParent, Class, Name, Flags);
}
