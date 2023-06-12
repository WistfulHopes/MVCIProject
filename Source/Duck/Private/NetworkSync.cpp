#include "DuckModule.h"
#include "NetworkSync.h"

UNetworkSync* UNetworkSync::SetupNetworkSync() {
    return NULL;
}

bool UNetworkSync::IsSyncError() {
    return false;
}

bool UNetworkSync::IsSpectator() {
    return false;
}

bool UNetworkSync::IsSpectateError() {
    return false;
}

bool UNetworkSync::IsReplay() {
    return false;
}

bool UNetworkSync::IsCompetitor() {
    return false;
}

FMemberInfo UNetworkSync::GetMemberInfo(int32 Team) {
    return FMemberInfo{};
}

EAutoMatch_Type UNetworkSync::GetMatchType() {
    return EAutoMatch_Type::UNKNOWN;
}

UNetworkSync::UNetworkSync() {
}


