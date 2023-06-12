#include "DuckModule.h"
#include "RollBackParameterParts.h"

FRollBackParameterParts::FRollBackParameterParts() {
    this->AttachTarget = ECharacterAssetPartsAttachTarget::OWN;
    this->PartArrayIndex = 0;
    this->AttachPartsIndex = 0;
    this->AttachBoneIndex = 0;
    this->AttachedBoneIndex = 0;
    this->isOn = false;
    this->Slot = 0;
    this->isSameParentBone = false;
    this->MotionSpeed = 0.00f;
}


