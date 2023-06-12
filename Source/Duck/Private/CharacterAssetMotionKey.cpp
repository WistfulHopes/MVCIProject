#include "DuckModule.h"
#include "CharacterAssetMotionKey.h"

FCharacterAssetMotionKey::FCharacterAssetMotionKey() {
    this->PhysicsOverride = ECharacterAssetPhysicsOverride::DEFAULT;
    this->IsApplyPhysics = false;
    this->IsMirrorParts = false;
    this->IsContainFacial = false;
    this->IsVisibleAllChara = false;
    this->IsVisibleOhterChara = false;
    this->MoveValueZ = false;
    this->MoveValueY = false;
    this->MoveValueX = false;
    this->IsTurnAround = false;
    this->Mirr0000 = false;
    this->MotionEndFrame = 0;
    this->MotionStartFrame = 0;
    this->MotionID = 0;
    this->MotionType = ECharacterAssetMotType::COMMONOBJECT;
    this->Operation = ECharacterAssetMotOperation::SOURCE_MOTION;
}


