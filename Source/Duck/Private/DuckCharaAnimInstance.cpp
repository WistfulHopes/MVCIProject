#include "DuckModule.h"
#include "DuckCharaAnimInstance.h"

void UDuckCharaAnimInstance::SetPose(const TArray<FTransform>& NewPose) {
}

void UDuckCharaAnimInstance::SetPhysicsSimulation(bool flag) {
}

UAnimSequenceBase* UDuckCharaAnimInstance::RequestMotionAsset(int32 Type, int32 ID) {
    return NULL;
}

TArray<FTransform> UDuckCharaAnimInstance::GetPose() const {
    return TArray<FTransform>();
}

UDuckCharaAnimInstance::UDuckCharaAnimInstance() {
    this->BodyAnimInstance = NULL;
    this->AnimSeqMain = NULL;
    this->AnimSeqSub = NULL;
    this->BlendAlpha = 0.00f;
    this->BlendAlphaFacial = 0.00f;
    this->IsEnableMirroring = false;
    this->MotionAssetCommon = NULL;
    this->MotionAsset = NULL;
    this->AppendAnimsCommon = NULL;
    this->AppendAnimsUnique = NULL;
    this->MirrorOverrideIndex = 0;
    this->charaID = -1;
    this->OptionID = -1;
    this->CostumeID = -1;
    this->BlendAlphaBody2Facial = 0.00f;
    this->IsPoseBlend = false;
    this->IsTurnAround = false;
    this->IsWeaponAnim = false;
    this->isReverseNullRotate = false;
    this->OriginalMeshComponent = NULL;
    this->Visual = NULL;
    this->commonMotionSetting = NULL;
}


