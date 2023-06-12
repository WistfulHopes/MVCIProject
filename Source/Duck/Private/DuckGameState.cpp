#include "DuckModule.h"
#include "DuckGameState.h"

void ADuckGameState::RequestUnloadAssets() {
}

bool ADuckGameState::RequestLoadAssets(const FString& PackNames, EDuckLoadPrio Prio) {
    return false;
}

bool ADuckGameState::IsLoadAssetsEnd() const {
    return false;
}

ADuckGameState::ADuckGameState() {
    this->mpLoadAsset = NULL;
}


