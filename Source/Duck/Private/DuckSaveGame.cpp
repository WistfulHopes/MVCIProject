#include "DuckModule.h"
#include "DuckSaveGame.h"

void UDuckSaveGame::UpdateProfileTimeStamp() {
}

void UDuckSaveGame::SuspendSystem() {
}

void UDuckSaveGame::SetTrainingData(FTrainingData Data) {
}

void UDuckSaveGame::SetTeamSetting(FTEAM_SETTING InSetting, int32 Num) {
}

void UDuckSaveGame::SetSystemSetting(bool battleTitle, bool storyTitle, bool ctrlSelect, bool replayUpload, bool replaySave, bool statUpload) {
}

void UDuckSaveGame::SetStoryPlayIndex(int32 index) {
}

void UDuckSaveGame::SetStoryAllClear() {
}

void UDuckSaveGame::SetSoundVolumeRate(EVolumeType Type, float rate) {
}

bool UDuckSaveGame::SetReplayData(TArray<uint8> Data) {
    return false;
}

bool UDuckSaveGame::SetReplayBytes(TArray<FReplayBytes> _NewData) {
    return false;
}

void UDuckSaveGame::SetProfileCardData(FProfileCardData Data) {
}

void UDuckSaveGame::SetPlayerKeyConfigData(int32 pl, FKeyConfig Data) {
}

void UDuckSaveGame::SetOperationModeSetting(int32 pl, bool autoCombo, bool easyHC, bool autoSJ, bool poseOpen) {
}

void UDuckSaveGame::SetOldDefaultLanguageData(const FString& Data) {
}

void UDuckSaveGame::SetMissionData(int32 dummy, FMissionSaveData Data) {
}

void UDuckSaveGame::SetLatestSaveDataVersion() {
}

void UDuckSaveGame::SetLanguageData_Name(const FString& Name) {
}

void UDuckSaveGame::SetLanguageData(ELanguage Data) {
}

void UDuckSaveGame::SetKeyboardConfigData(TArray<FKey> Data) {
}

void UDuckSaveGame::SetIsVoiceChatUIVisible(bool IsVisible) {
}

void UDuckSaveGame::SetIsSteamStarted(bool started) {
}

void UDuckSaveGame::SetIsStatAutoUploadConfirm(bool FlgOn) {
}

void UDuckSaveGame::SetIsStatAutoUpload(bool FlgOn) {
}

void UDuckSaveGame::SetIsBattleCommentary(bool comment) {
}

void UDuckSaveGame::SetIsBattleChatOnlyRoom(bool IsOnlyRoom) {
}

void UDuckSaveGame::SetHudHeight(TArray<float> Height) {
}

void UDuckSaveGame::SetHonorID(int32 _In) {
}

void UDuckSaveGame::SetHistory(TArray<FHistory>& _InHistory) {
}

void UDuckSaveGame::SetEnableSave() {
}

void UDuckSaveGame::SetDisplaySetting_Custom(int32 scaling, int32 antiAlias, int32 postProcces, int32 shadow, int32 Texture, int32 effect) {
}

void UDuckSaveGame::SetDisplaySetting_Basic(TArray<int32> resolution, bool fullScreen, int32 quality) {
}

void UDuckSaveGame::SetDisableSave() {
}

void UDuckSaveGame::SetDefaultTrainingData_Gauge() {
}

void UDuckSaveGame::SetDefaultTrainingData_Dummy() {
}

void UDuckSaveGame::SetDefaultTrainingData_Basic() {
}

void UDuckSaveGame::SetDefaultTrainingData() {
}

void UDuckSaveGame::SetDefaultSystemSetting() {
}

void UDuckSaveGame::SetDefaultStoryData() {
}

void UDuckSaveGame::SetDefaultSoundSetting() {
}

void UDuckSaveGame::SetDefaultOperationModeSetting(int32 pl) {
}

void UDuckSaveGame::SetDefaultMissionData() {
}

void UDuckSaveGame::SetDefaultLanguageData() {
}

void UDuckSaveGame::SetDefaultKeyConfig(int32 pl) {
}

void UDuckSaveGame::SetDefaultKeyboardConfigData_All() {
}

void UDuckSaveGame::SetDefaultHudHeight() {
}

void UDuckSaveGame::SetDefaultDisplaySetting_Custom() {
}

void UDuckSaveGame::SetDefaultDisplaySetting_Basic() {
}

void UDuckSaveGame::SetDefaultDisplaySetting_ALL() {
}

void UDuckSaveGame::SetDefaultArcadeClearData() {
}

void UDuckSaveGame::SetArcadePlayData(int32 dummy, int32 charaID) {
}

void UDuckSaveGame::SetArcadeClearData(int32 dummy, int32 charaID, bool isClear) {
}

void UDuckSaveGame::ResumeSystem() {
}

void UDuckSaveGame::ResetStoryPlayIndex() {
}

void UDuckSaveGame::ResetArcadePlayData(int32 dummy, int32 charaID) {
}

bool UDuckSaveGame::RemoveVoiceNew(int32 _Item) {
    return false;
}

bool UDuckSaveGame::RemoveReplayData(int32 _ReplayIndex) {
    return false;
}

bool UDuckSaveGame::RemoveMovieNew(int32 _Item) {
    return false;
}

bool UDuckSaveGame::RemoveDatabaseItemNew(FCollectionStageNew _Item) {
    return false;
}

bool UDuckSaveGame::RemoveDatabaseCharaNew(int32 _Item) {
    return false;
}

bool UDuckSaveGame::RemoveBGMNew(int32 _Item) {
    return false;
}

bool UDuckSaveGame::RemoveArtwarkNew(FCollectionArtwarkNew _Item) {
    return false;
}

void UDuckSaveGame::PushHistory(int32 dummy, FHistory _InHistory) {
}

void UDuckSaveGame::IsValidTeamSetting() {
}

bool UDuckSaveGame::IsValidPrimaryUserForSave() {
    return false;
}

bool UDuckSaveGame::IsStoryNewGameOnly() {
    return false;
}

bool UDuckSaveGame::IsStoryAllClear() {
    return false;
}

bool UDuckSaveGame::isSaveProgress() {
    return false;
}

bool UDuckSaveGame::IsLoadOtherVersion() {
    return false;
}

bool UDuckSaveGame::IsArcadeClear(bool IsDefOnly) {
    return false;
}

bool UDuckSaveGame::IsArcadeAllClear(bool IsDefOnly) {
    return false;
}

bool UDuckSaveGame::IsArcadeAllCharaPlay(int32 dummy, bool IsDefOnly) {
    return false;
}

void UDuckSaveGame::InitSystemData() {
}

void UDuckSaveGame::InitReplayData() {
}

void UDuckSaveGame::InitKPIData() {
}

bool UDuckSaveGame::HaveNewIcon_VoiceTop() {
    return false;
}

bool UDuckSaveGame::HaveNewIcon_DBTop() {
    return false;
}

bool UDuckSaveGame::HaveNewIcon_BGMTop() {
    return false;
}

FTrainingData UDuckSaveGame::GetTrainingData(int32 dummy) {
    return FTrainingData{};
}

FTEAM_SETTING UDuckSaveGame::GetTeamSetting(int32 Num) {
    return FTEAM_SETTING{};
}

bool UDuckSaveGame::GetSystemEnable() {
    return false;
}

int32 UDuckSaveGame::GetStoryPlayIndex() {
    return 0;
}

int32 UDuckSaveGame::GetStoryLowerCPUDifCnt() {
    return 0;
}

int32 UDuckSaveGame::GetStoryClearIndex() {
    return 0;
}

float UDuckSaveGame::GetSoundVolumeRate(int32 dummy, EVolumeType Type) {
    return 0.0f;
}

bool UDuckSaveGame::GetResult() {
    return false;
}

UDuckReplayData* UDuckSaveGame::GetReplayData(int32 index) {
    return NULL;
}

TArray<FReplayBytes> UDuckSaveGame::GetReplayBytes() {
    return TArray<FReplayBytes>();
}

FDateTime UDuckSaveGame::GetProfileTimeStamp() {
    return FDateTime{};
}

FProfileCardData UDuckSaveGame::GetProfileCardData(int32 dummy) {
    return FProfileCardData{};
}

FProfileBattleRecord UDuckSaveGame::GetProfileCardBattleRecord() {
    return FProfileBattleRecord{};
}

FString UDuckSaveGame::GetPlayerName() {
    return TEXT("");
}

FKeyConfig UDuckSaveGame::GetPlayerKeyConfigData(int32 pl) {
    return FKeyConfig{};
}

FOperationSetting UDuckSaveGame::GetOperationSetting(int32 pl) {
    return FOperationSetting{};
}

FString UDuckSaveGame::GetOldDefaultLanguageData() {
    return TEXT("");
}

FMissionSaveData UDuckSaveGame::GetMissionData(int32 dummy) {
    return FMissionSaveData{};
}

ELanguage UDuckSaveGame::GetLanguageData() {
    return ELanguage::English;
}

USaveGame* UDuckSaveGame::GetKPIData() {
    return NULL;
}

TArray<FKey> UDuckSaveGame::GetKeyboardConfigData() {
    return TArray<FKey>();
}

bool UDuckSaveGame::GetIsVoiceChatUIVisible() {
    return false;
}

bool UDuckSaveGame::GetIsStorySubTitleVisible() {
    return false;
}

bool UDuckSaveGame::GetIsSteamStarted() {
    return false;
}

bool UDuckSaveGame::GetIsStatAutoUploadConfirm() {
    return false;
}

bool UDuckSaveGame::GetIsStatAutoUpload() {
    return false;
}

bool UDuckSaveGame::GetIsReplayAutoUpload() {
    return false;
}

bool UDuckSaveGame::GetIsReplayAutoSave() {
    return false;
}

bool UDuckSaveGame::GetIsImmediatelyPoseOpen(int32 pl) {
    return false;
}

bool UDuckSaveGame::GetIsEasyHC(int32 pl) {
    return false;
}

bool UDuckSaveGame::GetIsControllerSelect() {
    return false;
}

bool UDuckSaveGame::GetIsBattleSubTitleVisible() {
    return false;
}

bool UDuckSaveGame::GetIsBattleCommentary(int32 dummy) {
    return false;
}

bool UDuckSaveGame::GetIsBattleChatOnlyRoom() {
    return false;
}

bool UDuckSaveGame::GetIsAutoSJ(int32 pl) {
    return false;
}

bool UDuckSaveGame::GetIsAutoCombo(int32 pl) {
    return false;
}

UDuckSaveGame* UDuckSaveGame::GetInstance() {
    return NULL;
}

float UDuckSaveGame::GetHudHeight(EHudType Type) {
    return 0.0f;
}

int32 UDuckSaveGame::GetHonorID(int32 dummy) {
    return 0;
}

TArray<FHistory> UDuckSaveGame::GetHistory(int32 dummy) {
    return TArray<FHistory>();
}

void UDuckSaveGame::GetDisplaySetting_Custom(int32& scaling, int32& antiAlias, int32& postProcces, int32& shadow, int32& Texture, int32& effect) {
}

void UDuckSaveGame::GetDisplaySetting_Basic(TArray<int32>& resolution, bool& fullScreen, int32& quality) {
}

FCollectionRewards UDuckSaveGame::GetCollectionRewards() {
    return FCollectionRewards{};
}

bool UDuckSaveGame::GetArcadePlayData(int32 charaID) {
    return false;
}

bool UDuckSaveGame::GetArcadeClearData(int32 dummy, int32 charaID) {
    return false;
}

void UDuckSaveGame::ExecutorEnd(bool IsSuccess) {
}

void UDuckSaveGame::ExecuteSaveWithRetryOption(EDataType Data, bool IsRetryCheck) {
}

void UDuckSaveGame::ExecuteSave(EDataType Data) {
}

void UDuckSaveGame::ExecuteLoadWithRetryOption(EDataType Data, bool IsRetryCheck) {
}

void UDuckSaveGame::ExecuteLoad(EDataType Data) {
}

void UDuckSaveGame::CheckVoiceChatSetting(bool IsVisible, bool IsOnlyRoom, bool& IsChange) {
}

void UDuckSaveGame::CheckTeamSetting(TArray<FTEAM_SETTING> InSettingArray, bool& IsChange) {
}

void UDuckSaveGame::CheckSystemSetting(bool battleTitle, bool storyTitle, bool ctrlSelect, bool replayUpload, bool replaySave, bool statUpload, bool& IsChange) {
}

bool UDuckSaveGame::CheckSystemDataExist(const int32& padNo) {
    return false;
}

void UDuckSaveGame::CheckSoundSetting(bool commentary, float bgm, float se, float Voice, float speaker, float story, bool& IsChange) {
}

bool UDuckSaveGame::CheckSaveDataVersion() {
    return false;
}

void UDuckSaveGame::CheckOperationModeSetting(int32 pl, bool autoCombo, bool easyHC, bool autoSJ, bool poseOpen, bool& IsChange) {
}

void UDuckSaveGame::CheckKeyConfigData(int32 pl, FKeyConfig Data, bool& IsChange) {
}

void UDuckSaveGame::CheckKeyboardConfigData(TArray<FKey> Data, bool& IsChange) {
}

void UDuckSaveGame::CheckHudHeight(TArray<float> Height, bool& IsChange) {
}

void UDuckSaveGame::CheckDisplaySetting_Custom(int32 scaling, int32 antiAlias, int32 postProcces, int32 shadow, int32 Texture, int32 effect, bool& IsChange) {
}

void UDuckSaveGame::CheckDisplaySetting_Basic(TArray<int32> resolution, bool fullScreen, int32 quality, bool& IsChange) {
}

void UDuckSaveGame::CheckDisplaySetting_All(TArray<int32> resolution, bool fullScreen, int32 quality, int32 scaling, int32 antiAlias, int32 postProcces, int32 shadow, int32 Texture, int32 effect, bool& IsChange) {
}

int32 UDuckSaveGame::BPSystemSave() {
    return 0;
}

int32 UDuckSaveGame::BPSystemLoad() {
    return 0;
}

void UDuckSaveGame::BPSaveLoadResult(const int32& preResult, ESaveLoadBranch& Branches) {
}

int32 UDuckSaveGame::BPReplaySave() {
    return 0;
}

int32 UDuckSaveGame::BPReplayLoad() {
    return 0;
}

int32 UDuckSaveGame::BPKPISave() {
    return 0;
}

int32 UDuckSaveGame::BPKPILoad() {
    return 0;
}

void UDuckSaveGame::AddStoryLowerCPUDifCnt() {
}

UDuckSaveGame::UDuckSaveGame() {
    this->UserData = NULL;
    this->ReplayData = NULL;
    this->mpSaveLoadExecutor = NULL;
    this->bLoadOtherVersion = false;
    this->KPIData = NULL;
}


