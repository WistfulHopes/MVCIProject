#pragma once
#include "DuckModule.h"
#include "CharacterAssetKeyDetails.h"
#include "CharacterAssetAutoTriggerKey.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAssetAutoTriggerKey : public FCharacterAssetKeyDetails {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TriggerID;
    
    FCharacterAssetAutoTriggerKey();
};

