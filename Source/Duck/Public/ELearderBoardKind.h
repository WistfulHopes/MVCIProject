#pragma once
#include "DuckModule.h"
#include "ELearderBoardKind.generated.h"

UENUM(BlueprintType)
enum class ELearderBoardKind : uint8 {
    KIND_LEVEL,
    KIND_WINS,
    KIND_STREAK,
    KIND_MAX UMETA(Hidden),
};

