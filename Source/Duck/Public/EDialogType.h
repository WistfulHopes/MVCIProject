#pragma once
#include "DuckModule.h"
#include "EDialogType.generated.h"

UENUM(BlueprintType)
enum class EDialogType : uint8 {
    Error,
    Admin,
    System,
    Notice,
    Information,
    Confirm,
    Hint,
    Progress,
    Select1,
    Select2,
    Waiting,
};

