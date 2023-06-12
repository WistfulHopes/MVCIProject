#include "DuckModule.h"
#include "DuckDemoSkeletalMesh.h"
#include "DuckDemoSkeletalMeshComponent.h"

void ADuckDemoSkeletalMesh::Setup() {
}

void ADuckDemoSkeletalMesh::SetPhysicsBlendSet(const TArray<FPhysicsBlendSet>& Set) {
}

ADuckDemoSkeletalMesh::ADuckDemoSkeletalMesh() {
    this->RootSkMeshComponent = CreateDefaultSubobject<UDuckDemoSkeletalMeshComponent>(TEXT("SkMeshComponent"));
    this->NouseClothPhysics = false;
    this->FlgTeleportOn = false;
    this->PhysicsAssetOriginal = NULL;
}


