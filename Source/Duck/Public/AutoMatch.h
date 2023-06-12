#pragma once
#include "DuckModule.h"
#include "EAutoMatchSelect.h"
#include "EAutoMatch_QoS.h"
#include "EAutoMatch_Type.h"
#include "MemberInfo.h"
#include "AutoMatch.generated.h"

class UAutoMatch;

UCLASS(Blueprintable)
class DUCK_API UAutoMatch : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartJoin);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FStartCreate);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAutoMatchFailureByInvite);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FAutoMatchFailure);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutoMatchFailure AutoMatchFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAutoMatchFailureByInvite AutoMatchFailureByInvite;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartJoin StartJoin;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartCreate StartCreate;
    
    UAutoMatch();
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void StartAutoMatch(UObject* WorldContextObject, FLatentActionInfo LatentInfo, EAutoMatch_Type Type, EAutoMatch_QoS QoS, bool SameRegion, float Timeout);
    
    UFUNCTION(BlueprintCallable)
    static void SetupAutoMatchSelect(EAutoMatchSelect select);
    
    UFUNCTION(BlueprintCallable)
    static UAutoMatch* SetupAutoMatch();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void RequestStartBattle(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    static void PauseAutoMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsStartBattleSucceeded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoMatchTimeOut();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoMatchSucceeded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoMatchRunning();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoMatchRookieError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoMatchFailure();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsAutoMatchContextError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMemberInfo GetMemberInfo(int32 Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAutoMatch_Type GetMatchType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCheckResult();
    
    UFUNCTION(BlueprintCallable)
    static void CheckMultiPlayPermission();
    
    UFUNCTION(BlueprintCallable)
    static void CancelAutoMatch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BattlePointToRank(int32 battle_point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BattlePointToProgress(int32 battle_point);
    
};

