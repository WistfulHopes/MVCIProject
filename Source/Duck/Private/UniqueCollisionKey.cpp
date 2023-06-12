#include "DuckModule.h"
#include "UniqueCollisionKey.h"

FUniqueCollisionKey::FUniqueCollisionKey() {
    this->Value = 0;
    this->Operation = 0;
    this->ParamIndex = 0;
    this->CheckType = 0;
    this->CheckFlags = 0;
    this->CollisionListIndex = 0;
}


