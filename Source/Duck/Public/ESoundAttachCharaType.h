#pragma once
#include "DuckModule.h"
#include "ESoundAttachCharaType.generated.h"

UENUM(BlueprintType)
enum class ESoundAttachCharaType : uint8 {
    PL_COMMON,
    PL_02B,
    PL_MAX UMETA(Hidden),
};

