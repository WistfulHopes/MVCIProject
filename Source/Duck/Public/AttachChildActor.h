#pragma once
#include "DuckModule.h"
#include "AttachChildActor.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FAttachChildActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BoneName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName TagName;
    
    FAttachChildActor();
};

