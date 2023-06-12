#pragma once
#include "DuckModule.h"
#include "EStyleOperation.generated.h"

UENUM(BlueprintType)
enum class EStyleOperation : uint8 {
    SET,
    ADD,
    AND,
    OR,
};

