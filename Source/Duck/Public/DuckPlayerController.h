#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerController -FallbackName=PlayerController
#include "DuckPlayerController.generated.h"

UCLASS(Blueprintable)
class DUCK_API ADuckPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ADuckPlayerController();
};

