#pragma once
#include "DuckModule.h"
#include "DuckBaseSystem.h"
#include "NotifyEffectEditorManager.generated.h"

class UNotifyEffectEditorManager;
class UParticleSystemComponent;
class USceneComponent;
class USoundAtomCue;

UCLASS(Blueprintable)
class DUCK_API UNotifyEffectEditorManager : public UDuckBaseSystem {
    GENERATED_BODY()
public:
    UNotifyEffectEditorManager();
    UFUNCTION(BlueprintCallable)
    void UpdateEffect();
    
    UFUNCTION(BlueprintCallable)
    void StopAllCue();
    
    UFUNCTION(BlueprintCallable)
    void PlayCue(FName Message, USoundAtomCue* pCue);
    
    UFUNCTION(BlueprintCallable)
    void KillEffect(bool AllEffectKill, FName Message, int32 KillType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UNotifyEffectEditorManager* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    void CreateEffect(USceneComponent* pTargetScene, FName Message, UParticleSystemComponent* pPSComponent, bool FromStart, int32 OldEffectKillType);
    
    UFUNCTION(BlueprintCallable)
    void ClearEmitter(int32 KillType, const FString& Message);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllEmitter(int32 KillType);
    
    UFUNCTION(BlueprintCallable)
    bool CheckMessage(FName Message);
    
};

