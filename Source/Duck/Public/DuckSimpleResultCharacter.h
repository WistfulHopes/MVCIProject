#pragma once
#include "DuckModule.h"
#include "DuckSimpleCharacter.h"
#include "DuckSimpleResultCharacter.generated.h"

UCLASS(Blueprintable)
class DUCK_API ADuckSimpleResultCharacter : public ADuckSimpleCharacter {
    GENERATED_BODY()
public:
    ADuckSimpleResultCharacter();
    UFUNCTION(BlueprintCallable)
    void SetupStencil(bool FlgOn, int32 Value);
    
};

