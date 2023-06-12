#pragma once
#include "DuckModule.h"
#include "DuckCommandListInner.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FDuckCommandListInner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Command;
    
    FDuckCommandListInner();
};

