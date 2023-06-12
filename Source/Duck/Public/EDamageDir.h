#pragma once
#include "DuckModule.h"
#include "EDamageDir.generated.h"

UENUM(BlueprintType)
enum class EDamageDir : uint8 {
    DIR_AUTO,
    DIR_FRONT,
    DIR_BACK,
    DIR_MAX UMETA(Hidden),
};

