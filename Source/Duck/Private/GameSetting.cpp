#include "DuckModule.h"
#include "GameSetting.h"

void UGameSetting::UpdateCharaBaseData() {
}

void UGameSetting::SetVoiceChatSetting(bool IsBattleChatOnlyRoom, bool IsVoiceChatUIVisible) {
}

void UGameSetting::SetValidBattleCharaSetting(bool FlgValid) {
}

void UGameSetting::SetupArcadeStageInfo() {
}

void UGameSetting::SetupArcadeInfo() {
}

void UGameSetting::SetupArcadeBattleInfo(int32 CPUTeamNo) {
}

void UGameSetting::SetTmpReplayData(TArray<FReplayBytes> _TmpReplayData) {
}

void UGameSetting::SetTmpProfileCard(FProfileCardData _CardData) {
}

void UGameSetting::SetStoryTrophyCheck(bool _In) {
}

void UGameSetting::SetSelectStageNo(int32 stageNo) {
}

void UGameSetting::SetSelectChara_TeamHandicap(int32 teamNo, int32 Handicap) {
}

void UGameSetting::SetSelectChara_TeamGems(int32 teamNo, int32 GemBits) {
}

void UGameSetting::SetSelectChara_TeamGem(int32 teamNo, int32 GemType) {
}

void UGameSetting::SetSelectChara_TeamCPU(int32 teamNo, bool FlgOn) {
}

void UGameSetting::SetSelectChara_PlModel(int32 teamNo, int32 PartnerNo, int32 PlType, int32 CostumeNo, int32 ColorNo, int32 StyleNo) {
}

void UGameSetting::SetSelectChara_PlAssist(int32 teamNo, int32 PartnerNo, int32 AssistType) {
}

void UGameSetting::SetSelectChara_ColorNo(int32 teamNo, int32 PartnerNo, int32 ColorNo) {
}

void UGameSetting::SetSearchLobbySetting(int32 searchLobbySizeIndex, bool searchLobbyIsSameRegion, bool searchLobbyIsSameStrength, int32 searchLobbyTitleIndex) {
}

void UGameSetting::SetOnlineSelectTimeOut(bool bTimeOut) {
}

void UGameSetting::SetNonGemMode(bool Flg) {
}

void UGameSetting::SetMissionPage(int32 Page) {
}

void UGameSetting::SetMissionNum(int32 Num) {
}

void UGameSetting::SetMissionCategory(int32 Category) {
}

void UGameSetting::SetMakeLobbySetting(int32 makeLobbySizeIndex, int32 makeLobbyFriendSlot, bool makeLobbyIsSameRegion, bool makeLobbyIsSameStrength, int32 makeLobbyTitleIndex) {
}

void UGameSetting::SetLastSelectStageNo(int32 stageNo) {
}

void UGameSetting::SetIsTutorialWindow(bool bTurotialWindow) {
}

void UGameSetting::SetIsTutorial(bool bTurotial) {
}

void UGameSetting::SetIsMissionKeyLog(bool bMissionKeyLog) {
}

void UGameSetting::SetIsMissionCommond(bool bMissionCommond) {
}

void UGameSetting::SetFakeOfflineMode(bool FlgOn) {
}

void UGameSetting::SetEasyHCSetting(int32 teamNo, bool FlgOn) {
}

void UGameSetting::SetCurrentCultureNameEnum(ELanguage Language) {
}

void UGameSetting::SetCurrentCultureName(const FString& Culture) {
}

void UGameSetting::SetCommandListSelectChara(int32 _CharaId) {
}

void UGameSetting::SetCommandListCursorPos(int32 _CursorPos) {
}

void UGameSetting::SetCacheName_LobbyProfCard(const FString& Name) {
}

void UGameSetting::SetCacheMyFlg_LobbyProfCard(bool Flg) {
}

void UGameSetting::SetBuildVerFreeParamInt32(int32 BuildVer, int32 index, int32 Param) {
}

void UGameSetting::SetBattleTrophyCheck(bool _In) {
}

void UGameSetting::SetBattleSetting_WinCount(int32 Cnt) {
}

void UGameSetting::SetBattleSetting_Time(int32 Time) {
}

void UGameSetting::SetBattleSetting_LobbyWatchFlg(bool Flg) {
}

void UGameSetting::SetBattleSetting_LobbyBattleRule(ELobby_Rule Rule) {
}

void UGameSetting::SetBattleSetting_Difficulty(EBattleSettingDifficulty Difficulty) {
}

void UGameSetting::SetBattleSetting_Damage(EBattleSettingDamage Damage) {
}

void UGameSetting::SetAutoSJSetting(int32 teamNo, bool FlgOn) {
}

void UGameSetting::SetAutoMatchInfo_SameRegion(bool SameRegion) {
}

void UGameSetting::SetAutoMatchInfo_QoS(EAutoMatch_QoS QoS) {
}

void UGameSetting::SetAutoMatchInfo_MatchType(EAutoMatchType_UI Type) {
}

void UGameSetting::SetAutoMatchInfo_All(EAutoMatchType_UI Type, EAutoMatch_QoS QoS, bool SameRegion) {
}

void UGameSetting::SetAutoComboSetting(int32 teamNo, bool FlgOn) {
}

void UGameSetting::ResultCountUp(EWinTeam Type) {
}

void UGameSetting::ResultCountInit() {
}

bool UGameSetting::IsZuttoArcade() {
    return false;
}

bool UGameSetting::IsVitalDouble() {
    return false;
}

bool UGameSetting::IsTutorialWindow() {
    return false;
}

bool UGameSetting::IsTutorial() {
    return false;
}

bool UGameSetting::IsStoryTrophCheck() {
    return false;
}

bool UGameSetting::IsOnlineSelectTimeOut() const {
    return false;
}

bool UGameSetting::IsMissionKeyLog() {
    return false;
}

bool UGameSetting::IsMissionCommond() {
    return false;
}

bool UGameSetting::IsHistoryHonorOpen() {
    return false;
}

bool UGameSetting::IsFakeOfflineMode() const {
    return false;
}

bool UGameSetting::IsDummyControl() {
    return false;
}

bool UGameSetting::IsBattleTrophCheck() {
    return false;
}

bool UGameSetting::IsArcadeMinionEnemy() {
    return false;
}

bool UGameSetting::IsArcadeFinalBattle() const {
    return false;
}

void UGameSetting::InitMissionMain() {
}

void UGameSetting::GetVoiceChatSetting(bool& IsBattleChatOnlyRoom, bool& IsVoiceChatUIVisible) {
}

TArray<FReplayBytes> UGameSetting::GetTmpReplayData() {
    return TArray<FReplayBytes>();
}

FProfileCardData UGameSetting::GetTmpProfileCardData() {
    return FProfileCardData{};
}

int32 UGameSetting::GetSelectStageNo() const {
    return 0;
}

UStageDataAsset* UGameSetting::GetSelectStageData() const {
    return NULL;
}

int32 UGameSetting::GetSelectChara_TeamHandicap(int32 teamNo) {
    return 0;
}

bool UGameSetting::GetSelectChara_TeamCPU(int32 teamNo) {
    return false;
}

int32 UGameSetting::GetSelectChara_PlType(int32 teamNo, int32 PartnerNo) {
    return 0;
}

bool UGameSetting::GetSelectChara_PlInfo(int32 teamNo, int32 PartnerNo, int32& OutPlType, int32& OutCostumeNo, int32& OutColorNo) {
    return false;
}

int32 UGameSetting::GetSelectChara_GemTypeByIndex(int32 teamNo, int32 index) {
    return 0;
}

int32 UGameSetting::GetSelectChara_GemType(int32 teamNo) {
    return 0;
}

int32 UGameSetting::GetSelectChara_CostumeNo(int32 teamNo, int32 PartnerNo) {
    return 0;
}

int32 UGameSetting::GetSelectChara_ColorNo(int32 teamNo, int32 PartnerNo) {
    return 0;
}

int32 UGameSetting::GetSelectChara_AssistType(int32 teamNo, int32 PartnerNo) {
    return 0;
}

void UGameSetting::GetSearchLobbySetting(int32& searchLobbySizeIndex, bool& searchLobbyIsSameRegion, bool& searchLobbyIsSameStrength, int32& searchLobbyTitleIndex) {
}

int32 UGameSetting::GetResultCount(EWinTeam Type) {
    return 0;
}

int32 UGameSetting::GetOnlineMyTeamNo() const {
    return 0;
}

int32 UGameSetting::GetMissionPage() {
    return 0;
}

int32 UGameSetting::GetMissionNum() {
    return 0;
}

int32 UGameSetting::GetMissionCategory() {
    return 0;
}

void UGameSetting::GetMakeLobbySetting(int32& makeLobbySizeIndex, int32& makeLobbyFriendSlot, bool& makeLobbyIsSameRegion, bool& makeLobbyIsSameStrength, int32& makeLobbyTitleIndex) {
}

int32 UGameSetting::GetLastSelectStageNo() const {
    return 0;
}

UGameSetting* UGameSetting::GetInstanceExec() {
    return NULL;
}

UGameSetting* UGameSetting::GetInstance() {
    return NULL;
}

AFlowBase* UGameSetting::GetFlow() {
    return NULL;
}

float UGameSetting::GetFaceLightIntensity() const {
    return 0.0f;
}

FString UGameSetting::GetDefaultCultureName() {
    return TEXT("");
}

FString UGameSetting::GetCurrentCultureName() {
    return TEXT("");
}

int32 UGameSetting::GetCPUDifficulty(int32 PlWorkNo) const {
    return 0;
}

int32 UGameSetting::GetCommandListLastSelectChara() {
    return 0;
}

int32 UGameSetting::GetCommandListCursorPos() {
    return 0;
}

TArray<int32> UGameSetting::GetCharaTypeToNeedPl004Particle() {
    return TArray<int32>();
}

UDuckCharaAttrDataAsset* UGameSetting::GetCharaAttrData(int32 PlType) const {
    return NULL;
}

FString UGameSetting::GetCacheName_LobbyProfCard() {
    return TEXT("");
}

bool UGameSetting::GetCacheMyFlg_LobbyProfCard() {
    return false;
}

int32 UGameSetting::GetBuildVerFreeParamInt32(int32 BuildVer, int32 index) const {
    return 0;
}

int32 UGameSetting::GetBattleVersion() const {
    return 0;
}

int32 UGameSetting::GetBattleSetting_Time() const {
    return 0;
}

bool UGameSetting::GetBattleSetting_LobbyWatchFlg() {
    return false;
}

ELobby_Rule UGameSetting::GetBattleSetting_LobbyBattleRule() {
    return ELobby_Rule::BOTH_REMAIN;
}

EBattleSettingDifficulty UGameSetting::GetBattleSetting_Difficulty() const {
    return EBattleSettingDifficulty::DIFFICULTY_VERY_EASY;
}

EBattleSettingDamage UGameSetting::GetBattleSetting_Damage() const {
    return EBattleSettingDamage::DAMAGE_LOWEST;
}

bool UGameSetting::GetAutoMatchInfo_SameRegion() const {
    return false;
}

EAutoMatch_QoS UGameSetting::GetAutoMatchInfo_QoS() const {
    return EAutoMatch_QoS::AUTOMATCH_LEVEL1_QOS;
}

EAutoMatchType_UI UGameSetting::GetAutoMatchInfo_MatchType() const {
    return EAutoMatchType_UI::Off;
}

bool UGameSetting::GetAutoMatchInfo_Enable() const {
    return false;
}

void UGameSetting::GetAutoMatchInfo_All(EAutoMatchType_UI& Type, EAutoMatch_QoS& QoS, bool& SameRegion) const {
}

int32 UGameSetting::GetArcadeMaxBattleCnt() const {
    return 0;
}

int32 UGameSetting::GetArcadeHandicap(int32 teamNo) {
    return 0;
}

FACEnemyData UGameSetting::GetArcadeEnemyData() {
    return FACEnemyData{};
}

int32 UGameSetting::GetArcadeBattleCnt() const {
    return 0;
}

float UGameSetting::GetAmbientVolume() const {
    return 0.0f;
}

int32 UGameSetting::ConvDuckCultureNum(const FString& Name) {
    return 0;
}

FString UGameSetting::ConvDuckCultureName_Enum(ELanguage Name) {
    return TEXT("");
}

FString UGameSetting::ConvDuckCultureName(const FString& Name) {
    return TEXT("");
}

void UGameSetting::ClearSelectBattlePlayer(int32 teamNo, int32 PartnerNo) {
}

void UGameSetting::ClearBattleStage() {
}

void UGameSetting::ClearBattleSetting_WithoutMatching() {
}

void UGameSetting::ClearBattleSetting() {
}

void UGameSetting::ClearBattleChara() {
}

void UGameSetting::ClearArcadeInfo() {
}

void UGameSetting::CheckSameColorArcadeEnemy() {
}

void UGameSetting::CheckAndChangeSameChara(int32 MainTeamNo) {
}

bool UGameSetting::ChangeSelectChara_PlModel(int32 teamNo, int32 PartnerNo, int32 CostumeNo, int32 ColorNo, int32 StyleNo) {
    return false;
}

void UGameSetting::AsyncLoadMissionBattleChara() {
}

bool UGameSetting::ArcadeMatchEnemy() {
    return false;
}

UGameSetting::UGameSetting() {
}


