#pragma once
#include "DuckModule.h"
#include "SoundModeCtrlBase.h"
#include "SoundModeCtrl_Story.generated.h"

class USoundAtomCueSheet;
class USoundPlayerStream;

UCLASS(Blueprintable)
class DUCK_API USoundModeCtrl_Story : public USoundModeCtrlBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundPlayerStream* mpSoundPlayerBGM;
    
public:
    USoundModeCtrl_Story();
    UFUNCTION(BlueprintCallable)
    void StopBGM(int32 SheetId, int32 FadeOutTime);
    
    UFUNCTION(BlueprintCallable)
    int32 PrepareBGM(int32 SheetId, int32 CueID, int32 FadeInTime, bool bAutoPlay, int32 StartTime);
    
    UFUNCTION(BlueprintCallable)
    bool PlayMovieBGM();
    
    UFUNCTION(BlueprintCallable)
    bool PlayBGM(int32 DataId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPrepareMovieBGMEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTime();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSyncTime(int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckAlreadyPlaying(USoundAtomCueSheet* pCueSheet, int32 CueID) const;
    
};

