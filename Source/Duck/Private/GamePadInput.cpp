#include "DuckModule.h"
#include "GamePadInput.h"

void UGamePadInput::UpdateKeyboardConfigDataFromSaveData() {
}

void UGamePadInput::UpdateConfigDataFromSaveData() {
}

void UGamePadInput::UpdateConfigDataForPressTour(int32 teamNo, bool IsPad) {
}

void UGamePadInput::ShowAccountPicker(UObject* WorldContextObject, FLatentActionInfo LatentInfo, int32 padNo) {
}

void UGamePadInput::SetPlayerUsePadNumbers(const TArray<int32>& PadNumbers) {
}

void UGamePadInput::SetPadConnectPlayer(int32 PadNum, int32 PlayerNum) {
}

void UGamePadInput::SetLobbyIDInputFlg(bool Flg) {
}

void UGamePadInput::SetLastInputKeyboardFlag(bool inputFlag) {
}

void UGamePadInput::SetDefaultPadNumAllPlayer() {
}

void UGamePadInput::SetControllerSelectSetting(int32 teamNo, int32 padNo) {
}

void UGamePadInput::SetActiveUser(int32 padNo) {
}

bool UGamePadInput::IsPressDummyCtrlInTraining(int32 teamNo) {
    return false;
}

bool UGamePadInput::IsKeyboardPressAnyKey() {
    return false;
}

bool UGamePadInput::IsConnectPad_FromPadNum(int32 PadNum) {
    return false;
}

bool UGamePadInput::IsConnectPad(int32 padNo) {
    return false;
}

bool UGamePadInput::IsButtonPressed_FromPlayerNum(int32 PlayerNum, GameButtonType checkButtonType, bool useConfig) {
    return false;
}

bool UGamePadInput::IsButtonPressed_FromPadNum(int32 PadNum, GameButtonType checkButtonType, bool useConfig) {
    return false;
}

bool UGamePadInput::IsButtonAnyPressed_FromPlayerNum(int32 PlayerNum, bool useConfig) {
    return false;
}

bool UGamePadInput::IsButtonAnyPressed_FromPadNum(int32 PadNum, bool useConfig) {
    return false;
}

bool UGamePadInput::IsBattleKeyboardPressTrigger(GameKeyboardConfigItems Item) {
    return false;
}

bool UGamePadInput::IsBattleKeyboardPressAnyKey() {
    return false;
}

bool UGamePadInput::IsBattleKeyboardPress(GameKeyboardConfigItems Item) {
    return false;
}

bool UGamePadInput::IsAppActive() {
    return false;
}

void UGamePadInput::GetRightAnalogKeyState_FromPlayerNum(int32 PlayerNum, float& outX, float& outY) {
}

void UGamePadInput::GetRightAnalogKeyState_FromPadNum(int32 PadNum, float& outX, float& outY) {
}

EUIInputKey UGamePadInput::GetRecordButton(const int32 PlayerNum, bool& IsSetting) {
    return EUIInputKey::FaceButton_Top;
}

int32 UGamePadInput::GetPrimaryUserId() {
    return 0;
}

int32 UGamePadInput::GetPrimaryUser_FromPadNum() {
    return 0;
}

APlayerController* UGamePadInput::GetPlayerController_FromPlayerNum(UObject* WorldContextObject, int32 PlayerNum) {
    return NULL;
}

APlayerCameraManager* UGamePadInput::GetPlayerCameraManager_FromPlayerNum(UObject* WorldContextObject, int32 PlayerNum) {
    return NULL;
}

EUIInputKey UGamePadInput::GetPlayBackButton(const int32 PlayerNum, bool& IsSetting) {
    return EUIInputKey::FaceButton_Top;
}

int32 UGamePadInput::GetPickResult() {
    return 0;
}

FKey UGamePadInput::GetPCBattleKeyData(GameKeyboardConfigItems ItemIndex) {
    return FKey{};
}

int32 UGamePadInput::GetManagePlayerMax() {
    return 0;
}

EUIInputKey UGamePadInput::GetLowPunchButton(const int32 PlayerNum, bool& IsSetting) {
    return EUIInputKey::FaceButton_Top;
}

void UGamePadInput::GetLeftAnalogKeyState_FromPlayerNum(int32 PlayerNum, float& outX, float& outY) {
}

void UGamePadInput::GetLeftAnalogKeyState_FromPadNum(int32 PadNum, float& outX, float& outY) {
}

bool UGamePadInput::GetLastInputKeyboardFlag() {
    return false;
}

bool UGamePadInput::GetIsPicked() {
    return false;
}

bool UGamePadInput::GetDipDummyControlEnable() {
    return false;
}

TArray<FKey> UGamePadInput::GetDefaultKeyboardConfig_Move() {
    return TArray<FKey>();
}

TArray<FKey> UGamePadInput::GetDefaultKeyboardConfig_Attack() {
    return TArray<FKey>();
}

void UGamePadInput::GetControllerSelectSetting(int32 teamNo, bool& isCPU, int32& padNo) {
}

int32 UGamePadInput::GetConnectPlayerNum_FromPadNum(int32 PadNum) {
    return 0;
}

void UGamePadInput::GetConnectPadNo(TArray<int32>& Out) {
}

void UGamePadInput::GetConnectPadArray(TArray<int32>& Pads) {
}

GameButtonState UGamePadInput::GetButtonState_FromPlayerNum(int32 PlayerNum, GameButtonType checkButtonType, bool useConfig) {
    return GameButtonState::Press;
}

GameButtonState UGamePadInput::GetButtonState_FromPadNum(int32 PadNum, GameButtonType checkButtonType, bool useConfig) {
    return GameButtonState::Press;
}

EUIInputKey UGamePadInput::GetBindButton(const int32 PlayerNum, const GameConfigItems Action, bool& IsSetting) {
    return EUIInputKey::FaceButton_Top;
}

EUIInputKey UGamePadInput::GetAShiftButton(const int32 PlayerNum, bool& IsSetting) {
    return EUIInputKey::FaceButton_Top;
}

bool UGamePadInput::EngagementPrompt_Decide() {
    return false;
}

void UGamePadInput::Decide2PSidePlayer() {
}

UGamePadInput::UGamePadInput() {
}


