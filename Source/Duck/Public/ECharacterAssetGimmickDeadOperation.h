#pragma once
#include "DuckModule.h"
#include "ECharacterAssetGimmickDeadOperation.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetGimmickDeadOperation : uint8 {
    OP_DELETE,
    OP_CANCEL,
    OP_CANCEL2DELETE,
};

