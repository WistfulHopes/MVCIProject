#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "EMissionPositionType.h"
#include "MissionUI.h"
#include "MissionBPLib.generated.h"

class URecordDataAsset;

UCLASS(Blueprintable)
class DUCK_API UMissionBPLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UMissionBPLib();
    UFUNCTION(BlueprintCallable)
    static void SetupMission();
    
    UFUNCTION(BlueprintCallable)
    static void SetStageRepeat(bool IsRepeat);
    
    UFUNCTION(BlueprintCallable)
    static void SetRecordAsset(URecordDataAsset* pAsset);
    
    UFUNCTION(BlueprintCallable)
    static void SetMissionStage(int32 Stage);
    
    UFUNCTION(BlueprintCallable)
    static void SetMissionCompleted(bool flag);
    
    UFUNCTION(BlueprintCallable)
    static void ReStart();
    
    UFUNCTION(BlueprintCallable)
    static void MissionStageReset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MissionFlgCheckPure(int32 Value, int32 missionNum);
    
    UFUNCTION(BlueprintCallable)
    static bool MissionFlgCheck(int32 Value, int32 missionNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 MissionFlgAddPure(int32 Value, int32 missionNum);
    
    UFUNCTION(BlueprintCallable)
    static int32 MissionFlgAdd(int32 Value, int32 missionNum);
    
    UFUNCTION(BlueprintCallable)
    static void MissionDefaultParameter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool MissionCompleteCheckPure(int32 Value, int32 CompleteNum);
    
    UFUNCTION(BlueprintCallable)
    static bool MissionCompleteCheck(int32 Value, int32 CompleteNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 MissionClearedNumPure(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static int32 MissionClearedNum(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void MissionClearDipCheck(int32 pl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsTouchDisable(int32 Stage);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsMissionCompleted();
    
    UFUNCTION(BlueprintCallable)
    static bool IsMissionClear();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetTutorialStageTitleID(int32 Stage, int32 CategoryID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMissionUI> GetTutorialStageProgressMulti(int32 Stage, int32 CategoryID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetTutorialStageProgress(int32 Stage, int32 CategoryID);
    
    UFUNCTION(BlueprintCallable)
    static void GetTutorialCharaLooksInfo(int32 Stage, int32 CategoryID, int32 teamNo, int32 PartnerNo, int32& PlType, int32& CostumeNo, int32& ColorNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetTutorialChara(int32 Stage, int32 partner);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMissionStageTitleID(int32 Stage, int32 charaID);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FMissionUI> GetMissionStageProgressMulti(int32 Stage, int32 charaID);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMissionStage();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMissionProgress();
    
    UFUNCTION(BlueprintCallable)
    static EMissionPositionType GetMissionPositionType(int32 Stage, int32 charaID);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMissionCharaNo(int32 Stage, int32 charaID, int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable)
    static void GetMissionCharaLooksInfo(int32 Stage, int32 charaID, int32 teamNo, int32 PartnerNo, int32& PlType, int32& CostumeNo, int32& ColorNo);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMissionChara();
    
};

