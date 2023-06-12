#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemDuck -ObjectName=EAutoMatch_Type -FallbackName=EAutoMatch_Type
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemDuck -ObjectName=MemberInfo -FallbackName=MemberInfo
#include "EFinishType.h"
#include "Replay.generated.h"

UCLASS(Blueprintable)
class DUCK_API UReplay : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Data;
    
    UReplay();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool VerifyReplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ConvertToWinTeamNo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ConvertToSelectStageNo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ConvertToPlType(int32 teamNo, int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMemberInfo ConvertToMemberInfo(int32 Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EAutoMatch_Type ConvertToMatchType();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 ConvertToGemType(int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFinishType ConvertToFinishType(int32 TeamID, int32 WinCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FDateTime ConvertToDateTime();
    
};

