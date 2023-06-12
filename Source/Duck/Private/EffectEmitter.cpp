#include "DuckModule.h"
#include "EffectEmitter.h"
#include "DuckParticleSystemComponent.h"

AEffectEmitter::AEffectEmitter() {
    this->ParticleComponent = CreateDefaultSubobject<UDuckParticleSystemComponent>(TEXT("ParticleComponent"));
    this->RestoreComponent = CreateDefaultSubobject<UDuckParticleSystemComponent>(TEXT("RestoreComponent"));
    this->CableActor = NULL;
    this->CableControlComponent = NULL;
    this->State = EEmitterState::SPAWNING;
    this->CharaMesh = NULL;
    this->CharaMeshMirror = NULL;
    this->Visual = NULL;
}


