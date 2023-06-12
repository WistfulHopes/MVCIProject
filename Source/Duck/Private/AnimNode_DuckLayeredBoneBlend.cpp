#include "DuckModule.h"
#include "AnimNode_DuckLayeredBoneBlend.h"

FAnimNode_DuckLayeredBoneBlend::FAnimNode_DuckLayeredBoneBlend() {
    this->bMeshSpaceRotationBlend = false;
    this->CurveBlendOption = ECurveBlendOption::MaxWeight;
    this->bHasRelevantPoses = false;
}


