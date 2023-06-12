#pragma once
#include "Engine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "CriFsLoader.generated.h"

class UCriFsLoaderComponent;

UCLASS(Blueprintable, MinimalAPI)
class ACriFsLoader : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCriFsLoaderComponent* LoaderComponent;
    
    ACriFsLoader();
};

