#pragma once
#include "CableComponent.h"
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CableComponent -ObjectName=CableComponent -FallbackName=CableComponent
#include "DuckCableComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DUCK_API UDuckCableComponent : public UCableComponent {
    GENERATED_BODY()
public:
    UDuckCableComponent();
};

