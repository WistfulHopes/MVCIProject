#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "DemoBoardReflectorLight.generated.h"

class UDirectionalLightComponent;

UCLASS(Blueprintable)
class DUCK_API ADemoBoardReflectorLight : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDirectionalLightComponent* DirectionalLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStageBoardReflectorLightOff;
    
public:
    ADemoBoardReflectorLight();
};

