#include "DuckModule.h"
#include "AnimNode_DuckMirroring.h"

FAnimNode_DuckMirroring::FAnimNode_DuckMirroring() {
    this->IsEnableMirroring = false;
    this->CurSkeletalMesh = NULL;
    this->castedAnim = NULL;
}


