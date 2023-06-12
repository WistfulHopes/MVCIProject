#include "DuckModule.h"
#include "CharacterAssetFacialKey.h"

FCharacterAssetFacialKey::FCharacterAssetFacialKey() {
    this->UVInterpolateFrame = 0;
    this->UVOffsetV = 0.00f;
    this->UVOffsetU = 0.00f;
    this->UVTargetType = ECharacterAssetEyeOffsetType::LEFT;
    this->FacialType = ECharacterAssetFacialType::FACIAL_MOTION;
    this->GetAppearSlot = false;
    this->SameBodyFrame = false;
    this->Mirr0000 = false;
    this->MotionEndFrame = 0;
    this->MotionStartFrame = 0;
    this->MotionID = 0;
}


