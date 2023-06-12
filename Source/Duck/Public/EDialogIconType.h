#pragma once
#include "DuckModule.h"
#include "EDialogIconType.generated.h"

UENUM(BlueprintType)
enum class EDialogIconType : uint8 {
    DIALOG_ICON_ERROR,
    DIALOG_ICON_INFORMATION,
    DIALOG_ICON_WAITING,
    DIALOG_ICON_WAITINGWITHMANNER,
    DIALOG_ICON_MAX UMETA(Hidden),
};

