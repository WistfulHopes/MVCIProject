#pragma once
#include "DuckModule.h"
#include "EStoryInfoType.generated.h"

UENUM(BlueprintType)
enum class EStoryInfoType : uint8 {
    NONE,
    BATTLE,
    SEQUENCER,
    MOVIE,
};

