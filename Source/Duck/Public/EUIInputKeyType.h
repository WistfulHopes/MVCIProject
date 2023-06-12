#pragma once
#include "DuckModule.h"
#include "EUIInputKeyType.generated.h"

UENUM(BlueprintType)
enum class EUIInputKeyType : uint8 {
    Press,
    Trigger,
    Release,
    Repeat,
};

