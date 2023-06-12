#include "DuckAnalyticsModule.h"
#include "DuckAnalyticsBPFunctionLibrary.h"

FString UDuckAnalyticsBPFunctionLibrary::ToHashedString(const FString& inString) {
    return TEXT("");
}

bool UDuckAnalyticsBPFunctionLibrary::StartSession() {
    return false;
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_UserInfo() {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_Training(const uint8 PlayerType) {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_Story(const EBattleSettingDifficulty Difficulty, const int32 ChapterNo) {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_Option() {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_ModeSelect(const EGameMode GameMode) {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_MatchStart() {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_MatchSkill(const int32 Team) {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_MatchEnd() {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_MatchCharacter(const int32 Team, const int32 PartnerNo) {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_LocalVSGem() {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_LocalVSChara() {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_LocalVS() {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_ItemAcquirement(const uint8 PlayerType) {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_ControllerSetting(const int32 PlayerNo) {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_ClientData() {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_CharacterUsage(const uint8 PlayerType) {
}

void UDuckAnalyticsBPFunctionLibrary::RecordEvent_Arcade(const EBattleSettingDifficulty Difficulty) {
}

void UDuckAnalyticsBPFunctionLibrary::OnTrainingStartSub(const uint8 Pl1, const uint8 Pl2) {
}

void UDuckAnalyticsBPFunctionLibrary::OnTrainingStart() {
}

void UDuckAnalyticsBPFunctionLibrary::OnTrainingEnd() {
}

void UDuckAnalyticsBPFunctionLibrary::OnStoryMovieSkipSub2(const EBattleSettingDifficulty Difficulty, const int32 ChapterNo) {
}

void UDuckAnalyticsBPFunctionLibrary::OnStoryMovieSkipSub(const int32 ChapterNo) {
}

void UDuckAnalyticsBPFunctionLibrary::OnStoryMovieSkip() {
}

void UDuckAnalyticsBPFunctionLibrary::OnStoryChapterStartSub2(const EBattleSettingDifficulty Difficulty, const int32 ChapterNo, const bool isClear) {
}

void UDuckAnalyticsBPFunctionLibrary::OnStoryChapterStartSub(const int32 ChapterNo, const bool isClear) {
}

void UDuckAnalyticsBPFunctionLibrary::OnStoryChapterStart() {
}

void UDuckAnalyticsBPFunctionLibrary::OnStoryBattleEndSub(const EBattleSettingDifficulty Difficulty, const int32 ChapterNo, const EWinTeam WinTeam) {
}

void UDuckAnalyticsBPFunctionLibrary::OnStoryBattleEnd() {
}

void UDuckAnalyticsBPFunctionLibrary::OnModeSelect(const EGameMode GameMode) {
}

void UDuckAnalyticsBPFunctionLibrary::OnCharacterSelectSub(const uint8 Pl1, const int32 Cos1, const int32 Col1, const uint8 Pl2, const int32 Cos2, const int32 Col2) {
}

void UDuckAnalyticsBPFunctionLibrary::OnCharacterSelect_LocalVSSub(const int32 GemTeam1, const uint8 Pl1Team1, const uint8 Pl2Team1, const int32 GemTeam2, const uint8 Pl1Team2, const uint8 Pl2Team2) {
}

void UDuckAnalyticsBPFunctionLibrary::OnCharacterSelect_LocalVS() {
}

void UDuckAnalyticsBPFunctionLibrary::OnCharacterSelect() {
}

void UDuckAnalyticsBPFunctionLibrary::OnArcadeBattleEndSub(const EBattleSettingDifficulty Difficulty, const int32 BattleNo, const EWinTeam WinTeam) {
}

void UDuckAnalyticsBPFunctionLibrary::OnArcadeBattleEnd() {
}

bool UDuckAnalyticsBPFunctionLibrary::IsApproved() {
    return false;
}

void UDuckAnalyticsBPFunctionLibrary::FlushEventsWithAuthCode(const FString& AuthCode, const FString& AuthIssuer) {
}

void UDuckAnalyticsBPFunctionLibrary::FlushEvents() {
}

void UDuckAnalyticsBPFunctionLibrary::EndSession() {
}

UDuckAnalyticsBPFunctionLibrary::UDuckAnalyticsBPFunctionLibrary() {
}

