#pragma once
#include "DuckModule.h"
#include "DuckBaseSystem.h"
#include "EFadeType.h"
#include "EGameMode.h"
#include "ELoadMapPriority.h"
#include "GameFlowSystem.generated.h"

class AFlowBase;
class UErrorManagerDuck;
class UGameFlowSystem;
class UInvite;
class ULoadAssets;
class ULobby;
class UObject;
class UUserWidget;

UCLASS(Blueprintable)
class DUCK_API UGameFlowSystem : public UDuckBaseSystem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* mpLoadWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* mpSaveWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* mpLobbySmallMemberListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* mpTransitionMapWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULobby* mpLobbyObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* mpFade;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULoadAssets*> mTravelLoadAssets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UInvite* mpInviteObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UErrorManagerDuck* mpNetworkErrorManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* mpNetworkErrorObj;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUserWidget* mpPlayGoProgressWidget;
    
public:
    UGameFlowSystem();
    UFUNCTION(BlueprintCallable)
    void TravelMapWithGetWorld(int32 InitialState, int32 TravelOption);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void TravelMapByTemporary(UObject* WorldContextObject, int32 InitialState, int32 TravelOption);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    void TravelMap(UObject* WorldContextObject, int32 InitialState, int32 TravelOption);
    
    UFUNCTION(BlueprintCallable)
    void SpawnSmallMemberList();
    
    UFUNCTION(BlueprintCallable)
    UUserWidget* SpawnSaving(int32 ZOrder);
    
    UFUNCTION(BlueprintCallable)
    void SpawnPlayGoProgress();
    
    UFUNCTION(BlueprintCallable)
    void SpawnLoading();
    
    UFUNCTION(BlueprintCallable)
    void SpawnFade(EFadeType Type, bool FlgPIECreate, int32 Option, bool FlgWait, bool FlgNoDestroy);
    
    UFUNCTION(BlueprintCallable)
    void ShowAccountPickerMainManu();
    
    UFUNCTION(BlueprintCallable)
    void SetWidgetToTransitionMap(UUserWidget* pWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetupPlayGoComplete();
    
    UFUNCTION(BlueprintCallable)
    void SetTravelFromBattleMenu(bool FlgOn);
    
    UFUNCTION(BlueprintCallable)
    void SetTempReturn();
    
    UFUNCTION(BlueprintCallable)
    void SetTemporaryGameMode();
    
    UFUNCTION(BlueprintCallable)
    void SetSuppressTraveling(bool FlgOn);
    
    UFUNCTION(BlueprintCallable)
    void SetPauseByGrabWindowEnable(bool FlgEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetNetworkErrorObj(UObject* Obj);
    
    UFUNCTION(BlueprintCallable)
    void SetLoseBattle(bool FlgOn);
    
    UFUNCTION(BlueprintCallable)
    void SetLobbyFlg(bool Flg);
    
    UFUNCTION(BlueprintCallable)
    void SetLastFocusIndexInLobbySearch(int32 index);
    
    UFUNCTION(BlueprintCallable)
    void SetIsStartAutoRematch(bool B);
    
    UFUNCTION(BlueprintCallable)
    void SetInviteObj(UInvite* Obj);
    
    UFUNCTION(BlueprintCallable)
    void SetInputDisableByAccountPicker(bool FlgOn);
    
    UFUNCTION(BlueprintCallable)
    void SetInitMainMenuEvenOnce();
    
    UFUNCTION(BlueprintCallable)
    void SetGameMode(EGameMode Mode, bool IsLoadPack);
    
    UFUNCTION(BlueprintCallable)
    void SetEnterMainMenuEvenOnce();
    
    UFUNCTION(BlueprintCallable)
    bool SetActiveUser(int32 padNo);
    
    UFUNCTION(BlueprintCallable)
    void RemoveTransitionMapWidget();
    
    UFUNCTION(BlueprintCallable)
    void OnSaveEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnLoadEnd();
    
    UFUNCTION(BlueprintCallable)
    void OnFadeEnd();
    
    UFUNCTION(BlueprintCallable)
    bool LoadMapWithPriority(const FString& MapName, bool FlgFullPath, const ELoadMapPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    bool LoadMapWithGameMode(const FString& MapName, const FString& GameModeName, bool FlgFullPath);
    
    UFUNCTION(BlueprintCallable)
    bool LoadMapByTemporary();
    
    UFUNCTION(BlueprintCallable)
    bool LoadMap(const FString& MapName, bool FlgFullPath);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTravelFromBattleMenu() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTravelExecEnable();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTravelComplete(bool CkFlowEnd) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTempReturn();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSpawnedAccountPicker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOnlineTrainingNow();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoseBattle() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLoadMapEnable() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInviteWait();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsInputDisableByAccountPicker() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeExist() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsFadeEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEnterMainMenuEvenOnce() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEndLoadMap() const;
    
    UFUNCTION(BlueprintCallable)
    void InviteWaitStart();
    
    UFUNCTION(BlueprintCallable)
    void InviteWaitEnd();
    
    UFUNCTION(BlueprintCallable)
    void InformAccountPickerEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameMode GetTemporaryGameMode();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetSmallMemberList();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetSavingWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetNetworkErrorObj() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UErrorManagerDuck* GetNetworkErrorManager() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ULobby* GetLobbyObj();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetLobbyFlg() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUserWidget* GetLoadingWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetLastFocusIndexInLobbySearch();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UInvite* GetInviteObj() const;
    
    UFUNCTION(BlueprintCallable)
    static UGameFlowSystem* GetInstanceExec();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UGameFlowSystem* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetInitialStateNo() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EGameMode GetGameMode() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFlowBase* GetFlowBP() const;
    
    UFUNCTION(BlueprintCallable)
    void DestroySmallMemberList();
    
    UFUNCTION(BlueprintCallable)
    void DestroySaveWidget();
    
    UFUNCTION(BlueprintCallable)
    void DestroyPlayGoProgress();
    
    UFUNCTION(BlueprintCallable)
    void DestroyLoadWidget();
    
    UFUNCTION(BlueprintCallable)
    void DestroyFade(bool IsImmediate, int32 Option, int32 TargetFadeType);
    
    UFUNCTION(BlueprintCallable)
    void CancelLoadMapWithPriority(const ELoadMapPriority Priority);
    
    UFUNCTION(BlueprintCallable)
    void CancelLoadMap();
    
};

