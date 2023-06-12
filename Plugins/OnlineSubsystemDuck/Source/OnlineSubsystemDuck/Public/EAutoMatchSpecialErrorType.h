#pragma once
#include "Engine.h"
#include "EAutoMatchSpecialErrorType.generated.h"

UENUM(BlueprintType)
enum class EAutoMatchSpecialErrorType : uint8 {
    AUTOMATCH_TIMEOUT = 0x2,
    AUTOMATCH_ROOKIESERROR,
    AUTOMATCH_CONTEXTERROR,
    AUTOMATCH_MAX UMETA(Hidden),
};

