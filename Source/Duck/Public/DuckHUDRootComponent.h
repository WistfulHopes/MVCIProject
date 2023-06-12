#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "DuckHUDRootComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DUCK_API UDuckHUDRootComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UDuckHUDRootComponent();
};

