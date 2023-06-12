#pragma once
#include "Engine.h"
#include "ELobbyMemberState.generated.h"

UENUM(BlueprintType)
enum class ELobbyMemberState : uint8 {
    SELECT_SLOT,
    WAITING_IN_BATTLESLOT,
    WAITING_IN_SPECTATESLOT,
    SELECT_BATTLETYPE,
    WAITING_BATTLESTART,
    TRAVELING,
};

