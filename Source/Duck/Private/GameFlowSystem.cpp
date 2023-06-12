#include "DuckModule.h"
#include "GameFlowSystem.h"

void UGameFlowSystem::TravelMapWithGetWorld(int32 InitialState, int32 TravelOption) {
}

void UGameFlowSystem::TravelMapByTemporary(UObject* WorldContextObject, int32 InitialState, int32 TravelOption) {
}

void UGameFlowSystem::TravelMap(UObject* WorldContextObject, int32 InitialState, int32 TravelOption) {
}

void UGameFlowSystem::SpawnSmallMemberList() {
}

UUserWidget* UGameFlowSystem::SpawnSaving(int32 ZOrder) {
    return NULL;
}

void UGameFlowSystem::SpawnPlayGoProgress() {
}

void UGameFlowSystem::SpawnLoading() {
}

void UGameFlowSystem::SpawnFade(EFadeType Type, bool FlgPIECreate, int32 Option, bool FlgWait, bool FlgNoDestroy) {
}

void UGameFlowSystem::ShowAccountPickerMainManu() {
}

void UGameFlowSystem::SetWidgetToTransitionMap(UUserWidget* pWidget) {
}

void UGameFlowSystem::SetupPlayGoComplete() {
}

void UGameFlowSystem::SetTravelFromBattleMenu(bool FlgOn) {
}

void UGameFlowSystem::SetTempReturn() {
}

void UGameFlowSystem::SetTemporaryGameMode() {
}

void UGameFlowSystem::SetSuppressTraveling(bool FlgOn) {
}

void UGameFlowSystem::SetPauseByGrabWindowEnable(bool FlgEnable) {
}

void UGameFlowSystem::SetNetworkErrorObj(UObject* Obj) {
}

void UGameFlowSystem::SetLoseBattle(bool FlgOn) {
}

void UGameFlowSystem::SetLobbyFlg(bool Flg) {
}

void UGameFlowSystem::SetLastFocusIndexInLobbySearch(int32 index) {
}

void UGameFlowSystem::SetIsStartAutoRematch(bool B) {
}

void UGameFlowSystem::SetInviteObj(UInvite* Obj) {
}

void UGameFlowSystem::SetInputDisableByAccountPicker(bool FlgOn) {
}

void UGameFlowSystem::SetInitMainMenuEvenOnce() {
}

void UGameFlowSystem::SetGameMode(EGameMode Mode, bool IsLoadPack) {
}

void UGameFlowSystem::SetEnterMainMenuEvenOnce() {
}

bool UGameFlowSystem::SetActiveUser(int32 padNo) {
    return false;
}

void UGameFlowSystem::RemoveTransitionMapWidget() {
}

void UGameFlowSystem::OnSaveEnd() {
}

void UGameFlowSystem::OnLoadEnd() {
}

void UGameFlowSystem::OnFadeEnd() {
}

bool UGameFlowSystem::LoadMapWithPriority(const FString& MapName, bool FlgFullPath, const ELoadMapPriority Priority) {
    return false;
}

bool UGameFlowSystem::LoadMapWithGameMode(const FString& MapName, const FString& GameModeName, bool FlgFullPath) {
    return false;
}

bool UGameFlowSystem::LoadMapByTemporary() {
    return false;
}

bool UGameFlowSystem::LoadMap(const FString& MapName, bool FlgFullPath) {
    return false;
}

bool UGameFlowSystem::IsTravelFromBattleMenu() const {
    return false;
}

bool UGameFlowSystem::IsTravelExecEnable() {
    return false;
}

bool UGameFlowSystem::IsTravelComplete(bool CkFlowEnd) const {
    return false;
}

bool UGameFlowSystem::IsTempReturn() {
    return false;
}

bool UGameFlowSystem::IsSpawnedAccountPicker() const {
    return false;
}

bool UGameFlowSystem::IsOnlineTrainingNow() {
    return false;
}

bool UGameFlowSystem::IsLoseBattle() const {
    return false;
}

bool UGameFlowSystem::IsLoadMapEnable() const {
    return false;
}

bool UGameFlowSystem::IsInviteWait() {
    return false;
}

bool UGameFlowSystem::IsInputDisableByAccountPicker() const {
    return false;
}

bool UGameFlowSystem::IsFadeExist() const {
    return false;
}

bool UGameFlowSystem::IsFadeEnd() const {
    return false;
}

bool UGameFlowSystem::IsEnterMainMenuEvenOnce() const {
    return false;
}

bool UGameFlowSystem::IsEndLoadMap() const {
    return false;
}

void UGameFlowSystem::InviteWaitStart() {
}

void UGameFlowSystem::InviteWaitEnd() {
}

void UGameFlowSystem::InformAccountPickerEnd() {
}

EGameMode UGameFlowSystem::GetTemporaryGameMode() {
    return EGameMode::GAME_MODE_NONE;
}

UUserWidget* UGameFlowSystem::GetSmallMemberList() {
    return NULL;
}

UUserWidget* UGameFlowSystem::GetSavingWidget() const {
    return NULL;
}

UObject* UGameFlowSystem::GetNetworkErrorObj() const {
    return NULL;
}

UErrorManagerDuck* UGameFlowSystem::GetNetworkErrorManager() const {
    return NULL;
}

ULobby* UGameFlowSystem::GetLobbyObj() {
    return NULL;
}

bool UGameFlowSystem::GetLobbyFlg() const {
    return false;
}

UUserWidget* UGameFlowSystem::GetLoadingWidget() const {
    return NULL;
}

int32 UGameFlowSystem::GetLastFocusIndexInLobbySearch() {
    return 0;
}

UInvite* UGameFlowSystem::GetInviteObj() const {
    return NULL;
}

UGameFlowSystem* UGameFlowSystem::GetInstanceExec() {
    return NULL;
}

UGameFlowSystem* UGameFlowSystem::GetInstance() {
    return NULL;
}

int32 UGameFlowSystem::GetInitialStateNo() const {
    return 0;
}

EGameMode UGameFlowSystem::GetGameMode() const {
    return EGameMode::GAME_MODE_NONE;
}

AFlowBase* UGameFlowSystem::GetFlowBP() const {
    return NULL;
}

void UGameFlowSystem::DestroySmallMemberList() {
}

void UGameFlowSystem::DestroySaveWidget() {
}

void UGameFlowSystem::DestroyPlayGoProgress() {
}

void UGameFlowSystem::DestroyLoadWidget() {
}

void UGameFlowSystem::DestroyFade(bool IsImmediate, int32 Option, int32 TargetFadeType) {
}

void UGameFlowSystem::CancelLoadMapWithPriority(const ELoadMapPriority Priority) {
}

void UGameFlowSystem::CancelLoadMap() {
}

UGameFlowSystem::UGameFlowSystem() {
    this->mpLoadWidget = NULL;
    this->mpSaveWidget = NULL;
    this->mpLobbySmallMemberListWidget = NULL;
    this->mpTransitionMapWidget = NULL;
    this->mpLobbyObj = NULL;
    this->mpFade = NULL;
    this->mpInviteObj = NULL;
    this->mpNetworkErrorManager = NULL;
    this->mpNetworkErrorObj = NULL;
    this->mpPlayGoProgressWidget = NULL;
}


