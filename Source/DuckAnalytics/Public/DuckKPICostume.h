#pragma once
#include "DuckModule.h"
#include "DuckKPICostume.generated.h"

USTRUCT(BlueprintType)
struct DUCKANALYTICS_API FDuckKPICostume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint16> Color;
    
    FDuckKPICostume();
};

