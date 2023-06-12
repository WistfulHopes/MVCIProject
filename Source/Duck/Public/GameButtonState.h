#pragma once
#include "DuckModule.h"
#include "GameButtonState.generated.h"

UENUM(BlueprintType)
enum class GameButtonState : uint8 {
    Press,
    PressTrg,
    Release,
    ReleaseTrg,
    _Invalid,
};

