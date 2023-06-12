#pragma once
#include "Engine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CriWareInitializer.generated.h"

UCLASS(Blueprintable)
class CRIWARERUNTIME_API UCriWareInitializer : public UObject {
    GENERATED_BODY()
public:
    UCriWareInitializer();
};

