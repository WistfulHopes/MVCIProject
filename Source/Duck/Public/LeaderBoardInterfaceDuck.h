#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemDuck -ObjectName=ELeaderBoardID -FallbackName=ELeaderBoardID
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemDuck -ObjectName=RankingInfoDuck -FallbackName=RankingInfoDuck
#include "ELearderBoardKind.h"
#include "NetworkInterfaceDuck.h"
#include "RankingCache.h"
#include "LeaderBoardInterfaceDuck.generated.h"

class UObject;

UCLASS(Blueprintable)
class DUCK_API ULeaderBoardInterfaceDuck : public UNetworkInterfaceDuck {
    GENERATED_BODY()
public:
    ULeaderBoardInterfaceDuck();
    UFUNCTION(BlueprintCallable)
    static void SetRankingKind(ELearderBoardKind Kind);
    
    UFUNCTION(BlueprintCallable)
    static void SetRankCacheData(FRankingCache cache);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void RegisterScoreRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ELeaderBoardID ID, TArray<FRankingInfoDuck> Info);
    
    UFUNCTION(BlueprintCallable)
    static bool IsValidData(int32 index, int32 Rank);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsRankingReqestSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRankingInfoDuck> GetStatsScoreList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FRankingInfoDuck> GetScoreList();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetScoreByStats(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ELeaderBoardID ID);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetScoreBySelfRangeRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ELeaderBoardID ID, int32 Range);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetScoreByRangeRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ELeaderBoardID ID, int32 offset, int32 Max);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetScoreByFriendList(UObject* WorldContextObject, FLatentActionInfo LatentInfo, ELeaderBoardID ID, int32 offset, int32 Max);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRankMax();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetRankKind();
    
    UFUNCTION(BlueprintCallable)
    static FRankingCache GetRankCacheData();
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMyRank();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMAX();
    
};

