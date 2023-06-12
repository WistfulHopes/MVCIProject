#pragma once
#include "Engine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AtomCategory.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UAtomCategory : public UObject {
    GENERATED_BODY()
public:
    UAtomCategory();
    UFUNCTION(BlueprintCallable)
    static void SetVolumeByName(const FString& CategoryName, float Volume);
    
    UFUNCTION(BlueprintCallable)
    static void PauseByName(const FString& CategoryName, bool bPause);
    
};

