#include "DuckModule.h"
#include "InGameRewardBPLib.h"

void UInGameRewardBPLib::OpenProfileCardBG(int32 _Index) {
}

void UInGameRewardBPLib::OpenHonor(int32 _Index) {
}

void UInGameRewardBPLib::OpenColor(int32 _Index) {
}

bool UInGameRewardBPLib::OpenCheckSlectStage() {
    return false;
}

EInGameRewardRetType UInGameRewardBPLib::OpenCheckProfStage(int32 _ProfBGID) {
    return EInGameRewardRetType::INVALID;
}

TArray<int32> UInGameRewardBPLib::OpenCheckHonor() {
    return TArray<int32>();
}

TArray<int32> UInGameRewardBPLib::OpenCheckDatabaseStage() {
    return TArray<int32>();
}

TArray<int32> UInGameRewardBPLib::OpenCheckDatabaseChara() {
    return TArray<int32>();
}

EInGameRewardRetType UInGameRewardBPLib::OpenCheckColor(int32 _CharaId, int32 _CostumeNo, int32 _ColorNo) {
    return EInGameRewardRetType::INVALID;
}

TArray<FCollectionArtwarkNew> UInGameRewardBPLib::OpenCheckArtwark() {
    return TArray<FCollectionArtwarkNew>();
}

void UInGameRewardBPLib::OpenCheckAchievement(bool _CheckHonor, bool _CheckColor, bool _CheckProf) {
}

TArray<int32> UInGameRewardBPLib::NoticeCheckDLCChara() {
    return TArray<int32>();
}

TArray<int32> UInGameRewardBPLib::NoticeCheckCollectionMovie() {
    return TArray<int32>();
}

TArray<int32> UInGameRewardBPLib::NoticeCheckArrangeCostume02() {
    return TArray<int32>();
}

TArray<int32> UInGameRewardBPLib::NoticeCheckArrangeCostume() {
    return TArray<int32>();
}

bool UInGameRewardBPLib::IsSpecialHonor(int32 _HonorID) {
    return false;
}

bool UInGameRewardBPLib::IsOpenProfileCardBG(int32 _Index) {
    return false;
}

bool UInGameRewardBPLib::IsOpenHonor(int32 _Index) {
    return false;
}

bool UInGameRewardBPLib::IsOpenColorDirect(int32 _Index) {
    return false;
}

bool UInGameRewardBPLib::IsOpenColor(int32 _CharaId, int32 _CostumeNo, int32 _ColorNo) {
    return false;
}

bool UInGameRewardBPLib::IsExistNew_Artwark() {
    return false;
}

int32 UInGameRewardBPLib::GetProfileCardBGNum() {
    return 0;
}

int32 UInGameRewardBPLib::GetProfileCardBGFlagNum() {
    return 0;
}

int32 UInGameRewardBPLib::GetHonorNum() {
    return 0;
}

bool UInGameRewardBPLib::GetHonorMsgData(int32 _FlagIndex, FHonorMsgDataCSV& OutRow, bool WithoutTitle) {
    return false;
}

int32 UInGameRewardBPLib::GetColorNum() {
    return 0;
}

int32 UInGameRewardBPLib::GetCharaColorNumArange() {
    return 0;
}

int32 UInGameRewardBPLib::GetCharaColorNum() {
    return 0;
}

bool UInGameRewardBPLib::FindHonorMsgDataByID(int32 _HonorID, FHonorMsgDataCSV& OutRow) {
    return false;
}

int32 UInGameRewardBPLib::ConvertHonorIDToFlagIndex(int32 _HonorID) {
    return 0;
}

void UInGameRewardBPLib::CheckReward() {
}

void UInGameRewardBPLib::ALLOpen(bool _Open) {
}

UInGameRewardBPLib::UInGameRewardBPLib() {
}


