#include "DuckModule.h"
#include "PersistentVisionEmitter.h"
#include "DuckSkeletalMeshComponent.h"

APersistentVisionEmitter::APersistentVisionEmitter() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<UDuckSkeletalMeshComponent>(TEXT("SkMeshComponent"));
    this->SkeletalMeshComponentParts.AddDefaulted(80);
    this->ParentActor = NULL;
    this->ChangeMaterialAsset = NULL;
}


