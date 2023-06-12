#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemDuck -ObjectName=EAutoMatch_Type -FallbackName=EAutoMatch_Type
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemDuck -ObjectName=MemberInfo -FallbackName=MemberInfo
#include "EFinishType.h"
#include "ReplayBPLib.generated.h"

class UReplay;

UCLASS(Blueprintable)
class DUCK_API UReplayBPLib : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UReplayBPLib();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool VerifyReplay(TArray<uint8> Data);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool ReserveFromAssetRetValue(UReplay* _Replay);
    
    UFUNCTION(BlueprintCallable)
    static void ReserveFromAsset(UReplay* _Replay);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UReplay*> LoadAssetAll();
    
    UFUNCTION(BlueprintCallable)
    static UReplay* LoadAsset(int32 _ReplayIdx);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetUserRankFromAsset(UReplay* _Replay);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetUserRank(TArray<uint8> _Replay);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetUserNameArrayFromAsset(UReplay* _Replay);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FString> GetUserNameArray(TArray<uint8> _Replay);
    
    UFUNCTION(BlueprintCallable)
    static TArray<uint8> GetUserID(TArray<uint8> _Replay, int32 _PlNo);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetStoneIDArrayFromAsset(UReplay* _Replay);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetStoneIDArray(TArray<uint8> _Replay);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetResultFromAsset(UReplay* _Replay);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetResult(TArray<uint8> _Replay);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMatchTypeFromAsset(UReplay* _Replay);
    
    UFUNCTION(BlueprintCallable)
    static int32 GetMatchType(TArray<uint8> _Replay);
    
    UFUNCTION(BlueprintCallable)
    static FString GetDateFromAsset(UReplay* _Replay);
    
    UFUNCTION(BlueprintCallable)
    static FString GetDate(TArray<uint8> _Replay);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetCharaIDArrayFromAsset(UReplay* _Replay);
    
    UFUNCTION(BlueprintCallable)
    static TArray<int32> GetCharaIDArray(TArray<uint8> _Replay);
    
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertToWinTeamNo(TArray<uint8> Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertToSelectStageNo(TArray<uint8> Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertToPlType(int32 teamNo, int32 PartnerNo, TArray<uint8> Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMemberInfo ConvertToMemberInfo(int32 Team, TArray<uint8> Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAutoMatch_Type ConvertToMatchType(TArray<uint8> Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertToGemType(int32 teamNo, TArray<uint8> Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFinishType ConvertToFinishType(int32 TeamID, int32 WinCount, TArray<uint8> Data);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime ConvertToDateTime(TArray<uint8> Data);
    
public:
    UFUNCTION(BlueprintCallable)
    static bool CallReserve(TArray<uint8> _Replay);
    
};

