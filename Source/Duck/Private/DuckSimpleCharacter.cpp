#include "DuckModule.h"
#include "DuckSimpleCharacter.h"

void ADuckSimpleCharacter::SpawnGimmickVfx(int32 _GimmickVfxID) {
}

void ADuckSimpleCharacter::SetupMotionInf(const FDemoMotionUpdateInf& inf) {
}

void ADuckSimpleCharacter::SetupFacialInf(const FDemoMotionUpdateInf& inf) {
}

void ADuckSimpleCharacter::SetupFacialBlendInf(int32 Frame) {
}

void ADuckSimpleCharacter::SetupBodyBlendInf(int32 Frame) {
}

void ADuckSimpleCharacter::Setup(int32 InCharaID, int32 InColorMaterialID, int32 InCostumeID) {
}

void ADuckSimpleCharacter::SetStyle(int32 Style) {
}

void ADuckSimpleCharacter::SetSkeletalMeshNoIDChara(USkeletalMesh* _Mesh) {
}

void ADuckSimpleCharacter::SetParticleTickNum(int32 Num) {
}

void ADuckSimpleCharacter::SetParticleDilationTime(float Time) {
}

void ADuckSimpleCharacter::SetParticleAsset(UParticleAsset* _ParticleAsset) {
}

void ADuckSimpleCharacter::SetMotionAsset(UAnimSequencesAsset* _MotionAsset) {
}

void ADuckSimpleCharacter::SetMaterialTextureParameter(int32 PartsIndex, int32 MatIndex, FName ParameterName, UTexture* Value) {
}

void ADuckSimpleCharacter::SetMaterialScalarParameterAll(FName ParameterName, float Value) {
}

void ADuckSimpleCharacter::SetMaterialScalarParameter(int32 PartsIndex, int32 MatIndex, FName ParameterName, float Value) {
}

void ADuckSimpleCharacter::SetLightingChannel(bool _Channel0, bool _Channel1, bool _Channel2) {
}

void ADuckSimpleCharacter::SetIsZeroMoveValue(bool flag) {
}

void ADuckSimpleCharacter::SetIsMirroring(bool flag) {
}

void ADuckSimpleCharacter::SetIsApplyPhysics(bool flag) {
}

void ADuckSimpleCharacter::SetIsApplyCloth(bool flag) {
}

void ADuckSimpleCharacter::SetGimmickVfxAsset(UGimmickVfxAsset* _GimmickVfxAsset) {
}

void ADuckSimpleCharacter::SetFacialSetting(EFacialSetting setting) {
}

void ADuckSimpleCharacter::SetDuckEnableClothPhysics(int32 InCharaID, int32 InCostumeID) {
}

void ADuckSimpleCharacter::RemovePartsInf(int32 index) {
}

void ADuckSimpleCharacter::KillGimmickVfx(int32 _GimmickVfxID) {
}

void ADuckSimpleCharacter::KillAllGimmickVfx() {
}

void ADuckSimpleCharacter::DisableIndirectLightingCache() {
}

void ADuckSimpleCharacter::AddPartsInf(int32 index, FDemoPartsInf inf) {
}

ADuckSimpleCharacter::ADuckSimpleCharacter() {
    this->anim_inst = NULL;
    this->Delta = 0.00f;
    this->is_auto_update_motion = false;
    this->is_auto_loop_motion = false;
    this->is_mirroring = false;
    this->is_apply_physics = true;
    this->is_apply_cloth = true;
    this->is_zero_move_value = false;
    this->facial_setting = EFacialSetting::DEFAULT;
    this->style_setting = 0;
    this->GimmickVfxAsset = NULL;
    this->ParticleAsset = NULL;
    this->particle_dilation_time = 1.00f;
    this->particle_tick_num = 1;
    this->UseNoIDCharaMesh = false;
}


