#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundPlayerEx.generated.h"

UCLASS(Blueprintable)
class DUCK_API USoundPlayerEx : public UObject {
    GENERATED_BODY()
public:
    USoundPlayerEx();
    UFUNCTION(BlueprintCallable)
    void StopPlayer(bool IsImmediate);
    
    UFUNCTION(BlueprintCallable)
    void Stop(bool IsImmediate);
    
    UFUNCTION(BlueprintCallable)
    void Resume();
    
    UFUNCTION(BlueprintCallable)
    void RegisterBaseSelector(const FString& Selector, const FString& Label);
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
};

