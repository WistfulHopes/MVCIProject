#pragma once
#include "DuckModule.h"
#include "EWinTeam.generated.h"

UENUM(BlueprintType)
enum class EWinTeam : uint8 {
    TEAM_NONE,
    TEAM_1P,
    TEAM_2P,
    TEAM_DRAW,
    TEAM_MAX UMETA(Hidden),
};

