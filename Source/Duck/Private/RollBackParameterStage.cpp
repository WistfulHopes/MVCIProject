#include "DuckModule.h"
#include "RollBackParameterStage.h"

FRollBackParameterStage::FRollBackParameterStage() {
    this->isActiveGem = false;
    this->isAnotherWorld = false;
    this->isAnotherWorldInternal = false;
    this->GemKind = 0;
    this->ActressLightChangeFrame = 0;
    this->isActressLightOnOld = false;
}


