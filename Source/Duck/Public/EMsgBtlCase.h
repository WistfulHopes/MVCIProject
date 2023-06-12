#pragma once
#include "DuckModule.h"
#include "EMsgBtlCase.generated.h"

UENUM(BlueprintType)
enum class EMsgBtlCase : uint8 {
    MSG_BTL_CASE_APPEAR,
    MSG_BTL_CASE_WIN,
    MSG_BTL_CASE_RESULT,
    MSG_BTL_CASE_MAX UMETA(Hidden),
};

