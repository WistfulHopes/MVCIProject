#pragma once
#include "DuckModule.h"
#include "SoundModeCtrlBase.h"
#include "SoundModeCtrl_Lobby.generated.h"

UCLASS(Blueprintable)
class DUCK_API USoundModeCtrl_Lobby : public USoundModeCtrlBase {
    GENERATED_BODY()
public:
    USoundModeCtrl_Lobby();
    UFUNCTION(BlueprintCallable)
    void StopBGM();
    
    UFUNCTION(BlueprintCallable)
    void PlayBGM();
    
};

