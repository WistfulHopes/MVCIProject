#include "DuckModule.h"
#include "RollBackParameterPersistent.h"

FRollBackParameterPersistent::FRollBackParameterPersistent() {
    this->IsActive = false;
    this->DelayFrame = 0;
    this->TimerFrame = 0;
}


