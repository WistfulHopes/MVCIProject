#pragma once
#include "DuckModule.h"
#include "EStoryTextSupportChara.generated.h"

UENUM(BlueprintType)
enum class EStoryTextSupportChara : uint8 {
    TXT_SUPPORT_NONE,
    TXT_SUPPORT_PL02E,
    TXT_SUPPORT_MAX UMETA(Hidden),
};

