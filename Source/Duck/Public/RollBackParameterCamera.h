#pragma once
#include "DuckModule.h"
#include "RollBackParameterCamera.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FRollBackParameterCamera {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 VisibleChara;
    
    FRollBackParameterCamera();
};

