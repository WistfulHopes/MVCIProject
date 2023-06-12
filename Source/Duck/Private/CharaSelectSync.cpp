#include "DuckModule.h"
#include "CharaSelectSync.h"

UCharaSelectSync* UCharaSelectSync::SetupCharaSelectSync() {
    return NULL;
}

void UCharaSelectSync::SelfDisconnect() {
}

void UCharaSelectSync::MoveStageCursor(int32 stageNo) {
}

bool UCharaSelectSync::IsSpectator() {
    return false;
}

bool UCharaSelectSync::IsReplay() {
    return false;
}

bool UCharaSelectSync::IsOnline() {
    return false;
}

bool UCharaSelectSync::IsConnectError() {
    return false;
}

bool UCharaSelectSync::IsCompetitor() {
    return false;
}

bool UCharaSelectSync::InitializeSpectate() {
    return false;
}

bool UCharaSelectSync::InitializeReplay() {
    return false;
}

int32 UCharaSelectSync::GetTeam() {
    return 0;
}

int32 UCharaSelectSync::GetSpectateStageNo() {
    return 0;
}

int32 UCharaSelectSync::GetReplayStageNo() {
    return 0;
}

FMemberInfo UCharaSelectSync::GetMemberInfo(int32 Team) {
    return FMemberInfo{};
}

void UCharaSelectSync::DecideTeamSelect(int32 teamNo, int32 MainPlType, int32 MainCostumeNo, int32 MainColorNo, int32 SubPlType, int32 SubCostumeNo, int32 SubColorNo) {
}

void UCharaSelectSync::DecideStage(int32 stageNo) {
}

void UCharaSelectSync::DecideMenu(int32 teamNo, int32 CostumeNo, int32 ColorNo) {
}

void UCharaSelectSync::DecideGem(int32 teamNo, int32 Type) {
}

void UCharaSelectSync::DecideCharaRandom(int32 teamNo, int32 PlType, int32 CostumeNo, int32 ColorNo) {
}

void UCharaSelectSync::DecideChara(int32 teamNo, int32 Type) {
}

void UCharaSelectSync::DecideBattleSetting() {
}

void UCharaSelectSync::CancelMenu(int32 teamNo) {
}

void UCharaSelectSync::CancelGem(int32 teamNo) {
}

void UCharaSelectSync::CancelChara(int32 teamNo) {
}

void UCharaSelectSync::BPTick() {
}

void UCharaSelectSync::Activate() {
}

UCharaSelectSync::UCharaSelectSync() {
}


