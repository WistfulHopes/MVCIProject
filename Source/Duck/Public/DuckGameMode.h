#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameMode -FallbackName=GameMode
#include "DuckGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class DUCK_API ADuckGameMode : public AGameMode {
    GENERATED_BODY()
public:
    ADuckGameMode();
};

