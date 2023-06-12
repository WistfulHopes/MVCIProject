#pragma once
#include "DuckModule.h"
#include "EWinType.generated.h"

UENUM(BlueprintType)
enum class EWinType : uint8 {
    TYPE_NONE,
    TYPE_KO,
    TYPE_TIMEOVER,
    TYPE_CLEAR,
    TYPE_FAIL,
    TYPE_WIN,
    TYPE_LOSE,
    TYPE_MAX UMETA(Hidden),
};

