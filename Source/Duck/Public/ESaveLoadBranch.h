#pragma once
#include "DuckModule.h"
#include "ESaveLoadBranch.generated.h"

UENUM(BlueprintType)
enum class ESaveLoadBranch : uint8 {
    Success,
    Failure,
    Progress,
};

