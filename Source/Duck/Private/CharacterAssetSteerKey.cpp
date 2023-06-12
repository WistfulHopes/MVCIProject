#include "DuckModule.h"
#include "CharacterAssetSteerKey.h"

FCharacterAssetSteerKey::FCharacterAssetSteerKey() {
    this->Param = 0;
    this->OnlyOnce = false;
    this->MultiValueType = 0;
    this->TargetType = ECharacterAssetSteerTargetType::SELF;
    this->LimitAngle = 0;
    this->FixTargetOffsetZ = 0;
    this->FixTargetOffsetY = 0;
    this->FixTargetOffsetX = 0;
    this->CalcValueFrame = 0;
    this->FixValue = 0;
    this->ValueType = ECharacterAssetSteerValType::VELOCITY_X;
    this->OperationType = ECharacterAssetSteerOpeType::NOP;
}


