#pragma once
#include "DuckModule.h"
#include "EFinishType.generated.h"

UENUM(BlueprintType)
enum class EFinishType : uint8 {
    TYPE_NONE,
    TYPE_NORMAL,
    TYPE_KEZURI,
    TYPE_TIMEUP,
    TYPE_DRAW,
    TYPE_HYPER,
    TYPE_PERFECT,
    TYPE_MAX UMETA(Hidden),
};

