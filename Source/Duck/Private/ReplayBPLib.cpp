#include "DuckModule.h"
#include "ReplayBPLib.h"

bool UReplayBPLib::VerifyReplay(TArray<uint8> Data) {
    return false;
}

bool UReplayBPLib::ReserveFromAssetRetValue(UReplay* _Replay) {
    return false;
}

void UReplayBPLib::ReserveFromAsset(UReplay* _Replay) {
}

TArray<UReplay*> UReplayBPLib::LoadAssetAll() {
    return TArray<UReplay*>();
}

UReplay* UReplayBPLib::LoadAsset(int32 _ReplayIdx) {
    return NULL;
}

TArray<int32> UReplayBPLib::GetUserRankFromAsset(UReplay* _Replay) {
    return TArray<int32>();
}

TArray<int32> UReplayBPLib::GetUserRank(TArray<uint8> _Replay) {
    return TArray<int32>();
}

TArray<FString> UReplayBPLib::GetUserNameArrayFromAsset(UReplay* _Replay) {
    return TArray<FString>();
}

TArray<FString> UReplayBPLib::GetUserNameArray(TArray<uint8> _Replay) {
    return TArray<FString>();
}

TArray<uint8> UReplayBPLib::GetUserID(TArray<uint8> _Replay, int32 _PlNo) {
    return TArray<uint8>();
}

TArray<int32> UReplayBPLib::GetStoneIDArrayFromAsset(UReplay* _Replay) {
    return TArray<int32>();
}

TArray<int32> UReplayBPLib::GetStoneIDArray(TArray<uint8> _Replay) {
    return TArray<int32>();
}

int32 UReplayBPLib::GetResultFromAsset(UReplay* _Replay) {
    return 0;
}

int32 UReplayBPLib::GetResult(TArray<uint8> _Replay) {
    return 0;
}

int32 UReplayBPLib::GetMatchTypeFromAsset(UReplay* _Replay) {
    return 0;
}

int32 UReplayBPLib::GetMatchType(TArray<uint8> _Replay) {
    return 0;
}

FString UReplayBPLib::GetDateFromAsset(UReplay* _Replay) {
    return TEXT("");
}

FString UReplayBPLib::GetDate(TArray<uint8> _Replay) {
    return TEXT("");
}

TArray<int32> UReplayBPLib::GetCharaIDArrayFromAsset(UReplay* _Replay) {
    return TArray<int32>();
}

TArray<int32> UReplayBPLib::GetCharaIDArray(TArray<uint8> _Replay) {
    return TArray<int32>();
}

int32 UReplayBPLib::ConvertToWinTeamNo(TArray<uint8> Data) {
    return 0;
}

int32 UReplayBPLib::ConvertToSelectStageNo(TArray<uint8> Data) {
    return 0;
}

int32 UReplayBPLib::ConvertToPlType(int32 teamNo, int32 PartnerNo, TArray<uint8> Data) {
    return 0;
}

FMemberInfo UReplayBPLib::ConvertToMemberInfo(int32 Team, TArray<uint8> Data) {
    return FMemberInfo{};
}

EAutoMatch_Type UReplayBPLib::ConvertToMatchType(TArray<uint8> Data) {
    return EAutoMatch_Type::UNKNOWN;
}

int32 UReplayBPLib::ConvertToGemType(int32 teamNo, TArray<uint8> Data) {
    return 0;
}

EFinishType UReplayBPLib::ConvertToFinishType(int32 TeamID, int32 WinCount, TArray<uint8> Data) {
    return EFinishType::TYPE_NONE;
}

FDateTime UReplayBPLib::ConvertToDateTime(TArray<uint8> Data) {
    return FDateTime{};
}

bool UReplayBPLib::CallReserve(TArray<uint8> _Replay) {
    return false;
}

UReplayBPLib::UReplayBPLib() {
}


