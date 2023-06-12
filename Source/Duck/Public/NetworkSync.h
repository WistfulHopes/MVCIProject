#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemDuck -ObjectName=EAutoMatch_Type -FallbackName=EAutoMatch_Type
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemDuck -ObjectName=MemberInfo -FallbackName=MemberInfo
#include "NetworkSync.generated.h"

class UNetworkSync;

UCLASS(Blueprintable)
class DUCK_API UNetworkSync : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSyncError);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSpectateError);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSyncError OnSyncError;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSyncError OnSpectateError;
    
    UNetworkSync();
    UFUNCTION(BlueprintCallable)
    static UNetworkSync* SetupNetworkSync();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSyncError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpectator();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpectateError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompetitor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMemberInfo GetMemberInfo(int32 Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAutoMatch_Type GetMatchType();
    
};

