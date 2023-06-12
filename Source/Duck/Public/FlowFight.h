#pragma once
#include "DuckModule.h"
#include "EAnnounceID.h"
#include "EGemKind.h"
#include "ENoticeOpponent.h"
#include "ENoticeSelf.h"
#include "FlowBase.h"
#include "HUDPartnerHistory.h"
#include "HUDRootHistory.h"
#include "HUDTeamHistory.h"
#include "FlowFight.generated.h"

class ALevelSequenceActor;
class APostProcessVolume;

UCLASS(Blueprintable)
class DUCK_API AFlowFight : public AFlowBase {
    GENERATED_BODY()
public:
    AFlowFight();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WinActionEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void WinActionBP(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StoryPreBattleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StoryPostBattleStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool SetStoryBattleFinish();
    
    UFUNCTION(BlueprintCallable)
    void SetRuntimeObjVisibility(ALevelSequenceActor* pLvSeqActor, bool FlgOn);
    
    UFUNCTION(BlueprintCallable)
    void SetResultEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPauseEnable(bool FlgEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetDuckCustomDepth(APostProcessVolume* pPostProcess, bool FlgOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetBossFinish();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAnnounce(EAnnounceID ID);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectApperMessageBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SaveStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RollbackHUDHistoryBP(const FHUDRootHistory& History);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResultDispStartBP();
    
    UFUNCTION(BlueprintCallable)
    void ResetBattleMediator();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReqSpawnPause(int32 padNo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReqSpawnLoseEndMenu();
    
    UFUNCTION(BlueprintCallable)
    void PrepareSaveServer();
    
    UFUNCTION(BlueprintCallable)
    void PrepareSaveLocal();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FHUDTeamHistory PostUpdateHUDHistory_Team(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    FHUDPartnerHistory PostUpdateHUDHistory_Partner(int32 teamNo, int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPostGarbageCollectBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsStoryPreBattleEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsStoryPostBattleEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsResultCaptureEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsMissionLoadEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool IsLoseEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InformAccountPickerEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HiddenGem(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void GameBodyLoadEndBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ChangeVisibleByAnotherWorld(bool VisibleOn);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallNoticeSelf(int32 teamNo, ENoticeSelf Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallNoticeOpponentBP(int32 teamNo, ENoticeOpponent Type);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CallGemText(EGemKind Kind, int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BattleInitBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApperActionEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ApperActionBP(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void AddGem(EGemKind Kind, int32 teamNo);
    
};

