#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BoxComponent -FallbackName=BoxComponent
#include "PCUIBoxCollision.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DUCK_API UPCUIBoxCollision : public UBoxComponent {
    GENERATED_BODY()
public:
    UPCUIBoxCollision();
};

