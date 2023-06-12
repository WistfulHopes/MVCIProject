#include "DuckModule.h"
#include "CharacterAssetSwitchKey.h"

FCharacterAssetSwitchKey::FCharacterAssetSwitchKey() {
    this->IgnoreTargetChange = false;
    this->TouchDisable = false;
    this->IgnoreTurbo = false;
    this->IgnoreTouchWait = false;
    this->ThrowEscape = false;
    this->WaitLanding = false;
    this->DashJumpEnable = false;
    this->IgnoreInertia = false;
    this->DamageAbsorb = false;
    this->ShotInvincible = false;
    this->SuperArmor = false;
    this->DamageResistance = false;
    this->SpaceSurge = false;
    this->IgnoreInput = false;
    this->IgnoreBodyPush = false;
    this->TakeBehind = false;
    this->NotToTarget = false;
    this->NonSHCAdd = false;
    this->ApplyRuthlessWall = false;
    this->NonScrollPush = false;
    this->NonBodyPush = false;
    this->NonShotCheck = false;
    this->NonHitCheck = false;
    this->WorldCancel = false;
    this->HitStopCancel = false;
    this->Landing = false;
    this->ToNormal = false;
    this->LandToNormal = false;
    this->FollowParent = false;
    this->UpdateScrollFlag = false;
    this->Double = ECharacterAssetSwitchDoubleOperation::OPE_NONE;
    this->Side = ECharacterAssetSwitchSideOperation::OPE_NONE;
    this->ActionStatus = ECharacterAssetActionStatus::N_FOOTWORK;
    this->JumpStatus = ECharacterAssetSwitchJump::JUMP_ST_NONE;
    this->PoseStatus = ECharacterAssetSwitchPose::POSE_ST_NONE;
}


