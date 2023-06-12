#pragma once
#include "DuckModule.h"
#include "DuckKPIItemAcquirement.generated.h"

USTRUCT(BlueprintType)
struct DUCKANALYTICS_API FDuckKPIItemAcquirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasCardAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Has3PColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Has4PColor;
    
    FDuckKPIItemAcquirement();
};

