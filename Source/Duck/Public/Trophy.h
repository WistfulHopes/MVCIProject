#pragma once
#include "DuckModule.h"
#include "EDuckAchievementID.h"
#include "NetworkInterfaceDuck.h"
#include "Trophy.generated.h"

UCLASS(Blueprintable)
class DUCK_API UTrophy : public UNetworkInterfaceDuck {
    GENERATED_BODY()
public:
    UTrophy();
    UFUNCTION(BlueprintCallable)
    static void RewardAchievement(EDuckAchievementID ID);
    
    UFUNCTION(BlueprintCallable)
    static bool IsGetStatusSuccess();
    
    UFUNCTION(BlueprintCallable)
    static void GetAchieveStatusReq(TArray<int32> ID);
    
    UFUNCTION(BlueprintCallable)
    static void CountUpAchievement(int32 ID, int32 Value);
    
    UFUNCTION(BlueprintCallable)
    static void CheckAndSetRewardAchievement(EDuckAchievementID ID, int32 Value);
    
};

