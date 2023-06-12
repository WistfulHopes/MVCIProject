#pragma once
#include "DuckModule.h"
#include "ECharacterAssetMotType.generated.h"

UENUM(BlueprintType)
enum class ECharacterAssetMotType : uint8 {
    COMMONOBJECT,
    UNIQUEOBJECT,
    UNIQUECAMERA,
    UNIQUEFACIAL,
    TARGETOBJECT,
    OPTIONOBJECT,
    COMMONCAMERA,
};

