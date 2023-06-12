#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SoundSequencerObj.generated.h"

class UAtomComponent;
class USoundAtomCue;

UCLASS(Blueprintable)
class DUCK_API ASoundSequencerObj : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAtomComponent* AtomComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* AtomCue;
    
public:
    ASoundSequencerObj();
    UFUNCTION(BlueprintCallable)
    void SetUse3DPos();
    
};

