#include "DuckModule.h"
#include "FlowPreLoader.h"

void AFlowPreLoader::RequestUnloadSpecifiedName(const FString& PackName) {
}

void AFlowPreLoader::RequestUnload() {
}

bool AFlowPreLoader::RequestAsyncLoad(const FString& PackName, EDuckLoadPrio Prio) {
    return false;
}

bool AFlowPreLoader::IsAsyncLoadEnd() const {
    return false;
}

AFlowPreLoader::AFlowPreLoader() {
}


