#include "DuckModule.h"
#include "CharacterAssetVoiceKey.h"

FCharacterAssetVoiceKey::FCharacterAssetVoiceKey() {
    this->OnlyOnce = false;
    this->ControlValue = 0.00f;
    this->AISACType = ECharacterAssetSoundAisacType::PAN;
    this->GroupID = ECharacterAssetSoundGroupID::DEFAULT;
    this->CueID = 0;
    this->Type = ECharacterAssetSoundType::SYSTEM;
    this->OperationType = ECharacterAssetSoundOpeType::PLAYCUE;
}


