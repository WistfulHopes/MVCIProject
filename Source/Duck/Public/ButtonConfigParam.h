#pragma once
#include "DuckModule.h"
#include "ButtonConfigTeam.h"
#include "ButtonConfigParam.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FButtonConfigParam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FButtonConfigTeam TeamData[2];
    
    FButtonConfigParam();
};

