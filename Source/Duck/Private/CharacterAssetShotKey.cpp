#include "DuckModule.h"
#include "CharacterAssetShotKey.h"

FCharacterAssetShotKey::FCharacterAssetShotKey() {
    this->ValidStyle = 0;
    this->FollowJointID = 0;
    this->MaterialColorSetting = ECharacterAssetShotMatSetting::NO_INHERT;
    this->InheritHitData = false;
    this->ForceParentShot = false;
    this->IsFollowJoint = false;
    this->IsCoreCancel = false;
    this->DemoCamera = false;
    this->IgnoreWorld = false;
    this->FollowOnDelete = false;
    this->FollowOnSpawn = false;
    this->IsDeleteActionChange = false;
    this->IsDeleteDamage = false;
    this->IgnoreVisibleMirror = false;
    this->IsRotateDirectBase = false;
    this->IgnoreCalcScale = false;
    this->IgnoreCalcRotation = false;
    this->IgnoreCalcPosition = false;
    this->InheritParentPosZ = false;
    this->InheritParentPosY = false;
    this->InheritParentPosX = false;
    this->BoneOffSetZ = 0;
    this->BoneOffSetY = 0;
    this->BoneOffSetX = 0;
    this->RotOffSetZ = 0;
    this->RotOffSetY = 0;
    this->RotOffSetX = 0;
    this->VisualOffSetZ = 0;
    this->VisualOffSetY = 0;
    this->VisualOffSetX = 0;
    this->ScatterZ = 0;
    this->ScatterY = 0;
    this->ScatterX = 0;
    this->OffsetZ = 0;
    this->OffsetY = 0;
    this->OffsetX = 0;
    this->IsMirrorMove = false;
    this->DelayFrame = 0;
    this->StartMoveFrame = 0;
    this->LifeTimeFrame = 0;
    this->PartnerChara = 0;
    this->ShotType = ECharacterAssetShotType::NORMAL;
    this->Operation = ECharacterAssetShotOperation::SPAWN;
    this->StyleIdx = 0;
    this->ActionId = 0;
}


