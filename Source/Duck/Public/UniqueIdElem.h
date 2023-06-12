#pragma once
#include "DuckModule.h"
#include "UniqueIdElem.generated.h"

USTRUCT(BlueprintType)
struct FUniqueIdElem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> Bytes;
    
    DUCK_API FUniqueIdElem();
};

