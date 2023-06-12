#pragma once
#include "Engine.h"
#include "EAutoMatch_Type.generated.h"

UENUM(BlueprintType)
enum class EAutoMatch_Type : uint8 {
    UNKNOWN,
    RANK_MATCH,
    CASUAL_MATCH,
    LOBBY,
    ROOKIES,
    LOCAL,
    EAutoMatch_MAX UMETA(Hidden),
};

