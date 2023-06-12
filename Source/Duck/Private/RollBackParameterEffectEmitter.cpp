#include "DuckModule.h"
#include "RollBackParameterEffectEmitter.h"

FRollBackParameterEffectEmitter::FRollBackParameterEffectEmitter() {
    this->State = 0;
    this->isCalledFromEngine = false;
    this->ElapsedFrame = 0;
    this->EmitterElapsedFrame = 0;
    this->CancelElapsedFrame = 0;
    this->LightState = 0;
    this->LightFrame = 0;
    this->isInCancelParentDead = false;
}


