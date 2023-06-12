#pragma once
#include "DuckModule.h"
#include "CollectionMovie.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCollectionMovie {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 index;
    
    FCollectionMovie();
};

