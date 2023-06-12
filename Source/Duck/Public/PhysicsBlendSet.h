#pragma once
#include "DuckModule.h"
#include "PhysicsBlendSet.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsBlendSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float BlendWeight;
    
    DUCK_API FPhysicsBlendSet();
};

