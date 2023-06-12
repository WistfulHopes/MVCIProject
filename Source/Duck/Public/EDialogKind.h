#pragma once
#include "DuckModule.h"
#include "EDialogKind.generated.h"

UENUM(BlueprintType)
enum class EDialogKind : uint8 {
    DIALOG_KIND_NORMAL,
    DIALOG_KIND_ERROR,
    DIALOG_KIND_END,
    DIALOG_KIND_MAX UMETA(Hidden),
};

