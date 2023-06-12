#pragma once
#include "DuckModule.h"
#include "ESoundSequencerId.generated.h"

UENUM(BlueprintType)
enum class ESoundSequencerId : uint8 {
    SEQ_ID_MOUTH_ON,
    SEQ_ID_MOUTH_OFF,
    SEQ_ID_MOUTH_MAX UMETA(Hidden),
};

