#pragma once
#include "DuckModule.h"
#include "CollectionSound.generated.h"

class USoundAtomCueSheet;

USTRUCT(BlueprintType)
struct DUCK_API FCollectionSound {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheetAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCueSheet* CueSheetOrigin;
    
    FCollectionSound();
};

