#pragma once
#include "DuckModule.h"
#include "SoundModeCtrlBase.h"
#include "SoundModeCtrl_ComingSoon.generated.h"

UCLASS(Blueprintable)
class DUCK_API USoundModeCtrl_ComingSoon : public USoundModeCtrlBase {
    GENERATED_BODY()
public:
    USoundModeCtrl_ComingSoon();
    UFUNCTION(BlueprintCallable)
    void StopBGM();
    
    UFUNCTION(BlueprintCallable)
    void PlayBGM();
    
};

