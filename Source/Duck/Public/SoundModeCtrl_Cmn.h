#pragma once
#include "DuckModule.h"
#include "SoundModeCtrlBase.h"
#include "SoundModeCtrl_Cmn.generated.h"

UCLASS(Blueprintable)
class DUCK_API USoundModeCtrl_Cmn : public USoundModeCtrlBase {
    GENERATED_BODY()
public:
    USoundModeCtrl_Cmn();
    UFUNCTION(BlueprintCallable)
    int32 PlaySys(int32 SheetId, int32 CueID);
    
};

