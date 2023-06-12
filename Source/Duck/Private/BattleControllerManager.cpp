#include "DuckModule.h"
#include "BattleControllerManager.h"

void UBattleControllerManager::SetPlayerControllerNum(int32 PlayerNum, int32 ControllerNum) {
}

void UBattleControllerManager::SetComputerControll(int32 PlayerNum) {
}

void UBattleControllerManager::ResetPlayerControllerNumber() {
}

APlayerController* UBattleControllerManager::GetPlayerController_FronPlayerNo(UObject* WorldContextObject, int32 PlayerNum) {
    return NULL;
}

APlayerController* UBattleControllerManager::GetPlayerController_FronLocalPlayerNo(UObject* WorldContextObject, int32 PlayerNum) {
    return NULL;
}

UBattleControllerManager* UBattleControllerManager::GetInstanceExec() {
    return NULL;
}

UBattleControllerManager* UBattleControllerManager::GetInstance() {
    return NULL;
}

FPlayerControllInfo UBattleControllerManager::GetControllerInfo(int32 PlayerNum) {
    return FPlayerControllInfo{};
}

APlayerController* UBattleControllerManager::Get2pPlayerController(UObject* WorldContextObject) {
    return NULL;
}

APlayerController* UBattleControllerManager::Get1pPlayerController(UObject* WorldContextObject) {
    return NULL;
}

UBattleControllerManager::UBattleControllerManager() {
}


