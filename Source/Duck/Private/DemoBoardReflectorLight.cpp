#include "DuckModule.h"
#include "DemoBoardReflectorLight.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DirectionalLightComponent -FallbackName=DirectionalLightComponent

ADemoBoardReflectorLight::ADemoBoardReflectorLight() {
    this->DirectionalLightComponent = CreateDefaultSubobject<UDirectionalLightComponent>(TEXT("DirectionalLightComponent"));
    this->bStageBoardReflectorLightOff = true;
}


