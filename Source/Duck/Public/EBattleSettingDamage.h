#pragma once
#include "DuckModule.h"
#include "EBattleSettingDamage.generated.h"

UENUM(BlueprintType)
enum class EBattleSettingDamage : uint8 {
    DAMAGE_LOWEST,
    DAMAGE_LOW,
    DAMAGE_MEDIUM,
    DAMAGE_HIGH,
    DAMAGE_HIGHEST,
    DAMAGE_MAX UMETA(Hidden),
};

