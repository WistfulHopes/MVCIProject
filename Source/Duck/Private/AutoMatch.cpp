#include "DuckModule.h"
#include "AutoMatch.h"

void UAutoMatch::StartAutoMatch(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EAutoMatch_Type Type, EAutoMatch_QoS QoS, bool SameRegion, float Timeout) {
}

void UAutoMatch::SetupAutoMatchSelect(EAutoMatchSelect select) {
}

UAutoMatch* UAutoMatch::SetupAutoMatch() {
    return NULL;
}

void UAutoMatch::RequestStartBattle(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UAutoMatch::PauseAutoMatch() {
}

bool UAutoMatch::IsStartBattleSucceeded() {
    return false;
}

bool UAutoMatch::IsAutoMatchTimeOut() {
    return false;
}

bool UAutoMatch::IsAutoMatchSucceeded() {
    return false;
}

bool UAutoMatch::IsAutoMatchRunning() {
    return false;
}

bool UAutoMatch::IsAutoMatchRookieError() {
    return false;
}

bool UAutoMatch::IsAutoMatchFailure() {
    return false;
}

bool UAutoMatch::IsAutoMatchContextError() {
    return false;
}

FMemberInfo UAutoMatch::GetMemberInfo(int32 Team) {
    return FMemberInfo{};
}

EAutoMatch_Type UAutoMatch::GetMatchType() {
    return EAutoMatch_Type::UNKNOWN;
}

int32 UAutoMatch::GetCheckResult() {
    return 0;
}

void UAutoMatch::CheckMultiPlayPermission() {
}

void UAutoMatch::CancelAutoMatch() {
}

int32 UAutoMatch::BattlePointToRank(int32 battle_point) {
    return 0;
}

float UAutoMatch::BattlePointToProgress(int32 battle_point) {
    return 0.0f;
}

UAutoMatch::UAutoMatch() {
}


