#include "DuckModule.h"
#include "CharacterAssetMergeKey.h"

FCharacterAssetMergeKey::FCharacterAssetMergeKey() {
    this->DeltaEnd = 0.00f;
    this->Delta = 0.00f;
    this->isPoseMerge = false;
    this->isPlaceMerge = false;
    this->Target = ECharacterAssetMergeTarget::OBJECT;
    this->Type = ECharacterAssetMergeType::PREVIOUS;
}


