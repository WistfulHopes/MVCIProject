#include "DuckModule.h"
#include "RollBackParameterBlend.h"

FRollBackParameterBlend::FRollBackParameterBlend() {
    this->BlendType = 0;
    this->BlendTarget = 0;
    this->BlendRate = 0.00f;
    this->BlendDelta = 0.00f;
    this->BlendElapsed = 0.00f;
    this->KindFlags = 0;
}


