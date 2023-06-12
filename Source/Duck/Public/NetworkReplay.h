#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=DateTime -FallbackName=DateTime
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemDuck -ObjectName=EAutoMatch_Type -FallbackName=EAutoMatch_Type
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemDuck -ObjectName=MemberInfo -FallbackName=MemberInfo
#include "EBattleSettingDamage.h"
#include "EFinishType.h"
#include "ReplayBytes.h"
#include "NetworkReplay.generated.h"

class UNetworkReplay;

UCLASS(Blueprintable)
class DUCK_API UNetworkReplay : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsDownloadSucceed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUploadSucceed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUploadable;
    
    UNetworkReplay();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool VerifyReplay(TArray<uint8> Replay);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void Upload(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    void SortByMaedume();
    
    UFUNCTION(BlueprintCallable)
    void SortByDateTime();
    
    UFUNCTION(BlueprintCallable)
    static UNetworkReplay* SetupNetworkReplay();
    
    UFUNCTION(BlueprintCallable)
    void SetSlot(int32 slot_index, const TArray<uint8>& Replay);
    
    UFUNCTION(BlueprintCallable)
    bool Reserve(int32 slot_index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsValidSlot(int32 slot_index);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetValidDataNum();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<uint8> GetSlot(int32 slot_index);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void GetPlayerNameFromServer_Array(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UPARAM(Ref) TArray<FReplayBytes>& replayArray);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void GetPlayerNameFromServer(UObject* WorldContextObject, FLatentActionInfo LatentInfo, UPARAM(Ref) TArray<uint8>& Replay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FString> GetNameResult();
    
    UFUNCTION(BlueprintCallable)
    int32 GetMySideFromReplay(TArray<uint8> Replay);
    
    UFUNCTION(BlueprintCallable)
    void FileSave();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void DownloadByUserId(UObject* WorldContextObject, FLatentActionInfo LatentInfo, TArray<uint8> UserId);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void DownloadByName(UObject* WorldContextObject, FLatentActionInfo LatentInfo, const FString& Name, const FString& Option);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void Download(UObject* WorldContextObject, FLatentActionInfo LatentInfo, bool ForceDownload);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertToWinTeamNo(TArray<uint8> Replay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertToTimeSetting(TArray<uint8> Replay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertToSelectStageNo(TArray<uint8> Replay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertToPlType(TArray<uint8> Replay, int32 teamNo, int32 PartnerNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FMemberInfo ConvertToMemberInfo(TArray<uint8> Replay, int32 Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EAutoMatch_Type ConvertToMatchType(TArray<uint8> Replay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 ConvertToGemType(TArray<uint8> Replay, int32 teamNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EFinishType ConvertToFinishType(TArray<uint8> Replay, int32 TeamID, int32 WinCount);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FDateTime ConvertToDateTime(TArray<uint8> Replay);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static EBattleSettingDamage ConvertToDamageSetting(TArray<uint8> Replay);
    
    UFUNCTION(BlueprintCallable)
    void ClearSlot(int32 slot_index);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void ClearAutoSlot(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable)
    int32 AddSlotEx(const TArray<uint8>& Replay, const bool _EnableAutoUpload);
    
    UFUNCTION(BlueprintCallable)
    bool AddSlot(const TArray<uint8>& Replay);
    
};

