#pragma once
#include "DuckModule.h"
#include "EVolumeType.generated.h"

UENUM(BlueprintType)
enum class EVolumeType : uint8 {
    BGM,
    SE,
    VOICE,
    ChatSpeaker,
    StoryMovie,
    VolumeTypeNum,
};

