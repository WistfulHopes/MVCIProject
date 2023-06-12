#pragma once
#include "DuckModule.h"
#include "RollBackParameterDouble.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FRollBackParameterDouble {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LifeFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ElapsedFrame;
    
    FRollBackParameterDouble();
};

