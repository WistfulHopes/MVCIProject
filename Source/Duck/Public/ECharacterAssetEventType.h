#pragma once
#include "DuckModule.h"
#include "ECharacterAssetEventType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetEventType : uint8 {
    OWNER,
    SYSTEM,
    CHARA,
    FIELD,
    HUD,
    CAMERA,
    SOUND,
    UNIQUE,
    SHOT,
    STORY,
};

