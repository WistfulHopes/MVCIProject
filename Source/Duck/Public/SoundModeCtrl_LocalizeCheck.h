#pragma once
#include "DuckModule.h"
#include "SoundModeCtrlBase.h"
#include "SoundModeCtrl_LocalizeCheck.generated.h"

UCLASS(Blueprintable)
class DUCK_API USoundModeCtrl_LocalizeCheck : public USoundModeCtrlBase {
    GENERATED_BODY()
public:
    USoundModeCtrl_LocalizeCheck();
    UFUNCTION(BlueprintCallable)
    void StopSound();
    
    UFUNCTION(BlueprintCallable)
    bool SetupCharaSound(int32 PlType);
    
    UFUNCTION(BlueprintCallable)
    void PlaySound(int32 SheetId, int32 CueID);
    
};

