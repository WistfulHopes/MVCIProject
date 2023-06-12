#pragma once
#include "Engine.h"
#include "EAutoMatchSelect.generated.h"

UENUM(BlueprintType)
enum class EAutoMatchSelect : uint8 {
    SELECT_NONE,
    SELECT_RETRY,
    SELECT_EASERETRY,
    SELECT_INFINITE,
    SELECT_EASEINFINITE,
    SELECT_MAX UMETA(Hidden),
};

