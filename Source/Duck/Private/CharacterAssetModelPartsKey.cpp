#include "DuckModule.h"
#include "CharacterAssetModelPartsKey.h"

FCharacterAssetModelPartsKey::FCharacterAssetModelPartsKey() {
    this->PhysicsOverride = ECharacterAssetPhysicsOverride::DEFAULT;
    this->IsApplyPhysics = false;
    this->Visible = false;
    this->ValidStyle = 0;
    this->MirrorSettingOverride = 0;
    this->MotionEndFrame = 0;
    this->MotionStartFrame = 0;
    this->MotionID = 0;
    this->RotateOffsetZ = 0.00f;
    this->RotateOffsetY = 0.00f;
    this->RotateOffsetX = 0.00f;
    this->PosOffsetZ = 0.00f;
    this->PosOffsetY = 0.00f;
    this->PosOffsetX = 0.00f;
    this->AttachedJoint = 0;
    this->AttachJoint = 0;
    this->PartsArrayIdx = 0;
    this->AttachPartsIndex = 0;
    this->LocalMirrorSetting = ECharacterAssetMirrorAxisSetting::NONE;
    this->OffsetSetting = ECharacterAssetPartsOffsetSetting::WORLD;
    this->AttachSetting = ECharacterAssetPartsAttachSetting::BOTH;
    this->AttachTarget = ECharacterAssetPartsAttachTarget::OWN;
}


