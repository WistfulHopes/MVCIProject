#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "NetworkInterfaceDuck.generated.h"

UCLASS(Blueprintable)
class DUCK_API UNetworkInterfaceDuck : public UObject {
    GENERATED_BODY()
public:
    UNetworkInterfaceDuck();
};

