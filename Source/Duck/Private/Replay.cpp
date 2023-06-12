#include "DuckModule.h"
#include "Replay.h"

bool UReplay::VerifyReplay() {
    return false;
}

int32 UReplay::ConvertToWinTeamNo() {
    return 0;
}

int32 UReplay::ConvertToSelectStageNo() {
    return 0;
}

int32 UReplay::ConvertToPlType(int32 teamNo, int32 PartnerNo) {
    return 0;
}

FMemberInfo UReplay::ConvertToMemberInfo(int32 Team) {
    return FMemberInfo{};
}

EAutoMatch_Type UReplay::ConvertToMatchType() {
    return EAutoMatch_Type::UNKNOWN;
}

int32 UReplay::ConvertToGemType(int32 teamNo) {
    return 0;
}

EFinishType UReplay::ConvertToFinishType(int32 TeamID, int32 WinCount) {
    return EFinishType::TYPE_NONE;
}

FDateTime UReplay::ConvertToDateTime() {
    return FDateTime{};
}

UReplay::UReplay() {
}


