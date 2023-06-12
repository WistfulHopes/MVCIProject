#pragma once
#include "DuckModule.h"
#include "ECharacterAssetUParamOpeType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetUParamOpeType : uint8 {
    SET,
    ADD,
    AND,
    OR,
    XOR,
};

