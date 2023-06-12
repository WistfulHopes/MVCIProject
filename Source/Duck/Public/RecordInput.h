#pragma once
#include "DuckModule.h"
#include "ESide.h"
#include "RecordInput.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FRecordInput {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint16 Input;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESide Side;
    
    FRecordInput();
};

