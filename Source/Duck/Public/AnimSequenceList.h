#pragma once
#include "DuckModule.h"
#include "AnimSequenceList.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct DUCK_API FAnimSequenceList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> AnimSeqList;
    
    FAnimSequenceList();
};

