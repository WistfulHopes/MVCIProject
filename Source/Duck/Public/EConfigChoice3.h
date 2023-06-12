#pragma once
#include "DuckModule.h"
#include "EConfigChoice3.generated.h"

UENUM(BlueprintType)
enum class EConfigChoice3 : uint8 {
    CNF_OFF,
    CNF_ON,
    CNF_RANDOM,
    CNF_MAX UMETA(Hidden),
};

