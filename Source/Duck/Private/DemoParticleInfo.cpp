#include "DuckModule.h"
#include "DemoParticleInfo.h"

FDemoParticleInfo::FDemoParticleInfo() {
    this->AttachPartsId = 0;
    this->LocationRule = EAttachmentRule::KeepRelative;
    this->RotationRule = EAttachmentRule::KeepRelative;
    this->ScaleRule = EAttachmentRule::KeepRelative;
}


