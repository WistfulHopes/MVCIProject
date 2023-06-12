#include "DuckModule.h"
#include "CharacterAssetTriggerKey.h"

FCharacterAssetTriggerKey::FCharacterAssetTriggerKey() {
    this->GemAbility = false;
    this->Wall = false;
    this->Fly = false;
    this->Defer = false;
    this->Master = false;
    this->SuperJump = false;
    this->NormalJump = false;
    this->Armor = false;
    this->Swing = false;
    this->Guard = false;
    this->Hit = false;
    this->TriggerGroup = 0;
}


