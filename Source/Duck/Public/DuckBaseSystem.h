#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DuckBaseSystem.generated.h"

UCLASS(Abstract, Blueprintable)
class DUCK_API UDuckBaseSystem : public UObject {
    GENERATED_BODY()
public:
    UDuckBaseSystem();
};

