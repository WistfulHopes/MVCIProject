#pragma once
#include "DuckModule.h"
#include "ECharaSelectSoundType.h"
#include "SoundModeCtrlBase.h"
#include "SoundModeCtrl_CharaSelect.generated.h"

UCLASS(Blueprintable)
class DUCK_API USoundModeCtrl_CharaSelect : public USoundModeCtrlBase {
    GENERATED_BODY()
public:
    USoundModeCtrl_CharaSelect();
    UFUNCTION(BlueprintCallable)
    void StopBGM();
    
    UFUNCTION(BlueprintCallable)
    void PlayVoice(int32 teamNo, int32 CueID);
    
    UFUNCTION(BlueprintCallable)
    void PlayNA(int32 teamNo, int32 CueID);
    
    UFUNCTION(BlueprintCallable)
    void PlayBGM(ECharaSelectSoundType Type);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetVoiceCueIdCharaDecided(int32 DecideCharaId, int32 PartnerCharaID) const;
    
};

