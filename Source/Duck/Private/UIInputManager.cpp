#include "DuckModule.h"
#include "UIInputManager.h"

bool UUIInputManager::IsTriggerKey(int32 Num, EUIInputKey Key) {
    return false;
}

bool UUIInputManager::IsRepeatKey(int32 Num, EUIInputKey Key) {
    return false;
}

bool UUIInputManager::IsReleaseKey(int32 Num, EUIInputKey Key) {
    return false;
}

bool UUIInputManager::IsPressKey(int32 Num, EUIInputKey Key) {
    return false;
}

bool UUIInputManager::IsPauseCall(int32 Num) {
    return false;
}

bool UUIInputManager::IsLastInputType(EUIInputLastDecideType Type, GameButtonType ButtonType) {
    return false;
}

EUIInputKey UUIInputManager::IsKeyVariable(int32 Num, float _Threshold) {
    return EUIInputKey::FaceButton_Top;
}

bool UUIInputManager::IsKeyThroughPrimaryCheck(int32 Num, EUIInputKey Key, EUIInputKeyType Type) {
    return false;
}

bool UUIInputManager::IsKeycon(int32 Num) {
    return false;
}

bool UUIInputManager::IsKeyAnyPad(EUIInputKey Key, EUIInputKeyType Type, bool isThroughPrimaryCheck) {
    return false;
}

bool UUIInputManager::IsKey(int32 Num, EUIInputKey Key, EUIInputKeyType Type) {
    return false;
}

bool UUIInputManager::IsExistDialog() {
    return false;
}

bool UUIInputManager::IsDecideLastInputType(EUIInputLastDecideType Type) {
    return false;
}

bool UUIInputManager::IsConnect(int32 Num) {
    return false;
}

bool UUIInputManager::IsAnyKey_Result(int32 Num, EUIInputKeyType Type) {
    return false;
}

bool UUIInputManager::IsAnyKey(int32 Num, EUIInputKeyType Type) {
    return false;
}

EUIInputLastDecideType UUIInputManager::GetLastInputType() {
    return EUIInputLastDecideType::Invalid;
}

EUIInputKey UUIInputManager::GetKeyconKey(int32 Num) {
    return EUIInputKey::FaceButton_Top;
}

UUIInputManager::UUIInputManager() {
}


