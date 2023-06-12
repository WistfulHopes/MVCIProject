#pragma once
#include "DuckModule.h"
#include "DuckMatSinSetting.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FDuckMatSinSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsSinCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SinCycle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimamIntensity;
    
    FDuckMatSinSetting();
};

