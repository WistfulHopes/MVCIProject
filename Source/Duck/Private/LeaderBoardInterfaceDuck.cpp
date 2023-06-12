#include "DuckModule.h"
#include "LeaderBoardInterfaceDuck.h"

void ULeaderBoardInterfaceDuck::SetRankingKind(ELearderBoardKind Kind) {
}

void ULeaderBoardInterfaceDuck::SetRankCacheData(FRankingCache cache) {
}

void ULeaderBoardInterfaceDuck::RegisterScoreRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ELeaderBoardID ID, TArray<FRankingInfoDuck> Info) {
}

bool ULeaderBoardInterfaceDuck::IsValidData(int32 index, int32 Rank) {
    return false;
}

bool ULeaderBoardInterfaceDuck::IsRankingReqestSuccess() {
    return false;
}

TArray<FRankingInfoDuck> ULeaderBoardInterfaceDuck::GetStatsScoreList() {
    return TArray<FRankingInfoDuck>();
}

TArray<FRankingInfoDuck> ULeaderBoardInterfaceDuck::GetScoreList() {
    return TArray<FRankingInfoDuck>();
}

void ULeaderBoardInterfaceDuck::GetScoreByStats(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ELeaderBoardID ID) {
}

void ULeaderBoardInterfaceDuck::GetScoreBySelfRangeRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ELeaderBoardID ID, int32 Range) {
}

void ULeaderBoardInterfaceDuck::GetScoreByRangeRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ELeaderBoardID ID, int32 offset, int32 Max) {
}

void ULeaderBoardInterfaceDuck::GetScoreByFriendList(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ELeaderBoardID ID, int32 offset, int32 Max) {
}

int32 ULeaderBoardInterfaceDuck::GetRankMax() {
    return 0;
}

int32 ULeaderBoardInterfaceDuck::GetRankKind() {
    return 0;
}

FRankingCache ULeaderBoardInterfaceDuck::GetRankCacheData() {
    return FRankingCache{};
}

int32 ULeaderBoardInterfaceDuck::GetMyRank() {
    return 0;
}

int32 ULeaderBoardInterfaceDuck::GetMAX() {
    return 0;
}

ULeaderBoardInterfaceDuck::ULeaderBoardInterfaceDuck() {
}


