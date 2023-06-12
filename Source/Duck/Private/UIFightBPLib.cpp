#include "DuckModule.h"
#include "UIFightBPLib.h"
#include "Templates/SubclassOf.h"

void UUIFightBPLib::StopUISound(UObject* WorldContextObject) {
}

void UUIFightBPLib::SortArrayForwardFeed(const TArray<int32>& TargetArray, int32 validNum) {
}

void UUIFightBPLib::SortArrayBackwardFeed(const TArray<int32>& TargetArray, int32 validNum) {
}

void UUIFightBPLib::SetResultStageVisible(UObject* WorldContextObject, bool flgVisibleOn) {
}

void UUIFightBPLib::SetLightVisibilityForStoryDemo(bool bDuringStoryDemo) {
}

void UUIFightBPLib::SetIsEasyHC(int32 teamNo, bool IsEasyHC) {
}

void UUIFightBPLib::SetIsAutoSJ(int32 teamNo, bool IsAutoSJ) {
}

void UUIFightBPLib::SetIsAutoCombo(int32 teamNo, bool IsAutoCombo) {
}

void UUIFightBPLib::ResetStoryTrgFlg() {
}

void UUIFightBPLib::ResetCameraFOV(APlayerController* pPlayerCtrl) {
}

int32 UUIFightBPLib::RepeatValueInt32ForArray(int32 Value, int32 MinValue, int32 MaxValue) {
    return 0;
}

int32 UUIFightBPLib::RepeatValueInt32(int32 Value, int32 MinValue, int32 MaxValue) {
    return 0;
}

void UUIFightBPLib::PopItemFromArray(const TArray<int32>& TargetArray, int32 index, int32& Item, bool LeftJustified) {
}

void UUIFightBPLib::PlayUISound(UObject* WorldContextObject, ESound_SYS Type) {
}

void UUIFightBPLib::PlaySoundBattleVoice(int32 teamNo, int32 PartnerNo, int32 CueID) {
}

bool UUIFightBPLib::IsWinPerfect() {
    return false;
}

bool UUIFightBPLib::IsWinHC() {
    return false;
}

bool UUIFightBPLib::IsValidArrayElemIndex(const TArray<int32>& TargetArray, int32 index) {
    return false;
}

bool UUIFightBPLib::IsTimerInf() {
    return false;
}

bool UUIFightBPLib::IsTimerGauge(int32 TeamID) {
    return false;
}

bool UUIFightBPLib::IsStoryBattleReset() {
    return false;
}

bool UUIFightBPLib::IsStoryBattleLoop() {
    return false;
}

bool UUIFightBPLib::IsStoryAutoProgress() {
    return false;
}

bool UUIFightBPLib::IsSkipStoryBattle() {
    return false;
}

void UUIFightBPLib::IsPlayerVanishPlId(int32 plID, bool& outIsVanish) {
}

void UUIFightBPLib::IsPlayerCoopPlId(int32 plID, bool& outIsCoop) {
}

void UUIFightBPLib::IsPlayerCoop(int32 teamNo, bool& outIsCoop, int32 memberId) {
}

void UUIFightBPLib::IsPlayerBattleActivePlId(int32 plID, bool& outIsActive) {
}

void UUIFightBPLib::IsPlayerBattleActive(int32 teamNo, bool& outIsActive, int32 memberId) {
}

bool UUIFightBPLib::IsOnlineHUD_Dip() {
    return false;
}

bool UUIFightBPLib::IsOnlineAutoRematch() {
    return false;
}

bool UUIFightBPLib::IsNoDispFight() {
    return false;
}

bool UUIFightBPLib::IsMemberChange(int32 teamNo) {
    return false;
}

bool UUIFightBPLib::IsMasterCharacterMainSelected(int32 teamNo) {
    return false;
}

bool UUIFightBPLib::IsHudNoCreate() {
    return false;
}

bool UUIFightBPLib::IsHidePlayerIconId() {
    return false;
}

bool UUIFightBPLib::IsGemUse(int32 TeamID, EGemKind GemKind) {
    return false;
}

bool UUIFightBPLib::IsCharaOffScreen(UObject* WorldContextObject, int32 teamNo) {
    return false;
}

bool UUIFightBPLib::IsCharaAssist(UObject* WorldContextObject, int32 teamNo) {
    return false;
}

bool UUIFightBPLib::IsAssistNG(int32 teamNo) {
    return false;
}

bool UUIFightBPLib::Is3Round() {
    return false;
}

EWinType UUIFightBPLib::GetWinType() {
    return EWinType::TYPE_NONE;
}

int32 UUIFightBPLib::GetWinTeamNo() {
    return 0;
}

EWinTeam UUIFightBPLib::GetWinTeam() {
    return EWinTeam::TEAM_NONE;
}

void UUIFightBPLib::GetWinning(int32 teamNo, int32& Result) {
}

int32 UUIFightBPLib::GetWinCount(int32 TeamID) {
    return 0;
}

int32 UUIFightBPLib::GetUniqueParam(int32 teamNo, int32 PartnerNo, int32 index) {
    return 0;
}

float UUIFightBPLib::GetTraningGCIntervalTime() {
    return 0.0f;
}

float UUIFightBPLib::GetTPGaugeRate(int32 teamNo) {
    return 0.0f;
}

void UUIFightBPLib::GetTitle(int32 teamNo, int32& Result) {
}

EConfigTimerType UUIFightBPLib::GetTimerType() {
    return EConfigTimerType::COUNT_NONE;
}

float UUIFightBPLib::GetTimerGaugeRatio(int32 TeamID) {
    return 0.0f;
}

int32 UUIFightBPLib::GetTimer() {
    return 0;
}

int32 UUIFightBPLib::GetSubCharacterNo(int32 teamNo) {
    return 0;
}

void UUIFightBPLib::GetStreamingLevelNames(UObject* WorldContextObject, TArray<FString>& OutLevelNames) {
}

ULightComponentBase* UUIFightBPLib::GetStageActressLight() {
    return NULL;
}

int32 UUIFightBPLib::GetSpaconMaxLevel(int32 teamNo) {
    return 0;
}

int32 UUIFightBPLib::GetSingleDamageValue(int32 TeamID) {
    return 0;
}

void UUIFightBPLib::GetSID(int32 teamNo, FString& Result) {
}

EScrollEventType UUIFightBPLib::GetScrollEventType() {
    return EScrollEventType::EVENT_NONE;
}

int32 UUIFightBPLib::GetRemainEnemyNum() {
    return 0;
}

void UUIFightBPLib::GetRank(int32 teamNo, int32& Result) {
}

float UUIFightBPLib::GetPlRecoverRateForEach(int32 teamNo, int32 PartnerNo) {
    return 0.0f;
}

float UUIFightBPLib::GetPlLifeRateForEach(int32 teamNo, int32 PartnerNo) {
    return 0.0f;
}

float UUIFightBPLib::GetPlLifeRate_Buff(int32 teamNo, int32 PartnerNo) {
    return 0.0f;
}

float UUIFightBPLib::GetPlLifeRate(int32 teamNo) {
    return 0.0f;
}

void UUIFightBPLib::GetPlayerWaistPosFightPlId(int32 plID, FVector& outPos) {
}

void UUIFightBPLib::GetPlayerWaistPosFight(int32 teamNo, FVector& outPos, int32 memberId) {
}

int32 UUIFightBPLib::GetPlayerRefrainNumber(int32 teamNo, int32 memberId) {
    return 0;
}

void UUIFightBPLib::GetPlayerPosFightPlId(int32 plID, FVector& outPos, bool& flgRight) {
}

void UUIFightBPLib::GetPlayerPosFight(int32 teamNo, FVector& outPos, bool& flgRight, int32 memberId) {
}

void UUIFightBPLib::GetPlayerLooksInfo(int32 teamNo, int32 memberId, int32& PlType, int32& CostumeNo, int32& ColorNo) {
}

int32 UUIFightBPLib::GetPlayerIdFight(int32 teamNo, int32 memberId) {
    return 0;
}

int32 UUIFightBPLib::GetMaxComboDamageValue(int32 TeamID) {
    return 0;
}

int32 UUIFightBPLib::GetMasterCharacterNo(int32 teamNo) {
    return 0;
}

void UUIFightBPLib::GetKeyDisplayNum(int32 Data, int32 index, int32& Num) {
}

void UUIFightBPLib::GetKeyDisplayDataInt(int32 TeamID, int32 No, int32& Data) {
}

void UUIFightBPLib::GetKeyDisplayData(int32 TeamID, int32 No, FString& Data) {
}

int32 UUIFightBPLib::GetHitCnt(int32 teamNo) {
    return 0;
}

EGuardAttr UUIFightBPLib::GetGuardAttribute(int32 TeamID) {
    return EGuardAttr::ATTR_NONE;
}

float UUIFightBPLib::GetGemUseRatio(int32 TeamID, EGemKind GemKind) {
    return 0.0f;
}

float UUIFightBPLib::GetGemTimerRatio(int32 TeamID, EGemKind GemKind) {
    return 0.0f;
}

float UUIFightBPLib::GetGaugeValueRate(int32 teamNo) {
    return 0.0f;
}

int32 UUIFightBPLib::GetGaugeLvMax(int32 teamNo) {
    return 0;
}

int32 UUIFightBPLib::GetGaugeLv(int32 teamNo) {
    return 0;
}

EFinishType UUIFightBPLib::GetFinishType(int32 TeamID, int32 WinCount) {
    return EFinishType::TYPE_NONE;
}

int32 UUIFightBPLib::GetFinalRound() {
    return 0;
}

int32 UUIFightBPLib::GetFightStyle(int32 plID) {
    return 0;
}

float UUIFightBPLib::GetExtraGaugeRatio() {
    return 0.0f;
}

int32 UUIFightBPLib::GetComboDamageValue(int32 TeamID) {
    return 0;
}

EComboCompliment UUIFightBPLib::GetComboComplimentId(int32 hitCnt) {
    return EComboCompliment::NONE;
}

UTexture* UUIFightBPLib::GetCharaCutInTexture(int32 teamNo, int32 PartnerNo, bool IsLeft) {
    return NULL;
}

EBattleFlow UUIFightBPLib::GetBattleFlow() {
    return EBattleFlow::INIT;
}

bool UUIFightBPLib::GetArrayElemSafe(const TArray<int32>& TargetArray, int32 index, int32& Item) {
    return false;
}

void UUIFightBPLib::GetAllActorsOfClassFromSubLevel(UObject* WorldContextObject, const FString& LevelName, TSubclassOf<AActor> ActorClass, TArray<AActor*>& OutActors) {
}

bool UUIFightBPLib::CheckTeamAdvantage(int32 teamNo) {
    return false;
}

UUIFightBPLib::UUIFightBPLib() {
}


