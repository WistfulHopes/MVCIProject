#pragma once
#include "CineCameraComponent.h"
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CinematicCamera -ObjectName=CineCameraComponent -FallbackName=CineCameraComponent
#include "DemoCineCameraComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DUCK_API UDemoCineCameraComponent : public UCineCameraComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float OfsFOV;
    
public:
    UDemoCineCameraComponent();
};

