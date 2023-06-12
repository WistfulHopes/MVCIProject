#include "DuckModule.h"
#include "DuckCharaPartsAnimInstance.h"

TArray<FTransform> UDuckCharaPartsAnimInstance::GetParentPose() {
    return TArray<FTransform>();
}

UDuckCharaPartsAnimInstance::UDuckCharaPartsAnimInstance() {
    this->ParentInstance = NULL;
}


