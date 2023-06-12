#include "DuckModule.h"
#include "RollBackParameterSteer.h"

FRollBackParameterSteer::FRollBackParameterSteer() {
    this->LimitAngle = 0;
    this->CalcFrame = 0;
    this->IsSetTarget = false;
}


