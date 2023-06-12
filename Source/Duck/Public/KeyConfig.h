#pragma once
#include "DuckModule.h"
#include "KeyConfigPair.h"
#include "KeyConfig.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FKeyConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKeyConfigPair> ConfigArray;
    
    FKeyConfig();
};

