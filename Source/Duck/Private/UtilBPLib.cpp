#include "DuckModule.h"
#include "UtilBPLib.h"

void UUtilBPLib::TrimUserNameForTextBlock(UTextBlock* Target, const FString& UserName, const FString& Suffix, float XSize, FString& OutText, bool& IsTrimed) {
}

void UUtilBPLib::SetDemoShadowMaxResolution(bool isEntry) {
}

void UUtilBPLib::ReverseOrder_ArrStr(TArray<FString> In, TArray<FString>& Out) {
}

bool UUtilBPLib::IsValidStageNo(int32 stageNo, bool IsOpenCheck) {
    return false;
}

bool UUtilBPLib::IsValidPlayableCharaNo(int32 CharaNo, bool IsOpenCheck) {
    return false;
}

bool UUtilBPLib::IsValidCostumeNo(int32 CharaNo, int32 CostumeNo) {
    return false;
}

bool UUtilBPLib::IsValidCostumeData(int32 CharaNo, int32 CostumeNo) {
    return false;
}

bool UUtilBPLib::IsValidCharaNo_Purchase(int32 CharaNo, bool IsPlayable) {
    return false;
}

bool UUtilBPLib::IsValidCharaNo(int32 CharaNo, bool IsOpenCheck) {
    return false;
}

bool UUtilBPLib::IsValidArrangeCostume(int32 CharaNo) {
    return false;
}

bool UUtilBPLib::IsSaveDataMigration() {
    return false;
}

bool UUtilBPLib::IsDuckPrintOn() {
    return false;
}

bool UUtilBPLib::IsCultureItaly() {
    return false;
}

bool UUtilBPLib::IsCharaTypePlayer(int32 CharaNo) {
    return false;
}

bool UUtilBPLib::IsCharaTypeNPC(int32 CharaNo, bool IncludeDemoChara) {
    return false;
}

bool UUtilBPLib::IsCharaTypeMarvel(int32 CharaNo) {
    return false;
}

bool UUtilBPLib::IsCharaTypeDLC(int32 CharaNo) {
    return false;
}

bool UUtilBPLib::IsCharaTypeCapcom(int32 CharaNo) {
    return false;
}

bool UUtilBPLib::IsBuildVerValidSpFlow() {
    return false;
}

bool UUtilBPLib::IsBuildShirogumi() {
    return false;
}

bool UUtilBPLib::IsBuildShipping() {
    return false;
}

bool UUtilBPLib::IsBuildSDCC_Press() {
    return false;
}

bool UUtilBPLib::IsBuildRegionChina() {
    return false;
}

bool UUtilBPLib::IsBuildPresstour() {
    return false;
}

bool UUtilBPLib::IsBuildMarvelCheck() {
    return false;
}

bool UUtilBPLib::IsBuildE3() {
    return false;
}

bool UUtilBPLib::IsBuildDeliveryTrial() {
    return false;
}

bool UUtilBPLib::IsAssetExist(const FString& PATH) {
    return false;
}

bool UUtilBPLib::IsArabicString(const FString& Target) {
    return false;
}

int32 UUtilBPLib::GetValidCostumeNum(int32 CharaNo) {
    return 0;
}

int32 UUtilBPLib::GetValidColorNum(int32 CharaNo, int32 CostumeNo) {
    return 0;
}

int32 UUtilBPLib::GetTotalCostumeNum(int32 CharaNo) {
    return 0;
}

int32 UUtilBPLib::GetTotalColorNum() {
    return 0;
}

int32 UUtilBPLib::GetPostProcessAAQualityValue() {
    return 0;
}

bool UUtilBPLib::GetIsSuccessTryResizeView() {
    return false;
}

bool UUtilBPLib::GetIsFullscreenUWP() {
    return false;
}

float UUtilBPLib::GetDuckShadowBias() {
    return 0.0f;
}

int32 UUtilBPLib::GetDefaultFeatureAntiAliasingValue() {
    return 0;
}

FString UUtilBPLib::GetDataStringByInt(int32 Year, int32 Month, int32 Day) {
    return TEXT("");
}

FString UUtilBPLib::GetDataStringByChar(const FString& Year, const FString& Month, const FString& Day) {
    return TEXT("");
}

int32 UUtilBPLib::GetCharaMaxNum() {
    return 0;
}

void UUtilBPLib::FrameToTime(int32 _Frame, int32& _Hour, int32& _Minutes, int32& _Seconds) {
}

void UUtilBPLib::DuckQuitGame(UObject* WorldContextObject) {
}

FString UUtilBPLib::ConvertIntToString(const FString& StrFormat, int32 Number) {
    return TEXT("");
}

FString UUtilBPLib::ConvertDecimalToHexString(int32 Number) {
    return TEXT("");
}

bool UUtilBPLib::ClassAssetId_IsNull(UClass* Object) {
    return false;
}

FTEAM_SETTING UUtilBPLib::CheckValidTeamSetting(int32 DataNo, bool IsPurchaseCheck, bool IsPlayGoCheck, int32 MainDefPlType, int32 SubDefPlType) {
    return FTEAM_SETTING{};
}

void UUtilBPLib::CheckValidCharaAndCostumeAll(const FMemberInfo& InMemberInfo, int32 MainDefPlType, int32 SubDefPlType, int32& OutMainCharaNo, int32& OutMainCostumeNo, int32& OutMainColorNo, int32& OutSubCharaNo, int32& OutSubCostumeNo, int32& OutSubColorNo) {
}

bool UUtilBPLib::CheckValidCharaAndCostume(int32 InCharaNo, int32 InCostumeNo, int32 InColorNo, bool IsPurchaseCheck, bool IsPlayGoCheck, int32& OutCostumeNo, int32& OutColorNo) {
    return false;
}

void UUtilBPLib::ChangeFixedFrameRate(bool Is60fps) {
}

int32 UUtilBPLib::BitShiftRightPure(int32 Value, int32 Count) {
    return 0;
}

int32 UUtilBPLib::BitShiftRight(int32 Value, int32 Count) {
    return 0;
}

int32 UUtilBPLib::BitShiftLeftPure(int32 Value, int32 Count) {
    return 0;
}

int32 UUtilBPLib::BitShiftLeft(int32 Value, int32 Count) {
    return 0;
}

int32 UUtilBPLib::BitReverse(int32 Value) {
    return 0;
}

UUtilBPLib::UUtilBPLib() {
}


