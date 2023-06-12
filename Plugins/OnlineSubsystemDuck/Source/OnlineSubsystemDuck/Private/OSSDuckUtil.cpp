#include "OSSDuckUtil.h"

void UOSSDuckUtil::SuccessAutoMatchWait() {
}

void UOSSDuckUtil::StoreLobbyVoiceMuteSetting() {
}

void UOSSDuckUtil::showProfileUI(TArray<uint8> UserId, bool isSelf) {
}

void UOSSDuckUtil::SetSearchedAutoMatchInfo(EAutoMatchType_UI MatchType, EAutoMatch_QoS QoS, bool SameRegion) {
}

void UOSSDuckUtil::SetRichPresence(ERichPresence Type) {
}

void UOSSDuckUtil::SetInitializeSignInSuccess(bool flag) {
}

void UOSSDuckUtil::SetIgnoreCancelAutoMatchFromBattleEnd() {
}

void UOSSDuckUtil::ResetMultiCheckState() {
}

void UOSSDuckUtil::PrimaryLogin() {
}

void UOSSDuckUtil::OpenStorePage() {
}

bool UOSSDuckUtil::IsUGCRestRict() {
    return false;
}

bool UOSSDuckUtil::IsTextChatRestrict() {
    return false;
}

bool UOSSDuckUtil::IsPrimarySignIn() {
    return false;
}

bool UOSSDuckUtil::IsOnlineReplayNow() {
    return false;
}

bool UOSSDuckUtil::IsOnlineBattleNow() {
    return false;
}

bool UOSSDuckUtil::IsMannerBad() {
    return false;
}

bool UOSSDuckUtil::IsIgnoreCancelAutoMatchFromBattleEnd() {
    return false;
}

bool UOSSDuckUtil::IsEndOnlineMatchProcess() {
    return false;
}

bool UOSSDuckUtil::IsEnableRookie() {
    return false;
}

FString UOSSDuckUtil::GetUserName(int32 PlayerID) {
    return TEXT("");
}

int32 UOSSDuckUtil::GetUpperLimitBattlePointByResult(int32 Rank) {
    return 0;
}

int32 UOSSDuckUtil::GetUpperLimitBattlePoint(int32 Rank) {
    return 0;
}

FSearchdAutoMatchInfo UOSSDuckUtil::GetSearchedAutoMatchInfo() {
    return FSearchdAutoMatchInfo{};
}

FString UOSSDuckUtil::GetPrimaryUserName() {
    return TEXT("");
}

TArray<uint8> UOSSDuckUtil::GetPrimaryUniqueId() {
    return TArray<uint8>();
}

int32 UOSSDuckUtil::GetMyBattlePoint() {
    return 0;
}

int32 UOSSDuckUtil::GetLowerLimitBattlePointByResult(int32 Rank) {
    return 0;
}

int32 UOSSDuckUtil::GetLowerLimitBattlePoint(int32 Rank) {
    return 0;
}

int32 UOSSDuckUtil::GetLoginResult() {
    return 0;
}

bool UOSSDuckUtil::GetInitializeSignInSuccess() {
    return false;
}

bool UOSSDuckUtil::GetDisableMatchEndCountDip() {
    return false;
}

TArray<FBattlePointAnimStruct> UOSSDuckUtil::GetBattlePointAnimArray(int32 OldPoint, int32 NewPoint, int32 rankResult) {
    return TArray<FBattlePointAnimStruct>();
}

void UOSSDuckUtil::DispSpectateError() {
}

void UOSSDuckUtil::DirtyOnlineVariable() {
}

void UOSSDuckUtil::ClearReplaySetting() {
}

void UOSSDuckUtil::ClearLobbyVoiceMuteSetting() {
}

bool UOSSDuckUtil::CheckStrengthByCasualPoint(int32 oppnentPoint) {
    return false;
}

int32 UOSSDuckUtil::BattlePointToRank(int32 BattlePoint) {
    return 0;
}

UOSSDuckUtil::UOSSDuckUtil() {
}

