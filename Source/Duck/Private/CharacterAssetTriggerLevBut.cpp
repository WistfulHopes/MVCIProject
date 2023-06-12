#include "DuckModule.h"
#include "CharacterAssetTriggerLevBut.h"

FCharacterAssetTriggerLevBut::FCharacterAssetTriggerLevBut() {
    this->Release = false;
    this->Direct = false;
    this->Press = false;
    this->Condition = ECharacterAssetCondType::NONE;
}


