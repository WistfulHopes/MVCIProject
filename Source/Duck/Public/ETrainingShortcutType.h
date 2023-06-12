#pragma once
#include "DuckModule.h"
#include "ETrainingShortcutType.generated.h"

UENUM(BlueprintType)
enum class ETrainingShortcutType : uint8 {
    None,
    CommandList,
    Restart,
};

