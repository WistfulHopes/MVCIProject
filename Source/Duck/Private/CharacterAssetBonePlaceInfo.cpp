#include "DuckModule.h"
#include "CharacterAssetBonePlaceInfo.h"

FCharacterAssetBonePlaceInfo::FCharacterAssetBonePlaceInfo() {
    this->LockType = ECharacterAssetLockType::NORMAL;
    this->IgnoreAxis = ECharacterAssetPlaceAddPosAxis::NONE;
    this->TargetFrame = 0;
    this->RotateBaseJoint = 0;
    this->OffsetBaseJoint = 0;
    this->RotateZ = 0;
    this->RotateY = 0;
    this->RotateX = 0;
    this->OffsetZ = 0;
    this->OffsetY = 0;
    this->OffsetX = 0;
    this->TargetJoint = 0;
    this->AttachJoint = 0;
    this->LockActionNo = 0;
}


