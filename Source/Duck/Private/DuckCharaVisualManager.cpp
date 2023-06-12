#include "DuckModule.h"
#include "DuckCharaVisualManager.h"
#include "DuckSkeletalMeshComponent.h"

TArray<ADuckCharaMotion*> ADuckCharaVisualManager::getDuckCharaMotionArray() const {
    return TArray<ADuckCharaMotion*>();
}

ADuckCharaVisualManager::ADuckCharaVisualManager() {
    this->CharaMotionParent = NULL;
    this->DuckCameraMotion = NULL;
    this->DuckCharaEffect = NULL;
    this->DuckCharaProjectile = NULL;
    this->DuckCharaMaterialCollection = NULL;
    this->DuckStage = NULL;
    this->CommonSkeletalComponent = CreateDefaultSubobject<UDuckSkeletalMeshComponent>(TEXT("SklComponent"));
    this->CommonSkeletalMesh = NULL;
    this->DuckCharaAssetCommon = NULL;
    this->RollBackAction = NULL;
    this->CharacterSetLoad = NULL;
    this->BattleHUD = NULL;
}


