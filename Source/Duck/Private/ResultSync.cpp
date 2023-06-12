#include "DuckModule.h"
#include "ResultSync.h"

UResultSync* UResultSync::SetupResultSync() {
    return NULL;
}

void UResultSync::SelectItem(int32 itemNo) {
}

void UResultSync::RequestRematch() {
}

void UResultSync::RequestCharaSelect() {
}

void UResultSync::RequestBattleEnd(int32 itemNo) {
}

bool UResultSync::IsSpectator() {
    return false;
}

bool UResultSync::IsReplay() {
    return false;
}

bool UResultSync::IsOnline() {
    return false;
}

bool UResultSync::IsConnectError() {
    return false;
}

bool UResultSync::IsCompetitor() {
    return false;
}

int32 UResultSync::GetTeamInLastBattle() {
    return 0;
}

int32 UResultSync::GetTeam() {
    return 0;
}

void UResultSync::GetOppnentSelect(bool& isSelected, int32& itemNo) {
}

void UResultSync::GetMySelect(bool& isSelected, int32& itemNo) {
}

FMemberInfo UResultSync::GetMemberInfo(int32 Team) {
    return FMemberInfo{};
}

int32 UResultSync::GetBattlePointOld() {
    return 0;
}

int32 UResultSync::GetBattlePointNew() {
    return 0;
}

void UResultSync::Disconnect() {
}

void UResultSync::CancelRematch(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UResultSync::CancelCharaSelect(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

int32 UResultSync::BattlePointToRank(int32 battle_point) {
    return 0;
}

float UResultSync::BattlePointToProgress(int32 battle_point) {
    return 0.0f;
}

UResultSync::UResultSync() {
}


