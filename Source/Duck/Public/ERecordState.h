#pragma once
#include "DuckModule.h"
#include "ERecordState.generated.h"

UENUM(BlueprintType)
enum class ERecordState : uint8 {
    NONE,
    RECORD,
    PLAY,
    PLAY_RANDOM,
};

