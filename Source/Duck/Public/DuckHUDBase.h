#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "DuckHUDBase.generated.h"

UCLASS(Blueprintable, NonTransient)
class DUCK_API ADuckHUDBase : public AHUD {
    GENERATED_BODY()
public:
    ADuckHUDBase();
};

