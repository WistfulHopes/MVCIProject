#include "DuckModule.h"
#include "DuckCameraMotion.h"
#include "DuckSkeletalMeshComponent.h"

UDuckSkeletalMeshComponent* ADuckCameraMotion::GetMeshComponent() {
    return NULL;
}

ADuckCameraMotion::ADuckCameraMotion() {
    this->MotionTypeMain = 0;
    this->MotionIDMain = 0;
    this->IsMirroringChara = false;
    this->IsMirroringMain = false;
    this->IsLoopingMain = false;
    this->MotionTypeSub = 0;
    this->MotionIDSub = 0;
    this->IsMirroringSub = false;
    this->IsLoopingSub = false;
    this->MotionBlendAlpha = 0.00f;
    this->Visual = NULL;
    this->targetChara = NULL;
    this->MotionAssetCommon = NULL;
    this->AppendAnimsCommon = NULL;
    this->animInst = NULL;
    this->SkeletalMesh = NULL;
    this->SkeletalMeshComponent = CreateDefaultSubobject<UDuckSkeletalMeshComponent>(TEXT("SkMeshComponent"));
    this->AnimBlueprint = NULL;
    this->isConvertFOV = false;
    this->FOVValue = 0.00f;
}


