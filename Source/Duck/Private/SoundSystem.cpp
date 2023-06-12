#include "DuckModule.h"
#include "SoundSystem.h"

void USoundSystem::SetCategoryVolume(ESoundCategory Type, float VolumeRate) {
}

void USoundSystem::SetCategoryBattleStageAmbientVolume(float VolumeRate) {
}

void USoundSystem::ResetCategoryVolume() {
}

USoundModeCtrlBase* USoundSystem::GetSoundModeCtrl(ESoundModeCtrlType Type) const {
    return NULL;
}

USoundSystem* USoundSystem::GetInstance() {
    return NULL;
}

void USoundSystem::DestroySoundModeCtrlSpecifiedType(ESoundModeCtrlType Type) {
}

USoundModeCtrlBase* USoundSystem::CreateSoundModeCtrl(ESoundModeCtrlType Type) {
    return NULL;
}

void USoundSystem::ChangeLanguage() {
}

void USoundSystem::ApplySoundSettingAll(int32 padNo) {
}

USoundSystem::USoundSystem() {
}


