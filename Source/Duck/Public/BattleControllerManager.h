#pragma once
#include "DuckModule.h"
#include "DuckBaseSystem.h"
#include "PlayerControllInfo.h"
#include "BattleControllerManager.generated.h"

class APlayerController;
class UBattleControllerManager;
class UObject;

UCLASS(Blueprintable)
class DUCK_API UBattleControllerManager : public UDuckBaseSystem {
    GENERATED_BODY()
public:
    UBattleControllerManager();
    UFUNCTION(BlueprintCallable)
    void SetPlayerControllerNum(int32 PlayerNum, int32 ControllerNum);
    
    UFUNCTION(BlueprintCallable)
    void SetComputerControll(int32 PlayerNum);
    
    UFUNCTION(BlueprintCallable)
    void ResetPlayerControllerNumber();
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    APlayerController* GetPlayerController_FronPlayerNo(UObject* WorldContextObject, int32 PlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    APlayerController* GetPlayerController_FronLocalPlayerNo(UObject* WorldContextObject, int32 PlayerNum);
    
    UFUNCTION(BlueprintCallable)
    static UBattleControllerManager* GetInstanceExec();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UBattleControllerManager* GetInstance();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FPlayerControllInfo GetControllerInfo(int32 PlayerNum);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    APlayerController* Get2pPlayerController(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    APlayerController* Get1pPlayerController(UObject* WorldContextObject);
    
};

