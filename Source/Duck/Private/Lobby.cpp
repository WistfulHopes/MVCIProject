#include "DuckModule.h"
#include "Lobby.h"

ELobbyMemberState ULobby::UpdateMyState(ELobbyMemberState nowState) {
    return ELobbyMemberState::SELECT_SLOT;
}

void ULobby::TryChangeSide(int32 index) {
}

void ULobby::StartBattleNow(ELobby_Style Style) {
}

void ULobby::SetVoiceRestrict(ELobbyVoiceRestrict lvt) {
}

FLobbyInfo ULobby::SetupSearchLobbyInfo() {
    return FLobbyInfo{};
}

ULobby* ULobby::SetupLobby() {
    return NULL;
}

FLobbyInfo ULobby::SetupCreateLobbyInfo() {
    return FLobbyInfo{};
}

void ULobby::SetSpeakerVolume(float Volume) {
}

void ULobby::SetMemberMute(bool flag, int32 index) {
}

void ULobby::SetLobbyRule(FLobbyRule Rule) {
}

void ULobby::SendTemplateMessage(int32 messageID) {
}

void ULobby::SearchLobbyAgain(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void ULobby::SearchLobby(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FLobbyInfo& Info) {
}

void ULobby::ResetContinuousBattleNum() {
}

void ULobby::ResetBattleResult(int32 memberIndex) {
}

void ULobby::RequestStartBattle(ELobby_Style Style) {
}

void ULobby::NoticeRoomState(bool isBattle, ELobby_Style Style) {
}

void ULobby::NoticeResetRoomState() {
}

void ULobby::NoticeInLobby(bool inLobby) {
}

void ULobby::LeaveLobby() {
}

void ULobby::JoinLobby(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FLobbyInfo& Info) {
}

bool ULobby::IsValidLobby() {
    return false;
}

bool ULobby::IsTalking(int32 index) {
    return false;
}

bool ULobby::IsSpectator() {
    return false;
}

bool ULobby::IsOpponentMemberValid() {
    return false;
}

bool ULobby::IsOpponemtMemberInLobby() {
    return false;
}

bool ULobby::IsMemberMute(int32 index) {
    return false;
}

bool ULobby::IsInvited() {
    return false;
}

bool ULobby::IsHost() {
    return false;
}

void ULobby::Invite() {
}

ELobbyVoiceRestrict ULobby::GetVoiceRestrict() {
    return ELobbyVoiceRestrict::RESTRICT_NONE;
}

float ULobby::GetSpeakerVolume() {
    return 0.0f;
}

FString ULobby::GetSessionId() {
    return TEXT("");
}

int32 ULobby::GetPrivateMemberNumInLobby() {
    return 0;
}

int32 ULobby::GetPriority() {
    return 0;
}

int32 ULobby::GetPreviousBattleIndex() {
    return 0;
}

TArray<FMemberInfo> ULobby::GetMemberList() {
    return TArray<FMemberInfo>();
}

FMemberInfo ULobby::GetMemberInfoFromIndex(int32 memberIndex) {
    return FMemberInfo{};
}

FLobbyRule ULobby::GetLobbyRule() {
    return FLobbyRule{};
}

TArray<FLobbyInfo> ULobby::getLobbyList() {
    return TArray<FLobbyInfo>();
}

FLobbyInfo ULobby::GetLobbyInfo() {
    return FLobbyInfo{};
}

int32 ULobby::GetGuestMemberNumInLobby() {
    return 0;
}

int32 ULobby::GetEmptyPrivateSlotNum() {
    return 0;
}

int32 ULobby::GetEmptyGuestSlotNum() {
    return 0;
}

FLobbyRule ULobby::GetCurrentRule() {
    return FLobbyRule{};
}

int32 ULobby::GetContinuousBattleNum() {
    return 0;
}

void ULobby::GetBattleState(int32 memberIndex, int32& State) {
}

void ULobby::GetBattleResultFromSpectator(int32 teamNo, int32& win, int32& lose, int32& Draw) {
}

void ULobby::GetBattleResult(int32& win, int32& lose, int32& Draw) {
}

TArray<FBattleInfo> ULobby::GetBattleList() {
    return TArray<FBattleInfo>();
}

int32 ULobby::GetBattleIndex() {
    return 0;
}

void ULobby::ExitBattle() {
}

void ULobby::EntryBattleAsSpectate(int32 battle_index) {
}

void ULobby::EntryBattle(int32 battle_index) {
}

void ULobby::DeclineBattle() {
}

void ULobby::CreateLobby(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FLobbyInfo& Info) {
}

void ULobby::CheckSendStartBattle(bool& IsSend, ELobby_Style& Style) {
}

bool ULobby::CheckIsValidSpectatorInBattle(int32 battleIndex) {
    return false;
}

bool ULobby::CheckIsValidNextChallengerInBattle(int32 battleIndex) {
    return false;
}

bool ULobby::CheckIsValidMemberInBattle(int32 battleIndex) {
    return false;
}

void ULobby::CancelStartBattle(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void ULobby::CancelRequest() {
}

void ULobby::AcceptStartBattle() {
}

ULobby::ULobby() {
}


