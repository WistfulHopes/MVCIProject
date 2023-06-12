#include "DuckModule.h"
#include "ProjectileData.h"

FProjectileData::FProjectileData() {
    this->TargetScatterZ = 0;
    this->TargetScatterY = 0;
    this->TargetScatterX = 0;
    this->HitSpan = 0;
    this->HitCount = 0;
    this->IsBullet = false;
    this->ErasedByDifferentStyle = false;
    this->ErasedByPlayerDamage = false;
    this->NoHitIfPlayerDamageEx = false;
    this->NoHitIfPlayerDamage = false;
    this->HitToPlayer = false;
    this->Made_of = EMaterialType::DEFAULT;
    this->Reflect = ECharacterAssetShotReflect::NOT_REFLECT;
    this->HitKind = ECharacterAssetShotHitProperty::HIT_ENERGY;
    this->Category = ECharacterAssetShotCategory::CATEGORY_0;
    this->NoDeathVfxLanding = false;
    this->NotDieIfHitCountZero = false;
    this->DeadPriorityLow = false;
    this->IsMotionCameraVisible = false;
    this->IgnoreCalcDeathEffectRot = false;
    this->IsRotateMirroring = false;
    this->AdjustLightChanelGround = false;
    this->AdjustLightChanelDeath = false;
    this->AdjustLightChanelCounteract = false;
    this->AdjustLightChanelAura = false;
    this->AdjustLightChanelBeam = false;
    this->AdjustLightChanelCore = false;
    this->IsCastShadowGround = false;
    this->IsCastShadowDeath = false;
    this->IsCastShadowCounteract = false;
    this->IsCastShadowAura = false;
    this->IsCastShadowBeam = false;
    this->IsCastShadowCore = false;
    this->RangeB = 0;
    this->RangeF = 0;
    this->RangeD = 0;
    this->RangeU = 0;
    this->DeathBoneID = 0;
    this->Scale = 0;
    this->AuraDeleteFrame = 0;
    this->ZScalingFrame = 0;
    this->MeshID = 0;
    this->GroundVfxID = 0;
    this->GroundCategory = ECharacterAssetVfxCategory::COMMON;
    this->NaturalDeathVfxID = 0;
    this->NaturalDeathCategory = ECharacterAssetVfxCategory::COMMON;
    this->DeathVfxID = 0;
    this->DeathCategory = ECharacterAssetVfxCategory::COMMON;
    this->CounteractVfxID = 0;
    this->CounteractCategory = ECharacterAssetVfxCategory::COMMON;
    this->AuraVfxID = 0;
    this->AuraCategory = ECharacterAssetVfxCategory::COMMON;
    this->BeamVfxID = 0;
    this->BeamCategory = ECharacterAssetVfxCategory::COMMON;
    this->CoreVfxID = 0;
    this->CoreCategory = ECharacterAssetVfxCategory::COMMON;
}


