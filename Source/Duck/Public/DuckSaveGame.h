#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SaveGame -FallbackName=SaveGame
//CROSS-MODULE INCLUDE V2: -ModuleName=InputCore -ObjectName=Key -FallbackName=Key
#include "CollectionArtwarkNew.h"
#include "CollectionRewards.h"
#include "CollectionStageNew.h"
#include "EDataType.h"
#include "EHudType.h"
#include "ELanguage.h"
#include "ESaveLoadBranch.h"
#include "EVolumeType.h"
#include "History.h"
#include "KeyConfig.h"
#include "MissionSaveData.h"
#include "OperationSetting.h"
#include "ProfileBattleRecord.h"
#include "ProfileCardData.h"
#include "ReplayBytes.h"
#include "TEAM_SETTING.h"
#include "TrainingData.h"
#include "DuckSaveGame.generated.h"

class UDuckReplayData;
class UDuckSaveGame;
class UDuckUserData;
class UUserWidget;

UCLASS(Blueprintable)
class DUCK_API UDuckSaveGame : public USaveGame {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnExecutorEnd, bool, IsSuccess);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDuckUserData* UserData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDuckReplayData* ReplayData;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnExecutorEnd OnExecutorEnd;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* mpSaveLoadExecutor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLoadOtherVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USaveGame* KPIData;
    
public:
    UDuckSaveGame();
    UFUNCTION(BlueprintCallable)
    void UpdateProfileTimeStamp();
    
    UFUNCTION(BlueprintCallable)
    void SuspendSystem();
    
    UFUNCTION(BlueprintCallable)
    void SetTrainingData(FTrainingData Data);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamSetting(FTEAM_SETTING InSetting, int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetSystemSetting(bool battleTitle, bool storyTitle, bool ctrlSelect, bool replayUpload, bool replaySave, bool statUpload);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryPlayIndex(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryAllClear();
    
    UFUNCTION(BlueprintCallable)
    void SetSoundVolumeRate(EVolumeType Type, float rate);
    
    UFUNCTION(BlueprintCallable)
    bool SetReplayData(TArray<uint8> Data);
    
    UFUNCTION(BlueprintCallable)
    bool SetReplayBytes(TArray<FReplayBytes> _NewData);
    
    UFUNCTION(BlueprintCallable)
    void SetProfileCardData(FProfileCardData Data);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerKeyConfigData(int32 pl, FKeyConfig Data);
    
    UFUNCTION(BlueprintCallable)
    void SetOperationModeSetting(int32 pl, bool autoCombo, bool easyHC, bool autoSJ, bool poseOpen);
    
    UFUNCTION(BlueprintCallable)
    void SetOldDefaultLanguageData(const FString& Data);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionData(int32 dummy, FMissionSaveData Data);
    
    UFUNCTION(BlueprintCallable)
    void SetLatestSaveDataVersion();
    
    UFUNCTION(BlueprintCallable)
    void SetLanguageData_Name(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetLanguageData(ELanguage Data);
    
    UFUNCTION(BlueprintCallable)
    void SetKeyboardConfigData(TArray<FKey> Data);
    
    UFUNCTION(BlueprintCallable)
    void SetIsVoiceChatUIVisible(bool IsVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSteamStarted(bool started);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStatAutoUploadConfirm(bool FlgOn);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStatAutoUpload(bool FlgOn);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBattleCommentary(bool comment);
    
    UFUNCTION(BlueprintCallable)
    void SetIsBattleChatOnlyRoom(bool IsOnlyRoom);
    
    UFUNCTION(BlueprintCallable)
    void SetHudHeight(TArray<float> Height);
    
    UFUNCTION(BlueprintCallable)
    void SetHonorID(int32 _In);
    
    UFUNCTION(BlueprintCallable)
    void SetHistory(TArray<FHistory>& _InHistory);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableSave();
    
    UFUNCTION(BlueprintCallable)
    void SetDisplaySetting_Custom(int32 scaling, int32 antiAlias, int32 postProcces, int32 shadow, int32 Texture, int32 effect);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplaySetting_Basic(TArray<int32> resolution, bool fullScreen, int32 quality);
    
    UFUNCTION(BlueprintCallable)
    void SetDisableSave();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultTrainingData_Gauge();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultTrainingData_Dummy();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultTrainingData_Basic();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultTrainingData();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultSystemSetting();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultStoryData();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultSoundSetting();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultOperationModeSetting(int32 pl);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultMissionData();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultLanguageData();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultKeyConfig(int32 pl);
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultKeyboardConfigData_All();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultHudHeight();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultDisplaySetting_Custom();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultDisplaySetting_Basic();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultDisplaySetting_ALL();
    
    UFUNCTION(BlueprintCallable)
    void SetDefaultArcadeClearData();
    
    UFUNCTION(BlueprintCallable)
    void SetArcadePlayData(int32 dummy, int32 charaID);
    
    UFUNCTION(BlueprintCallable)
    void SetArcadeClearData(int32 dummy, int32 charaID, bool isClear);
    
    UFUNCTION(BlueprintCallable)
    void ResumeSystem();
    
    UFUNCTION(BlueprintCallable)
    void ResetStoryPlayIndex();
    
    UFUNCTION(BlueprintCallable)
    void ResetArcadePlayData(int32 dummy, int32 charaID);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveVoiceNew(int32 _Item);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveReplayData(int32 _ReplayIndex);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveMovieNew(int32 _Item);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveDatabaseItemNew(FCollectionStageNew _Item);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveDatabaseCharaNew(int32 _Item);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveBGMNew(int32 _Item);
    
    UFUNCTION(BlueprintCallable)
    bool RemoveArtwarkNew(FCollectionArtwarkNew _Item);
    
    UFUNCTION(BlueprintCallable)
    void PushHistory(int32 dummy, FHistory _InHistory);
    
    UFUNCTION(BlueprintCallable)
    void IsValidTeamSetting();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidPrimaryUserForSave();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStoryNewGameOnly();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStoryAllClear();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool isSaveProgress();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadOtherVersion();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArcadeClear(bool IsDefOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArcadeAllClear(bool IsDefOnly);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArcadeAllCharaPlay(int32 dummy, bool IsDefOnly);
    
    UFUNCTION(BlueprintCallable)
    void InitSystemData();
    
    UFUNCTION(BlueprintCallable)
    void InitReplayData();
    
    UFUNCTION(BlueprintCallable)
    void InitKPIData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveNewIcon_VoiceTop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveNewIcon_DBTop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HaveNewIcon_BGMTop();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FTrainingData GetTrainingData(int32 dummy);
    
    UFUNCTION(BlueprintCallable)
    FTEAM_SETTING GetTeamSetting(int32 Num);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSystemEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStoryPlayIndex();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStoryLowerCPUDifCnt();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetStoryClearIndex();
    
    UFUNCTION(BlueprintCallable)
    float GetSoundVolumeRate(int32 dummy, EVolumeType Type);
    
    UFUNCTION(BlueprintCallable)
    bool GetResult();
    
    UFUNCTION(BlueprintCallable)
    UDuckReplayData* GetReplayData(int32 index);
    
    UFUNCTION(BlueprintCallable)
    TArray<FReplayBytes> GetReplayBytes();
    
    UFUNCTION(BlueprintCallable)
    FDateTime GetProfileTimeStamp();
    
    UFUNCTION(BlueprintCallable)
    FProfileCardData GetProfileCardData(int32 dummy);
    
    UFUNCTION(BlueprintCallable)
    FProfileBattleRecord GetProfileCardBattleRecord();
    
    UFUNCTION(BlueprintCallable)
    FString GetPlayerName();
    
    UFUNCTION(BlueprintCallable)
    FKeyConfig GetPlayerKeyConfigData(int32 pl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FOperationSetting GetOperationSetting(int32 pl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetOldDefaultLanguageData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMissionSaveData GetMissionData(int32 dummy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELanguage GetLanguageData();
    
    UFUNCTION(BlueprintCallable)
    USaveGame* GetKPIData();
    
    UFUNCTION(BlueprintCallable)
    TArray<FKey> GetKeyboardConfigData();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsVoiceChatUIVisible();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsStorySubTitleVisible();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetIsSteamStarted();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsStatAutoUploadConfirm();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsStatAutoUpload();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsReplayAutoUpload();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsReplayAutoSave();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsImmediatelyPoseOpen(int32 pl);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsEasyHC(int32 pl);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsControllerSelect();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsBattleSubTitleVisible();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsBattleCommentary(int32 dummy);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsBattleChatOnlyRoom();
    
    UFUNCTION(BlueprintCallable)
    bool GetIsAutoSJ(int32 pl);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsAutoCombo(int32 pl);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UDuckSaveGame* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    float GetHudHeight(EHudType Type);
    
    UFUNCTION(BlueprintCallable)
    int32 GetHonorID(int32 dummy);
    
    UFUNCTION(BlueprintCallable)
    TArray<FHistory> GetHistory(int32 dummy);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDisplaySetting_Custom(int32& scaling, int32& antiAlias, int32& postProcces, int32& shadow, int32& Texture, int32& effect);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetDisplaySetting_Basic(TArray<int32>& resolution, bool& fullScreen, int32& quality);
    
    UFUNCTION(BlueprintCallable)
    FCollectionRewards GetCollectionRewards();
    
    UFUNCTION(BlueprintCallable)
    bool GetArcadePlayData(int32 charaID);
    
    UFUNCTION(BlueprintCallable)
    bool GetArcadeClearData(int32 dummy, int32 charaID);
    
    UFUNCTION(BlueprintCallable)
    void ExecutorEnd(bool IsSuccess);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteSaveWithRetryOption(EDataType Data, bool IsRetryCheck);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteSave(EDataType Data);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteLoadWithRetryOption(EDataType Data, bool IsRetryCheck);
    
    UFUNCTION(BlueprintCallable)
    void ExecuteLoad(EDataType Data);
    
    UFUNCTION(BlueprintCallable)
    void CheckVoiceChatSetting(bool IsVisible, bool IsOnlyRoom, bool& IsChange);
    
    UFUNCTION(BlueprintCallable)
    void CheckTeamSetting(TArray<FTEAM_SETTING> InSettingArray, bool& IsChange);
    
    UFUNCTION(BlueprintCallable)
    void CheckSystemSetting(bool battleTitle, bool storyTitle, bool ctrlSelect, bool replayUpload, bool replaySave, bool statUpload, bool& IsChange);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSystemDataExist(const int32& padNo);
    
    UFUNCTION(BlueprintCallable)
    void CheckSoundSetting(bool commentary, float bgm, float se, float Voice, float speaker, float story, bool& IsChange);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CheckSaveDataVersion();
    
    UFUNCTION(BlueprintCallable)
    void CheckOperationModeSetting(int32 pl, bool autoCombo, bool easyHC, bool autoSJ, bool poseOpen, bool& IsChange);
    
    UFUNCTION(BlueprintCallable)
    void CheckKeyConfigData(int32 pl, FKeyConfig Data, bool& IsChange);
    
    UFUNCTION(BlueprintCallable)
    void CheckKeyboardConfigData(TArray<FKey> Data, bool& IsChange);
    
    UFUNCTION(BlueprintCallable)
    void CheckHudHeight(TArray<float> Height, bool& IsChange);
    
    UFUNCTION(BlueprintCallable)
    void CheckDisplaySetting_Custom(int32 scaling, int32 antiAlias, int32 postProcces, int32 shadow, int32 Texture, int32 effect, bool& IsChange);
    
    UFUNCTION(BlueprintCallable)
    void CheckDisplaySetting_Basic(TArray<int32> resolution, bool fullScreen, int32 quality, bool& IsChange);
    
    UFUNCTION(BlueprintCallable)
    void CheckDisplaySetting_All(TArray<int32> resolution, bool fullScreen, int32 quality, int32 scaling, int32 antiAlias, int32 postProcces, int32 shadow, int32 Texture, int32 effect, bool& IsChange);
    
    UFUNCTION(BlueprintCallable)
    int32 BPSystemSave();
    
    UFUNCTION(BlueprintCallable)
    int32 BPSystemLoad();
    
    UFUNCTION(BlueprintCallable)
    void BPSaveLoadResult(const int32& preResult, ESaveLoadBranch& Branches);
    
    UFUNCTION(BlueprintCallable)
    int32 BPReplaySave();
    
    UFUNCTION(BlueprintCallable)
    int32 BPReplayLoad();
    
    UFUNCTION(BlueprintCallable)
    int32 BPKPISave();
    
    UFUNCTION(BlueprintCallable)
    int32 BPKPILoad();
    
    UFUNCTION(BlueprintCallable)
    void AddStoryLowerCPUDifCnt();
    
};

