#pragma once
#include "DuckModule.h"
#include "EStageType.h"
#include "StageSelectData.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FStageSelectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EStageType StageType;
    
    FStageSelectData();
};

