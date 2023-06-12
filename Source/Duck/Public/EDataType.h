#pragma once
#include "DuckModule.h"
#include "EDataType.generated.h"

UENUM(BlueprintType)
enum class EDataType : uint8 {
    SystemData,
    ReplayData,
    KPIData,
};

