#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Pawn -FallbackName=Pawn
#include "BattlePawn.generated.h"

UCLASS(Blueprintable)
class DUCK_API ABattlePawn : public APawn {
    GENERATED_BODY()
public:
    ABattlePawn();
};

