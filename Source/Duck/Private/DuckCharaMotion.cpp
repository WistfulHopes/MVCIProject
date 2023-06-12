#include "DuckModule.h"
#include "DuckCharaMotion.h"

UDuckSkeletalMeshComponent* ADuckCharaMotion::GetMeshComponent() {
    return NULL;
}

ADuckCharaMotion::ADuckCharaMotion() {
    this->plID = 0;
    this->MotionTypeMain = 0;
    this->MotionIDMain = 0;
    this->IsMirroringChara = false;
    this->isMirroringCharaOld = false;
    this->IsMirroringInner = false;
    this->IsMirrorParts = false;
    this->IsMirroringMain = false;
    this->IsLoopingMain = false;
    this->AdjustRotY = 0.00f;
    this->AdjustPosX = 0.00f;
    this->MotionTypeSub = 0;
    this->MotionIDSub = 0;
    this->IsMirroringSub = false;
    this->IsLoopingSub = false;
    this->MotionBlendAlpha = 0.00f;
    this->FacialBlendAlpha = 0.00f;
    this->OtherMotionBlendAlpha = 0.00f;
    this->IsPoseBlend = false;
    this->IsTrunArround = false;
    this->MergeUniqueIDOld = 0;
    this->FacialMergeUniqueIDOld = 0;
    this->IsNoMergePartsAttachBone = false;
    this->IsMirroringMerge = false;
    this->isDrawStencil = false;
    this->StencilValue = 0;
    this->isAddTargetSteerInJointLock = false;
    this->isAlreadySetup = false;
    this->Visual = NULL;
    this->DuckBoneControlSetting = NULL;
    this->DuckCharaMaterialController = NULL;
    this->AnimBlueprint = NULL;
    this->MotionAssetCommon = NULL;
    this->AppendAnimsCommon = NULL;
    this->DefaultMotionAsset = NULL;
    this->LockedMotionAsset = NULL;
}


