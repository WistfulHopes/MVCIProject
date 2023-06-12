#pragma once
#include "DuckModule.h"
#include "CollectionStageNew.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCollectionStageNew {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StageIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ItemIndex;
    
    FCollectionStageNew();
};

