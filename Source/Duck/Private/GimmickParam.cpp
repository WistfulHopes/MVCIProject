#include "DuckModule.h"
#include "GimmickParam.h"

FGimmickParam::FGimmickParam() {
    this->No = 0;
    this->UniqueID = 0;
    this->NodeID = 0;
    this->Scale = 0.00f;
    this->MaxSpawnHeight = 0.00f;
    this->OffsetRotationZ = 0.00f;
    this->OffsetRotationY = 0.00f;
    this->OffsetRotationX = 0.00f;
    this->OffsetPositionZ = 0.00f;
    this->OffsetPositionY = 0.00f;
    this->OffsetPositionX = 0.00f;
    this->IsDeleteDamaged = false;
    this->IsLandPos = false;
    this->IsExceptDouble = false;
    this->IsOnlyDouble = false;
    this->IgnoreParentDead = false;
    this->IsAffectedHitStop = false;
    this->isCastShadow = false;
    this->IgnoreWorld = false;
    this->IsRotateMirroring = false;
    this->FollowNodeRotation = false;
    this->FollowNodePosition = false;
    this->ChildSpawnID = 0;
    this->ID = 0;
    this->ChargeBit = 0;
    this->StyleBit = 0;
    this->DeadOperation = ECharacterAssetGimmickDeadOperation::OP_DELETE;
    this->Type = ECharacterAssetGimmickType::ONE_SHOT;
    this->Category = ECharacterAssetVfxCategory::COMMON;
    this->DefaultSetting = false;
}


