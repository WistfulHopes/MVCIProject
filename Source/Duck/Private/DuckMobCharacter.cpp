#include "DuckModule.h"
#include "DuckMobCharacter.h"
#include "DuckSkeletalMeshComponent.h"

ADuckMobCharacter::ADuckMobCharacter() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<UDuckSkeletalMeshComponent>(TEXT("SkMeshComponent"));
    this->ShouldTickViewPort = true;
    this->BlendAlphaMotion = 1.00f;
}


