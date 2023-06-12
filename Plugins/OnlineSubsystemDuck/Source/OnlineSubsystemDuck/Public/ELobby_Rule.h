#pragma once
#include "Engine.h"
#include "ELobby_Rule.generated.h"

UENUM(BlueprintType)
enum class ELobby_Rule : uint8 {
    BOTH_REMAIN,
    WINNER_REMAIN,
    LOSER_REMAIN,
    ELobby_MAX UMETA(Hidden),
};

