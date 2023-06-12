#include "DuckModule.h"
#include "CharacterAssetTrigger.h"

FCharacterAssetTrigger::FCharacterAssetTrigger() {
    this->CommandUI = 0;
    this->Function = ECharacterAssetFunctionType::NORMAL;
    this->CommandGroup = 0;
    this->Action = 0;
    this->ActionList = 0;
    this->CommandDir = ECharacterAssetCommandDir::SIDE;
    this->Command = ECharacterAssetCommandType::NONE;
    this->NGKey = 0;
    this->Key = 0;
    this->Disable = false;
}


