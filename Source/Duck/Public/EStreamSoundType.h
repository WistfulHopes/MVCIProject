#pragma once
#include "DuckModule.h"
#include "EStreamSoundType.generated.h"

UENUM(BlueprintType)
enum class EStreamSoundType : uint8 {
    STREAM_BATTLE,
    STREAM_MOVIE,
    STREAM_MAX UMETA(Hidden),
};

