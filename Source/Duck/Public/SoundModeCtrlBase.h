#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "SoundModeCtrlBase.generated.h"

UCLASS(Abstract, Blueprintable)
class DUCK_API USoundModeCtrlBase : public UObject {
    GENERATED_BODY()
public:
    USoundModeCtrlBase();
};

