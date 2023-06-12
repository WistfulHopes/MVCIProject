#include "DuckModule.h"
#include "AnimNode_DuckBase.h"

FAnimNode_DuckBase::FAnimNode_DuckBase() {
    this->AnimNodeType = EDuckAnimNodeType::NON;
    this->AnimInstance = NULL;
}


