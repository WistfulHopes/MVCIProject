#include "DuckModule.h"
#include "LightControlComponent.h"

ULightControlComponent::ULightControlComponent() {
    this->DelayFrame = 0;
    this->AppearFrame = 0;
    this->KeepFrame = 0;
    this->VanishFrame = 0;
    this->Visual = NULL;
    this->Light = NULL;
}


