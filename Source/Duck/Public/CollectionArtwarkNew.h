#pragma once
#include "DuckModule.h"
#include "CollectionArtwarkNew.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FCollectionArtwarkNew {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 charaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ArtWorkID;
    
    FCollectionArtwarkNew();
};

