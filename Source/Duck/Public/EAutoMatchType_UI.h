#pragma once
#include "DuckModule.h"
#include "EAutoMatchType_UI.generated.h"

UENUM(BlueprintType)
enum class EAutoMatchType_UI : uint8 {
    Off,
    RankMatch,
    CasualMatch,
    Rookies,
    RankCasual,
    EAutoMatchType_MAX UMETA(Hidden),
};

