#pragma once
#include "DuckModule.h"
#include "ESaveGameBranch.generated.h"

UENUM(BlueprintType)
enum class ESaveGameBranch : uint8 {
    Success,
    Failure,
};

