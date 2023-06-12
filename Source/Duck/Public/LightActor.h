#pragma once
#include "DuckModule.h"
#include "LightActor.generated.h"

class UBlueprint;

USTRUCT(BlueprintType)
struct DUCK_API FLightActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBlueprint* Light;
    
    FLightActor();
};

