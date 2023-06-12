#include "DuckModule.h"
#include "FlowBase.h"




void AFlowBase::SetMouseWaitTime(float Time) {
}

void AFlowBase::RequestUnloadAssets(int32 ID) {
}

int32 AFlowBase::RequestLoadAssets(const TArray<FString>& AssetNames, bool IsTravel, EDuckLoadPrio Prio) {
    return 0;
}



bool AFlowBase::IsWindowActive() {
    return false;
}

bool AFlowBase::IsLoadAssetsEnd(int32 ID) const {
    return false;
}

float AFlowBase::GetMouseWaitTime() {
    return 0.0f;
}


AFlowBase::AFlowBase() {
}


