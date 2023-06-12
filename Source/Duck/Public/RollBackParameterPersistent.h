#pragma once
#include "DuckModule.h"
#include "RollBackParameterPersistent.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FRollBackParameterPersistent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DelayFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TimerFrame;
    
    FRollBackParameterPersistent();
};

