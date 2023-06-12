#pragma once
#include "DuckModule.h"
#include "SoundModeCtrlBase.h"
#include "SoundModeCtrl_Title.generated.h"

UCLASS(Blueprintable)
class DUCK_API USoundModeCtrl_Title : public USoundModeCtrlBase {
    GENERATED_BODY()
public:
    USoundModeCtrl_Title();
    UFUNCTION(BlueprintCallable)
    void StopBGM();
    
    UFUNCTION(BlueprintCallable)
    int32 PlaySE(int32 SheetId, int32 CueID);
    
};

