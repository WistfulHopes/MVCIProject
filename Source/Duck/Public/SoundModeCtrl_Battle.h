#pragma once
#include "DuckModule.h"
#include "SoundModeCtrlBase.h"
#include "SoundModeCtrl_Battle.generated.h"

class USoundAtomCue;
class UStageDataAsset;

UCLASS(Blueprintable)
class DUCK_API USoundModeCtrl_Battle : public USoundModeCtrlBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStageDataAsset* mpStageData;
    
public:
    USoundModeCtrl_Battle();
    UFUNCTION(BlueprintCallable)
    void StopResultBGM();
    
    UFUNCTION(BlueprintCallable)
    void StopJingleIntruder();
    
    UFUNCTION(BlueprintCallable)
    void StopJingleGameOver();
    
    UFUNCTION(BlueprintCallable)
    void StopJingleClear();
    
    UFUNCTION(BlueprintCallable)
    void StopCharaAllSound(int32 PlWorkNo);
    
    UFUNCTION(BlueprintCallable)
    void SetCharaFacialCtrlOn(bool FlgOn);
    
    UFUNCTION(BlueprintCallable)
    void PlayStagePropSE(USoundAtomCue* pCue);
    
    UFUNCTION(BlueprintCallable)
    void PlayStageAmbient(int32 CueID);
    
    UFUNCTION(BlueprintCallable)
    void PlayResultBGM();
    
    UFUNCTION(BlueprintCallable)
    void PlayJingleIntruder();
    
    UFUNCTION(BlueprintCallable)
    void PlayJingleGameOver();
    
    UFUNCTION(BlueprintCallable)
    void PlayJingleClear();
    
    UFUNCTION(BlueprintCallable)
    void PlayCmnSEWithSide(int32 SheetId, int32 CueID, bool IsLeft);
    
    UFUNCTION(BlueprintCallable)
    void PlayCmnSERollbackTarget(int32 SheetId, int32 CueID);
    
    UFUNCTION(BlueprintCallable)
    void PlayCmnSEBP(int32 SheetId, int32 CueID);
    
    UFUNCTION(BlueprintCallable)
    void PlayCharaVoiceBP(int32 CueID, int32 PlWorkNo);
    
    UFUNCTION(BlueprintCallable)
    void PlayCharaOrgSEBP(int32 CueID, int32 PlWorkNo);
    
    UFUNCTION(BlueprintCallable)
    void PauseSound(bool FlgOn);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayingResultBGM() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJingleEndIntruder() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJingleEndGameOver() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsJingleEndClear() const;
    
    UFUNCTION(BlueprintCallable)
    void FadeOutAllSoundByIntruder();
    
};

