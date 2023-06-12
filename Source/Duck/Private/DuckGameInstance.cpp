#include "DuckModule.h"
#include "DuckGameInstance.h"

void UDuckGameInstance::TestTickWorkRate(float DeltaSeconds) {
}

void UDuckGameInstance::TestLoadMatParamCollect(EMatParamCollectType Type) {
}

void UDuckGameInstance::TestClearWorkRate() {
}

void UDuckGameInstance::TestClearAllMatParamCollect() {
}

UUserWidget* UDuckGameInstance::SpawnUserInfo(int32 ZOrder) {
    return NULL;
}

void UDuckGameInstance::SetWorkRate(EWorkRateTypeDef Type, float rate) {
}

void UDuckGameInstance::SetupRewardWidget() {
}

void UDuckGameInstance::SetRecordAssetData(URecordDataAsset* pRecordAssetData) {
}

void UDuckGameInstance::SetPadType(int32 PadNum, int32 PadType) {
}

void UDuckGameInstance::SetMatParamCollectScalarParam(EMatParamCollectType Type, FName ParamName, float Value) {
}

void UDuckGameInstance::SetMainMenuFocusIndex(TArray<int32> NewArrFocusIndex) {
}

void UDuckGameInstance::SetGarbageCollectDisable(bool FlgOn) {
}

void UDuckGameInstance::SetDuckGamePause(bool flgPauseOn) {
}

void UDuckGameInstance::SetBattleInputNone_Self(bool bInputNone) {
}

void UDuckGameInstance::SetActiveStaticButton(UUserWidget* StaticButton) {
}

void UDuckGameInstance::RewardGet(TArray<FText>& Text) {
}

void UDuckGameInstance::RewardAdd(FText Text) {
}

void UDuckGameInstance::ReleaseRewardWidget() {
}

void UDuckGameInstance::ReleaseMainMenuFocusIndex() {
}

void UDuckGameInstance::ReleaseActiveStaticButton() {
}

bool UDuckGameInstance::IsStaticButton() {
    return false;
}

bool UDuckGameInstance::IsShowDip() {
    return false;
}

bool UDuckGameInstance::IsDuckGamePause() const {
    return false;
}

bool UDuckGameInstance::IsDispHUD() const {
    return false;
}

void UDuckGameInstance::HideSessionSettings() {
}

void UDuckGameInstance::HideSerial() {
}

float UDuckGameInstance::GetWorkRate(EWorkRateTypeDef Type) const {
    return 0.0f;
}

UUserWidget* UDuckGameInstance::GetUserInfo() const {
    return NULL;
}

UUIInputManager* UDuckGameInstance::GetUIInputManager() {
    return NULL;
}

UUserWidget* UDuckGameInstance::GetRewardWidget() {
    return NULL;
}

int32 UDuckGameInstance::GetRewardNum() {
    return 0;
}

URecordDataAsset* UDuckGameInstance::GetRecordAssetData() {
    return NULL;
}

FText UDuckGameInstance::GetPlatformMsg(EPlatformMsgType Type) const {
    return FText::GetEmpty();
}

void UDuckGameInstance::GetPadType(int32 PadNum, int32& PadType) {
}

UDuckMediaControl* UDuckGameInstance::GetMediaControl() {
    return NULL;
}

int32 UDuckGameInstance::GetMaxTeamNum() const {
    return 0;
}

int32 UDuckGameInstance::GetMaxPartnerNum() const {
    return 0;
}

void UDuckGameInstance::GetMainMenuFocusIndex(TArray<int32>& Result) {
}

bool UDuckGameInstance::GetBattleInputNone_Self() {
    return false;
}

UUserWidget* UDuckGameInstance::GetActiveStaticButton() {
    return NULL;
}

void UDuckGameInstance::DestroyUserInfo() {
}

bool UDuckGameInstance::DecodeSerial(FString& decoded_string) {
    return false;
}

void UDuckGameInstance::CaptureForResultTexture(int32 teamNo) {
}

UDuckGameInstance::UDuckGameInstance() {
    this->mIsPauseTypeLongPress = false;
    this->ActiveReward = NULL;
    this->mpUserInfoWidget = NULL;
    this->ActiveStaticButton = NULL;
    this->StaticButtonAttachTarget = NULL;
    this->UIInputManager = NULL;
    this->mpRecordAssetData = NULL;
    this->mpSerialDispWidgetPackage = NULL;
    this->mpSerialDispWidget = NULL;
    this->mpSessionSettingDispWidgetPackage = NULL;
    this->mpSessionSettingDispWidget = NULL;
}


