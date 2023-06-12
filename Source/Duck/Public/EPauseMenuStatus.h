#pragma once
#include "DuckModule.h"
#include "EPauseMenuStatus.generated.h"

UENUM(BlueprintType)
enum EPauseMenuStatus {
    None,
    select,
    DECIDE,
    PRE_TRANSITION,
    TRANSITION,
};

