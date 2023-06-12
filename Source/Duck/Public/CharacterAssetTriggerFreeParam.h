#pragma once
#include "DuckModule.h"
#include "CharacterAssetTriggerFreeParam.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetTriggerFreeParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Param[4];
    
    FCharacterAssetTriggerFreeParam();
};

