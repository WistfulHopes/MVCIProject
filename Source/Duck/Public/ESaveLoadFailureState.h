#pragma once
#include "DuckModule.h"
#include "ESaveLoadFailureState.generated.h"

UENUM(BlueprintType)
enum class ESaveLoadFailureState : uint8 {
    Selecting,
    DecideRetry,
    DecideIgnore,
};

