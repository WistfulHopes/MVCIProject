#pragma once
#include "DuckModule.h"
#include "EAutoMatch_QoS.h"
#include "ELobby_Rule.h"
#include "ACEnemyData.h"
#include "DuckBaseSystem.h"
#include "EAutoMatchType_UI.h"
#include "EBattleSettingDamage.h"
#include "EBattleSettingDifficulty.h"
#include "ELanguage.h"
#include "EWinTeam.h"
#include "ProfileCardData.h"
#include "ReplayBytes.h"
#include "GameSetting.generated.h"

class AFlowBase;
class UDuckCharaAttrDataAsset;
class UGameSetting;
class UMission;
class UStageDataAsset;

UCLASS(Blueprintable)
class DUCK_API UGameSetting : public UDuckBaseSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UDuckCharaAttrDataAsset*> mArrCharaAttrData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMission*> mpMissionAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMission*> mpTutorialAsset;
    
public:
    UGameSetting();
    UFUNCTION(BlueprintCallable)
    void UpdateCharaBaseData();
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatSetting(bool IsBattleChatOnlyRoom, bool IsVoiceChatUIVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetValidBattleCharaSetting(bool FlgValid);
    
    UFUNCTION(BlueprintCallable)
    void SetupArcadeStageInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetupArcadeInfo();
    
    UFUNCTION(BlueprintCallable)
    void SetupArcadeBattleInfo(int32 CPUTeamNo);
    
    UFUNCTION(BlueprintCallable)
    void SetTmpReplayData(TArray<FReplayBytes> _TmpReplayData);
    
    UFUNCTION(BlueprintCallable)
    void SetTmpProfileCard(FProfileCardData _CardData);
    
    UFUNCTION(BlueprintCallable)
    void SetStoryTrophyCheck(bool _In);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectStageNo(int32 stageNo);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectChara_TeamHandicap(int32 teamNo, int32 Handicap);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectChara_TeamGems(int32 teamNo, int32 GemBits);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectChara_TeamGem(int32 teamNo, int32 GemType);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectChara_TeamCPU(int32 teamNo, bool FlgOn);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectChara_PlModel(int32 teamNo, int32 PartnerNo, int32 PlType, int32 CostumeNo, int32 ColorNo, int32 StyleNo);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectChara_PlAssist(int32 teamNo, int32 PartnerNo, int32 AssistType);
    
    UFUNCTION(BlueprintCallable)
    void SetSelectChara_ColorNo(int32 teamNo, int32 PartnerNo, int32 ColorNo);
    
    UFUNCTION(BlueprintCallable)
    void SetSearchLobbySetting(int32 searchLobbySizeIndex, bool searchLobbyIsSameRegion, bool searchLobbyIsSameStrength, int32 searchLobbyTitleIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetOnlineSelectTimeOut(bool bTimeOut);
    
    UFUNCTION(BlueprintCallable)
    void SetNonGemMode(bool Flg);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionPage(int32 Page);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionNum(int32 Num);
    
    UFUNCTION(BlueprintCallable)
    void SetMissionCategory(int32 Category);
    
    UFUNCTION(BlueprintCallable)
    void SetMakeLobbySetting(int32 makeLobbySizeIndex, int32 makeLobbyFriendSlot, bool makeLobbyIsSameRegion, bool makeLobbyIsSameStrength, int32 makeLobbyTitleIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetLastSelectStageNo(int32 stageNo);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTutorialWindow(bool bTurotialWindow);
    
    UFUNCTION(BlueprintCallable)
    void SetIsTutorial(bool bTurotial);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMissionKeyLog(bool bMissionKeyLog);
    
    UFUNCTION(BlueprintCallable)
    void SetIsMissionCommond(bool bMissionCommond);
    
    UFUNCTION(BlueprintCallable)
    void SetFakeOfflineMode(bool FlgOn);
    
    UFUNCTION(BlueprintCallable)
    void SetEasyHCSetting(int32 teamNo, bool FlgOn);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCultureNameEnum(ELanguage Language);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentCultureName(const FString& Culture);
    
    UFUNCTION(BlueprintCallable)
    void SetCommandListSelectChara(int32 _CharaId);
    
    UFUNCTION(BlueprintCallable)
    void SetCommandListCursorPos(int32 _CursorPos);
    
    UFUNCTION(BlueprintCallable)
    void SetCacheName_LobbyProfCard(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void SetCacheMyFlg_LobbyProfCard(bool Flg);
    
    UFUNCTION(BlueprintCallable)
    void SetBuildVerFreeParamInt32(int32 BuildVer, int32 index, int32 Param);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleTrophyCheck(bool _In);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSetting_WinCount(int32 Cnt);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSetting_Time(int32 Time);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSetting_LobbyWatchFlg(bool Flg);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSetting_LobbyBattleRule(ELobby_Rule Rule);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSetting_Difficulty(EBattleSettingDifficulty Difficulty);
    
    UFUNCTION(BlueprintCallable)
    void SetBattleSetting_Damage(EBattleSettingDamage Damage);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSJSetting(int32 teamNo, bool FlgOn);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchInfo_SameRegion(bool SameRegion);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchInfo_QoS(EAutoMatch_QoS QoS);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchInfo_MatchType(EAutoMatchType_UI Type);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMatchInfo_All(EAutoMatchType_UI Type, EAutoMatch_QoS QoS, bool SameRegion);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoComboSetting(int32 teamNo, bool FlgOn);
    
    UFUNCTION(BlueprintCallable)
    void ResultCountUp(EWinTeam Type);
    
    UFUNCTION(BlueprintCallable)
    void ResultCountInit();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsZuttoArcade();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsVitalDouble();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorialWindow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTutorial();
    
    UFUNCTION(BlueprintCallable)
    bool IsStoryTrophCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineSelectTimeOut() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionKeyLog();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMissionCommond();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsHistoryHonorOpen();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFakeOfflineMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsDummyControl();
    
    UFUNCTION(BlueprintCallable)
    bool IsBattleTrophCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArcadeMinionEnemy();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsArcadeFinalBattle() const;
    
    UFUNCTION(BlueprintCallable)
    void InitMissionMain();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetVoiceChatSetting(bool& IsBattleChatOnlyRoom, bool& IsVoiceChatUIVisible);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FReplayBytes> GetTmpReplayData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FProfileCardData GetTmpProfileCardData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectStageNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStageDataAsset* GetSelectStageData() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectChara_TeamHandicap(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSelectChara_TeamCPU(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectChara_PlType(int32 teamNo, int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable)
    bool GetSelectChara_PlInfo(int32 teamNo, int32 PartnerNo, int32& OutPlType, int32& OutCostumeNo, int32& OutColorNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectChara_GemTypeByIndex(int32 teamNo, int32 index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectChara_GemType(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectChara_CostumeNo(int32 teamNo, int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectChara_ColorNo(int32 teamNo, int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSelectChara_AssistType(int32 teamNo, int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetSearchLobbySetting(int32& searchLobbySizeIndex, bool& searchLobbyIsSameRegion, bool& searchLobbyIsSameStrength, int32& searchLobbyTitleIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetResultCount(EWinTeam Type);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOnlineMyTeamNo() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionPage();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMissionCategory();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMakeLobbySetting(int32& makeLobbySizeIndex, int32& makeLobbyFriendSlot, bool& makeLobbyIsSameRegion, bool& makeLobbyIsSameStrength, int32& makeLobbyTitleIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastSelectStageNo() const;
    
    UFUNCTION(BlueprintCallable)
    static UGameSetting* GetInstanceExec();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameSetting* GetInstance();
    
    UFUNCTION(BlueprintCallable)
    AFlowBase* GetFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetFaceLightIntensity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetDefaultCultureName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCurrentCultureName();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCPUDifficulty(int32 PlWorkNo) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCommandListLastSelectChara();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCommandListCursorPos();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<int32> GetCharaTypeToNeedPl004Particle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UDuckCharaAttrDataAsset* GetCharaAttrData(int32 PlType) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetCacheName_LobbyProfCard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCacheMyFlg_LobbyProfCard();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBuildVerFreeParamInt32(int32 BuildVer, int32 index) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleVersion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetBattleSetting_Time() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetBattleSetting_LobbyWatchFlg();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ELobby_Rule GetBattleSetting_LobbyBattleRule();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleSettingDifficulty GetBattleSetting_Difficulty() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EBattleSettingDamage GetBattleSetting_Damage() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoMatchInfo_SameRegion() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAutoMatch_QoS GetAutoMatchInfo_QoS() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAutoMatchType_UI GetAutoMatchInfo_MatchType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetAutoMatchInfo_Enable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetAutoMatchInfo_All(EAutoMatchType_UI& Type, EAutoMatch_QoS& QoS, bool& SameRegion) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArcadeMaxBattleCnt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArcadeHandicap(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FACEnemyData GetArcadeEnemyData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetArcadeBattleCnt() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAmbientVolume() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ConvDuckCultureNum(const FString& Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ConvDuckCultureName_Enum(ELanguage Name);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString ConvDuckCultureName(const FString& Name);
    
    UFUNCTION(BlueprintCallable)
    void ClearSelectBattlePlayer(int32 teamNo, int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable)
    void ClearBattleStage();
    
    UFUNCTION(BlueprintCallable)
    void ClearBattleSetting_WithoutMatching();
    
    UFUNCTION(BlueprintCallable)
    void ClearBattleSetting();
    
    UFUNCTION(BlueprintCallable)
    void ClearBattleChara();
    
    UFUNCTION(BlueprintCallable)
    void ClearArcadeInfo();
    
    UFUNCTION(BlueprintCallable)
    void CheckSameColorArcadeEnemy();
    
    UFUNCTION(BlueprintCallable)
    void CheckAndChangeSameChara(int32 MainTeamNo);
    
    UFUNCTION(BlueprintCallable)
    bool ChangeSelectChara_PlModel(int32 teamNo, int32 PartnerNo, int32 CostumeNo, int32 ColorNo, int32 StyleNo);
    
    UFUNCTION(BlueprintCallable)
    void AsyncLoadMissionBattleChara();
    
    UFUNCTION(BlueprintCallable)
    bool ArcadeMatchEnemy();
    
};

