#include "DuckModule.h"
#include "ParticleParam.h"

FParticleParam::FParticleParam() {
    this->MaxSpawnHeight = 0.00f;
    this->FollowPartsID = 0;
    this->FollowPartsIDMirroring = 0;
    this->FollowBoneID = 0;
    this->FollowBoneIDMirroring = 0;
    this->TargetBone = ECharacterAssetGimmickTargetBone::OWNER;
    this->PlayerID = 0;
    this->ParticleID = 0;
    this->ParticleSortPrioroty = 0;
    this->Category = 0;
    this->Operation = 0;
    this->Kind = 0;
    this->UniqueID = 0;
    this->AssetUniqueID = 0;
    this->Scale = 0.00f;
    this->Slot = 0;
    this->IsCalledFromEmitter = false;
    this->IsCalledFromGimmick = false;
    this->ActionId = 0;
    this->Type = EParticleType::NORMAL_PARTICLE;
    this->InfIndex = 0;
    this->ParentIndex = 0;
    this->ParentUniqueID = 0;
    this->IsSpawnFromDouble = false;
    this->IsMirrorMove = false;
    this->IsDoubleDeadEffct = false;
    this->isOverrideActionChangedBehave = false;
    this->MirrorAxisSetting = ECharacterAssetMirrorAxisSetting::NONE;
    this->IsUseAsBeamEffect = false;
    this->BeamTargetBone = 0;
    this->BeamTargetSetting = ECharacterAssetGimmickBeamTarget::OWNER;
    this->BeamMirrorAxisSetting = ECharacterAssetMirrorAxisSetting::NONE;
    this->isInheritParentVisible = false;
    this->isRespawnByRollBack = false;
    this->IsUseVelocityControl = false;
    this->IsUseLookAt = false;
    this->LookAtAxis = ECharacterAssetAxis::X;
    this->IsUseMeshParticle = false;
    this->IsRyuhaiEmitter = false;
    this->IsRenderCustomDepth = false;
    this->IsHitMark = false;
}


