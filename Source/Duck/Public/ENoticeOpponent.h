#pragma once
#include "DuckModule.h"
#include "ENoticeOpponent.generated.h"

UENUM(BlueprintType)
enum class ENoticeOpponent : uint8 {
    NONE,
    DANGER,
    DOWN,
};

