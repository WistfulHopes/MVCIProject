#include "DuckModule.h"
#include "SimpleEffectEmitter.h"
#include "DuckParticleSystemComponent.h"

ASimpleEffectEmitter::ASimpleEffectEmitter() {
    this->ParticleComponent = CreateDefaultSubobject<UDuckParticleSystemComponent>(TEXT("ParticleComponent"));
}


