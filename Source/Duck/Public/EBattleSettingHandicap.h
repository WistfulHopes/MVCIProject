#pragma once
#include "DuckModule.h"
#include "EBattleSettingHandicap.generated.h"

UENUM(BlueprintType)
enum class EBattleSettingHandicap : uint8 {
    HANDICAP_LOWEST,
    HANDICAP_LOW,
    HANDICAP_MEDIUM,
    HANDICAP_HIGH,
    HANDICAP_HIGHEST,
    HANDICAP_MAX UMETA(Hidden),
};

