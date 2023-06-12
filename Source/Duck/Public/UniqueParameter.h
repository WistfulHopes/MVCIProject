#pragma once
#include "DuckModule.h"
#include "UniqueParameter.generated.h"

USTRUCT(BlueprintType)
struct FUniqueParameter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 CollisionIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int16 CheckFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 CheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ParamIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Operation;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int8 Value;
    
    DUCK_API FUniqueParameter();
};

