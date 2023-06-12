#include "DuckModule.h"
#include "MirrorNodeConfig.h"

FMirrorNodeConfig::FMirrorNodeConfig() {
    this->Node0Index = 0;
    this->Node1Index = 0;
    this->TranslationMirrorType = EMirrorAxis::NONE;
    this->RotationMirrorType = EMirrorAxis::NONE;
}


