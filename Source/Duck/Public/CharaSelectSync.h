#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemDuck -ObjectName=MemberInfo -FallbackName=MemberInfo
#include "CharaSelectSync.generated.h"

class UCharaSelectSync;

UCLASS(Blueprintable)
class DUCK_API UCharaSelectSync : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnMoveStagteCursor, int32, stageNo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDisconnect);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_SevenParams(FOnDecideTeamSelect, int32, teamNo, int32, MainPlType, int32, MainCostumeNo, int32, MainColorNo, int32, SubPlType, int32, SubCostumeNo, int32, SubColorNo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDecideStage, int32, stageNo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnDecideMenu, int32, teamNo, int32, CostumeNo, int32, ColorNo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDecideGem, int32, teamNo, int32, Type);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FOnDecideCharaRandom, int32, teamNo, int32, PlType, int32, CostumeNo, int32, ColorNo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDecideChara, int32, teamNo, int32, Type);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDecideBattleSetting);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCancelMenu, int32, teamNo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCancelGem, int32, teamNo);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnCancelChara, int32, teamNo);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMoveStagteCursor OnMoveStagteCursor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideStage OnDecideStage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideChara OnDecideChara;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCancelChara OnCancelChara;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideMenu OnDecideMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCancelMenu OnCancelMenu;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideCharaRandom OnDecideCharaRandom;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideTeamSelect OnDecideTeamSelect;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideGem OnDecideGem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnCancelGem OnCancelGem;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDecideBattleSetting OnDecideBattleSetting;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisconnect OnDisconnect;
    
    UCharaSelectSync();
    UFUNCTION(BlueprintCallable)
    static UCharaSelectSync* SetupCharaSelectSync();
    
    UFUNCTION(BlueprintCallable)
    void SelfDisconnect();
    
    UFUNCTION(BlueprintCallable)
    void MoveStageCursor(int32 stageNo);
    
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
    
    UFUNCTION(BlueprintCallable)
    bool InitializeSpectate();
    
    UFUNCTION(BlueprintCallable)
    bool InitializeReplay();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTeam();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetSpectateStageNo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetReplayStageNo();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FMemberInfo GetMemberInfo(int32 Team);
    
    UFUNCTION(BlueprintCallable)
    void DecideTeamSelect(int32 teamNo, int32 MainPlType, int32 MainCostumeNo, int32 MainColorNo, int32 SubPlType, int32 SubCostumeNo, int32 SubColorNo);
    
    UFUNCTION(BlueprintCallable)
    void DecideStage(int32 stageNo);
    
    UFUNCTION(BlueprintCallable)
    void DecideMenu(int32 teamNo, int32 CostumeNo, int32 ColorNo);
    
    UFUNCTION(BlueprintCallable)
    void DecideGem(int32 teamNo, int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void DecideCharaRandom(int32 teamNo, int32 PlType, int32 CostumeNo, int32 ColorNo);
    
    UFUNCTION(BlueprintCallable)
    void DecideChara(int32 teamNo, int32 Type);
    
    UFUNCTION(BlueprintCallable)
    void DecideBattleSetting();
    
    UFUNCTION(BlueprintCallable)
    void CancelMenu(int32 teamNo);
    
    UFUNCTION(BlueprintCallable)
    void CancelGem(int32 teamNo);
    
    UFUNCTION(BlueprintCallable)
    void CancelChara(int32 teamNo);
    
    UFUNCTION(BlueprintCallable)
    void BPTick();
    
    UFUNCTION(BlueprintCallable)
    void Activate();
    
};

