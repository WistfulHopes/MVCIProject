#include "DuckModule.h"
#include "MoviePlayBase.h"

#include "ManaComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CriWareRuntime -ObjectName=ManaComponent -FallbackName=ManaComponent

void AMoviePlayBase::UpdateManualTimerSyncSound() {
}



void AMoviePlayBase::SetLoop(bool IsLoop) {
}










int32 AMoviePlayBase::GetMovieLastFrame() const {
    return 0;
}


AMoviePlayBase::AMoviePlayBase() {
    this->mpManaComponent = CreateDefaultSubobject<UManaComponent>(TEXT("ManaComponent"));
}


