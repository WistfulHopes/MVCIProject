#pragma once
#include "DuckModule.h"
#include "EMirrorAxis.generated.h"

UENUM(BlueprintType)
namespace EMirrorAxis {
    enum Type {
        NONE,
        X,
        Y,
        XY,
        Z,
        XZ,
        YZ,
        XYZ,
    };
}

