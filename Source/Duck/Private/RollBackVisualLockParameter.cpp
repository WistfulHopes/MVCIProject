#include "DuckModule.h"
#include "RollBackVisualLockParameter.h"

FRollBackVisualLockParameter::FRollBackVisualLockParameter() {
    this->isJointLock = false;
    this->isFixLock = false;
    this->LockPlID = 0;
    this->LockedPlID = 0;
    this->LockCharaJointID = 0;
    this->LockedCharaJointID = 0;
    this->BaseCoordinatePosLockJoint = 0;
    this->BaseCoordinateRotLockJoint = 0;
    this->BlendAlpha = 0.00f;
    this->isMirroring = false;
    this->IgnoreAxis = ECharacterAssetPlaceAddPosAxis::NONE;
    this->MirrorAxis = ECharacterAssetMirrorAxisSetting::NONE;
    this->AdjustPosX = 0.00f;
    this->AdjustPosY = 0.00f;
}


