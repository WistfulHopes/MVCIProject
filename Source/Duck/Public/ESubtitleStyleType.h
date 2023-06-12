#pragma once
#include "DuckModule.h"
#include "ESubtitleStyleType.generated.h"

UENUM(BlueprintType)
enum class ESubtitleStyleType : uint8 {
    SINGLE,
    TWIN_LEFT,
    TWIN_RIGHT,
};

