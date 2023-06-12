#include "DuckModule.h"
#include "SoundSetupParam.h"

FSoundSetupParam::FSoundSetupParam() {
    this->AtomCue = NULL;
    this->AttachBoneType = ESoundAttachBoneType::BONE_NONE;
    this->AttachCharaType = ESoundAttachCharaType::PL_COMMON;
    this->AttachPartsNo = 0;
}


