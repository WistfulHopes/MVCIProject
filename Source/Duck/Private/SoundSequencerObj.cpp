#include "DuckModule.h"
#include "SoundSequencerObj.h"

#include "AtomComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CriWareRuntime -ObjectName=AtomComponent -FallbackName=AtomComponent

void ASoundSequencerObj::SetUse3DPos() {
}

ASoundSequencerObj::ASoundSequencerObj() {
    this->AtomComponent = CreateDefaultSubobject<UAtomComponent>(TEXT("AtomComponent0"));
    this->AtomCue = NULL;
}


