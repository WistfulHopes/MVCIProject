#include "DuckModule.h"
#include "CharacterAssetBranchKey.h"

FCharacterAssetBranchKey::FCharacterAssetBranchKey() {
    this->Param03 = 0;
    this->Param02 = 0;
    this->Param01 = 0;
    this->Param00 = 0;
    this->ActionFrame = 0;
    this->Action = 0;
    this->ActionList = 0;
    this->IsChangeStyle = false;
    this->InheritFrame = false;
    this->InheritLoopCount = false;
    this->Type = ECharacterAssetBranchType::ALWAYS;
}


