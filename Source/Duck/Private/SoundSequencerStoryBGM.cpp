#include "DuckModule.h"
#include "SoundSequencerStoryBGM.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CriWareRuntime -ObjectName=AtomComponent -FallbackName=AtomComponent

ASoundSequencerStoryBGM::ASoundSequencerStoryBGM() {
    this->AtomComponent = CreateDefaultSubobject<UAtomComponent>(TEXT("AtomComponent0"));
    this->AtomCue = NULL;
    this->SoundType = EStreamSoundType::STREAM_BATTLE;
    this->StopSound = false;
    this->FadeOutTime = 2500.00f;
}


