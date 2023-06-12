#include "DuckModule.h"
#include "CharaMotionParam.h"

FCharaMotionParam::FCharaMotionParam() {
    this->AnimMotionType = 0;
    this->AnimMotionId = 0;
    this->ExplicitTime = 0.00f;
    this->PlayRate = 0.00f;
    this->bIsLooping = false;
    this->bMirroring = false;
    this->isMovaApplyX = false;
    this->isMovaApplyY = false;
    this->isMovaApplyZ = false;
}


