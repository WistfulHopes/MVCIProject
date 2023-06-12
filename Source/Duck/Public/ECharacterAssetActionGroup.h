#pragma once
#include "DuckModule.h"
#include "ECharacterAssetActionGroup.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetActionGroup : uint8 {
    BASIC,
    GUARD,
    DAMAGE,
    NORMAL_ATTACK,
    CATCH,
    SPECIAL,
    HYPER,
    PERFORM,
    DEMO,
    INTERRUPT,
    SHOT,
    DEBUG,
    ALL,
};

