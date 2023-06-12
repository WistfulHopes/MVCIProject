#include "DuckModule.h"
#include "LookAtHeadSetting.h"

FLookAtHeadSetting::FLookAtHeadSetting() {
    this->UpLimitDegree = 0.00f;
    this->DownLimitDegree = 0.00f;
    this->HeadToNeckDegreeRatio = 0.00f;
    this->HipToHeadLookAtRatio = 0.00f;
    this->AttenuationSpeed = 0.00f;
    this->MotionBlendFrame = 0.00f;
}


