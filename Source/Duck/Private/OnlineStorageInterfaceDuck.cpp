#include "DuckModule.h"
#include "OnlineStorageInterfaceDuck.h"

void UOnlineStorageInterfaceDuck::WriteProfileCardRequestSelf(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FProfileCardData Info) {
}

void UOnlineStorageInterfaceDuck::SetGameProgressRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UOnlineStorageInterfaceDuck::ResetStorageReqestSuccess() {
}

void UOnlineStorageInterfaceDuck::ReadProfileCardRequestSelf(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UOnlineStorageInterfaceDuck::ReadProfileCardRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<uint8> UserId) {
}

bool UOnlineStorageInterfaceDuck::IsStorageReqestSuccess() {
    return false;
}

int32 UOnlineStorageInterfaceDuck::IsGetNameReqSuccess() {
    return 0;
}

FProfileCardData UOnlineStorageInterfaceDuck::getReadProfileCardData() {
    return FProfileCardData{};
}

int32 UOnlineStorageInterfaceDuck::getOnlineGameData() {
    return 0;
}

void UOnlineStorageInterfaceDuck::GetNameFromUniqueIdReq(TArray<FUniqueIdElem> uniqueIdArray) {
}

TArray<FString> UOnlineStorageInterfaceDuck::GetNameArray() {
    return TArray<FString>();
}

void UOnlineStorageInterfaceDuck::GetGameProgressRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UOnlineStorageInterfaceDuck::GetGameDataRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EOnlineDataTypes types) {
}

void UOnlineStorageInterfaceDuck::GetContestInfo(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void UOnlineStorageInterfaceDuck::DeleteGameDataRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EOnlineDataTypes types) {
}

void UOnlineStorageInterfaceDuck::AppendGameProgressToSaveData() {
}

void UOnlineStorageInterfaceDuck::AddGameDataRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EOnlineDataTypes types, int32 Value) {
}

UOnlineStorageInterfaceDuck::UOnlineStorageInterfaceDuck() {
}


