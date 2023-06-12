#pragma once
#include "DuckModule.h"
#include "CollectionVoiceTableCSV.h"
#include "ECollectSoundRetType.h"
#include "SoundModeCtrlBase.h"
#include "SoundModeCtrl_Collection.generated.h"

class UDataTable;
class USoundAtomCueSheet;

UCLASS(Blueprintable)
class DUCK_API USoundModeCtrl_Collection : public USoundModeCtrlBase {
    GENERATED_BODY()
public:
    USoundModeCtrl_Collection();
    UFUNCTION(BlueprintCallable)
    void StopVoice();
    
    UFUNCTION(BlueprintCallable)
    void StopBGM02();
    
    UFUNCTION(BlueprintCallable)
    void StopBGM();
    
    UFUNCTION(BlueprintCallable)
    bool SetCueSheetVoice(USoundAtomCueSheet* _CueSheetOrigin, USoundAtomCueSheet* _CueSheetAdd);
    
    UFUNCTION(BlueprintCallable)
    int32 SetCueSheetBGM_EX(USoundAtomCueSheet* _CueSheet);
    
    UFUNCTION(BlueprintCallable)
    bool SetCueSheetBGM(USoundAtomCueSheet* _CueSheet, int32 _SheetId, int32 _PlayerNo);
    
    UFUNCTION(BlueprintCallable)
    void ResumeBGM();
    
    UFUNCTION(BlueprintCallable)
    int32 PlayVoice(int32 _CueID, int32 _SelectorID);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayBGM02(int32 _SheetId, int32 _CueID, bool _IsAutoPlay, int32 _StartTime);
    
    UFUNCTION(BlueprintCallable)
    int32 PlayBGM(int32 _SheetId, int32 _CueID, bool _IsAutoPlay, int32 _StartTime);
    
    UFUNCTION(BlueprintCallable)
    void PauseBGM();
    
    UFUNCTION(BlueprintCallable)
    static ECollectSoundRetType IsValidVoiceByIdx(USoundAtomCueSheet* _CueSheet, int32 _Index, bool OpenCheck);
    
    UFUNCTION(BlueprintCallable)
    static ECollectSoundRetType IsValidVoice(USoundAtomCueSheet* _CueSheet, int32 _CueID, bool OpenCheck);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidCueIDByIdx(USoundAtomCueSheet* _CueSheet, int32 _Index);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidCueID(USoundAtomCueSheet* _CueSheet, int32 _CueID);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayVoice();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPlayBGM();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBGMEnd();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCueNum(USoundAtomCueSheet* _CueSheet);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetCueIDByIdx(USoundAtomCueSheet* _CueSheet, int32 _Index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool GetCollectionVoiceTableData(UDataTable* _Table, int32 _Index, FCollectionVoiceTableCSV& OutRow);
    
    UFUNCTION(BlueprintCallable)
    void AttachBGMFader(int32 FadeInTimeMS, int32 FadeOutTimeMS);
    
};

