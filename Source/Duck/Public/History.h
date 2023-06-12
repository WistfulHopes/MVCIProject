#pragma once
#include "DuckModule.h"
#include "EHistoryType.h"
#include "History.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHistoryType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 charaID;
    
    FHistory();
};

