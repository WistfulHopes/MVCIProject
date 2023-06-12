#pragma once
#include "DuckModule.h"
#include "EOnlineDataTypes.h"
#include "NetworkInterfaceDuck.h"
#include "ProfileCardData.h"
#include "UniqueIdElem.h"
#include "OnlineStorageInterfaceDuck.generated.h"

class UObject;

UCLASS(Blueprintable)
class DUCK_API UOnlineStorageInterfaceDuck : public UNetworkInterfaceDuck {
    GENERATED_BODY()
public:
    UOnlineStorageInterfaceDuck();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void WriteProfileCardRequestSelf(UObject* WorldContextObject, FLatentActionInfo LatentInfo, FProfileCardData Info);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void SetGameProgressRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void ResetStorageReqestSuccess();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ReadProfileCardRequestSelf(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void ReadProfileCardRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<uint8> UserId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsStorageReqestSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 IsGetNameReqSuccess();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FProfileCardData getReadProfileCardData();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 getOnlineGameData();
    
    UFUNCTION(BlueprintCallable)
    static void GetNameFromUniqueIdReq(TArray<FUniqueIdElem> uniqueIdArray);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static TArray<FString> GetNameArray();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetGameProgressRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetGameDataRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EOnlineDataTypes types);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void GetContestInfo(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void DeleteGameDataRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EOnlineDataTypes types);
    
    UFUNCTION(BlueprintCallable)
    static void AppendGameProgressToSaveData();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void AddGameDataRequest(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EOnlineDataTypes types, int32 Value);
    
};

