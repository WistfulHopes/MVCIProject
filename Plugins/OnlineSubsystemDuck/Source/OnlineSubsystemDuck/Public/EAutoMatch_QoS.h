#pragma once
#include "Engine.h"
#include "EAutoMatch_QoS.generated.h"

UENUM(BlueprintType)
enum class EAutoMatch_QoS : uint8 {
    AUTOMATCH_LEVEL1_QOS,
    AUTOMATCH_LEVEL2_QOS,
    AUTOMATCH_LEVEL3_QOS,
    AUTOMATCH_LEVEL4_QOS,
    AUTOMATCH_LEVEL5_QOS,
    AUTOMATCH_MAX UMETA(Hidden),
};

