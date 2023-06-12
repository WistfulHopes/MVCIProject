#pragma once
#include "DuckModule.h"
#include "EInviteProcessResult.generated.h"

UENUM(BlueprintType)
enum class EInviteProcessResult : uint8 {
    WAIT,
    SUCCESS,
    FAIL,
};

