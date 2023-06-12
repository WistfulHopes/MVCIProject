#include "DuckModule.h"
#include "CharacterAssetFacialMergeKey.h"

FCharacterAssetFacialMergeKey::FCharacterAssetFacialMergeKey() {
    this->DeltaEnd = 0.00f;
    this->Delta = 0.00f;
    this->isPoseMerge = false;
    this->isPlaceMerge = false;
    this->Type = ECharacterAssetMergeType::PREVIOUS;
}


