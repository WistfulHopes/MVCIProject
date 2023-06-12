#pragma once
#include "DuckModule.h"
#include "ButtonConfigTeam.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FButtonConfigTeam {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Input[16];
    
    FButtonConfigTeam();
};

