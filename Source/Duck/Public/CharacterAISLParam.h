#pragma once
#include "DuckModule.h"
#include "ECharacterAIAssetSLContinue.h"
#include "ECharacterAIAssetSLType.h"
#include "CharacterAISLParam.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCharacterAISLParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAIAssetSLContinue SLContinueData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECharacterAIAssetSLType SLTypeData;
    
    FCharacterAISLParam();
};

