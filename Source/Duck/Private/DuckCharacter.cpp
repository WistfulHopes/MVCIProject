#include "DuckModule.h"
#include "DuckCharacter.h"

ADuckCharacter::ADuckCharacter() {
    this->charaID = 0;
    this->ColorMaterialID = 0;
    this->CostumeID = 0;
    this->isApplyExpression = false;
    this->SkeletalMeshComponent = NULL;
    this->OriginalMeshComoonentForArrange = NULL;
    this->PartsAsset = NULL;
    this->OriginPartsAssetForArrange = NULL;
    this->MotionAsset = NULL;
    this->AppendAnimsUnique = NULL;
    this->PlayerColorMaterialAsset = NULL;
}


