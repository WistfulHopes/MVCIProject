#pragma once
#include "DuckModule.h"
#include "DuckGameMode.h"
#include "EScrollEventType.h"
#include "BattleGameMode.generated.h"

UCLASS(Blueprintable, NonTransient)
class DUCK_API ABattleGameMode : public ADuckGameMode {
    GENERATED_BODY()
public:
    ABattleGameMode();
    UFUNCTION(BlueprintCallable)
    EScrollEventType GetScrollEventType();
    
};

