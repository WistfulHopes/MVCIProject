#include "DuckModule.h"
#include "NetworkReplay.h"

bool UNetworkReplay::VerifyReplay(TArray<uint8> Replay) {
    return false;
}

void UNetworkReplay::Upload(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UNetworkReplay::SortByMaedume() {
}

void UNetworkReplay::SortByDateTime() {
}

UNetworkReplay* UNetworkReplay::SetupNetworkReplay() {
    return NULL;
}

void UNetworkReplay::SetSlot(int32 slot_index, const TArray<uint8>& Replay) {
}

bool UNetworkReplay::Reserve(int32 slot_index) {
    return false;
}

bool UNetworkReplay::IsValidSlot(int32 slot_index) {
    return false;
}

int32 UNetworkReplay::GetValidDataNum() {
    return 0;
}

TArray<uint8> UNetworkReplay::GetSlot(int32 slot_index) {
    return TArray<uint8>();
}

void UNetworkReplay::GetPlayerNameFromServer_Array(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<FReplayBytes>& replayArray) {
}

void UNetworkReplay::GetPlayerNameFromServer(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<uint8>& Replay) {
}

TArray<FString> UNetworkReplay::GetNameResult() {
    return TArray<FString>();
}

int32 UNetworkReplay::GetMySideFromReplay(TArray<uint8> Replay) {
    return 0;
}

void UNetworkReplay::FileSave() {
}

void UNetworkReplay::DownloadByUserId(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<uint8> UserId) {
}

void UNetworkReplay::DownloadByName(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FString& Name, const FString& Option) {
}

void UNetworkReplay::Download(UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool ForceDownload) {
}

int32 UNetworkReplay::ConvertToWinTeamNo(TArray<uint8> Replay) {
    return 0;
}

int32 UNetworkReplay::ConvertToTimeSetting(TArray<uint8> Replay) {
    return 0;
}

int32 UNetworkReplay::ConvertToSelectStageNo(TArray<uint8> Replay) {
    return 0;
}

int32 UNetworkReplay::ConvertToPlType(TArray<uint8> Replay, int32 teamNo, int32 PartnerNo) {
    return 0;
}

FMemberInfo UNetworkReplay::ConvertToMemberInfo(TArray<uint8> Replay, int32 Team) {
    return FMemberInfo{};
}

EAutoMatch_Type UNetworkReplay::ConvertToMatchType(TArray<uint8> Replay) {
    return EAutoMatch_Type::UNKNOWN;
}

int32 UNetworkReplay::ConvertToGemType(TArray<uint8> Replay, int32 teamNo) {
    return 0;
}

EFinishType UNetworkReplay::ConvertToFinishType(TArray<uint8> Replay, int32 TeamID, int32 WinCount) {
    return EFinishType::TYPE_NONE;
}

FDateTime UNetworkReplay::ConvertToDateTime(TArray<uint8> Replay) {
    return FDateTime{};
}

EBattleSettingDamage UNetworkReplay::ConvertToDamageSetting(TArray<uint8> Replay) {
    return EBattleSettingDamage::DAMAGE_LOWEST;
}

void UNetworkReplay::ClearSlot(int32 slot_index) {
}

void UNetworkReplay::ClearAutoSlot(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

int32 UNetworkReplay::AddSlotEx(const TArray<uint8>& Replay, const bool _EnableAutoUpload) {
    return 0;
}

bool UNetworkReplay::AddSlot(const TArray<uint8>& Replay) {
    return false;
}

UNetworkReplay::UNetworkReplay() {
    this->IsDownloadSucceed = false;
    this->IsUploadSucceed = false;
    this->IsUploadable = true;
}


