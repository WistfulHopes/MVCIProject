#include "DuckModule.h"
#include "DuckParticleSystemComponent.h"

void UDuckParticleSystemComponent::StopEmitParticle(bool isOverrideLastTick) {
}

void UDuckParticleSystemComponent::StartEmitParticle(bool isOverrideLastTick) {
}

void UDuckParticleSystemComponent::SetupForStageEffect() {
}

void UDuckParticleSystemComponent::KillAllParticle() {
}

bool UDuckParticleSystemComponent::GetWasCompleted() const {
    return false;
}

bool UDuckParticleSystemComponent::GetIsHultSpawn() const {
    return false;
}

UDuckParticleSystemComponent::UDuckParticleSystemComponent() {
    this->TickType = 2;
    this->TickComponentDisable = true;
    this->OldTransform.AddDefaulted(120);
    this->LightActor = NULL;
    this->LightControlComponent = NULL;
    this->LightComponent = NULL;
}


