#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DuckStageSkeletalBase.generated.h"

UCLASS(Blueprintable)
class DUCK_API ADuckStageSkeletalBase : public AActor {
    GENERATED_BODY()
public:
    ADuckStageSkeletalBase();
};

