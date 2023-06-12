#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LatentActionInfo -FallbackName=LatentActionInfo
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemDuck -ObjectName=MemberInfo -FallbackName=MemberInfo
#include "ResultSync.generated.h"

class UResultSync;

UCLASS(Blueprintable)
class DUCK_API UResultSync : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSelectItem, int32, itemNo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRequestRematch);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnRequestCharaSelect);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnRequestBattleEnd, int32, itemNo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisconnect);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDecideRematch);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDecideCharaSelect);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDecideBattleEnd);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCancelRematch);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCancelCharaSelect);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnsCancelRematch);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAnsCancelCharaSelect);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestCharaSelect OnRequestCharaSelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCancelCharaSelect OnCancelCharaSelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnsCancelCharaSelect OnAnsCancelCharaSelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestRematch OnRequestRematch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCancelRematch OnCancelRematch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAnsCancelRematch OnAnsCancelRematch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideCharaSelect OnDecideCharaSelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideRematch OnDecideRematch;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisconnect OnDisconnect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSelectItem OnSelectItem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnRequestBattleEnd OnRequestBattleEnd;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideBattleEnd OnDecideBattleEnd;
    
    UResultSync();
    UFUNCTION(BlueprintCallable)
    static UResultSync* SetupResultSync();
    
    UFUNCTION(BlueprintCallable)
    void SelectItem(int32 itemNo);
    
    UFUNCTION(BlueprintCallable)
    void RequestRematch();
    
    UFUNCTION(BlueprintCallable)
    void RequestCharaSelect();
    
    UFUNCTION(BlueprintCallable)
    void RequestBattleEnd(int32 itemNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpectator();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsReplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnline();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnectError();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsCompetitor();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeamInLastBattle();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetOppnentSelect(bool& isSelected, int32& itemNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetMySelect(bool& isSelected, int32& itemNo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMemberInfo GetMemberInfo(int32 Team);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBattlePointOld();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetBattlePointNew();
    
    UFUNCTION(BlueprintCallable)
    void Disconnect();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CancelRematch(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    void CancelCharaSelect(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 BattlePointToRank(int32 battle_point);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static float BattlePointToProgress(int32 battle_point);
    
};

