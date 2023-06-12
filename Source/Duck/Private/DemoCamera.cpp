#include "DuckModule.h"
#include "DemoCamera.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SkeletalMeshComponent -FallbackName=SkeletalMeshComponent
#include "DemoCineCameraComponent.h"

ADemoCamera::ADemoCamera() {
    this->SkeletalMeshComponent = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkMeshComponent"));
    this->CameraComponent = CreateDefaultSubobject<UDemoCineCameraComponent>(TEXT("CameraComponent"));
}


