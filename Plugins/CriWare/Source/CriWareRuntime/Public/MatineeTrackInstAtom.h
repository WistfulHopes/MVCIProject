#pragma once
#include "Engine.h"
#include "Matinee/InterpTrackInst.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=InterpTrackInst -FallbackName=InterpTrackInst
#include "MatineeTrackInstAtom.generated.h"

class UAtomComponent;
class UMatineeTrackAtomSoundBase;

UCLASS(Blueprintable)
class UMatineeTrackInstAtom : public UInterpTrackInst {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LastUpdatePosition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAtomComponent* AtomComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMatineeTrackAtomSoundBase* AtomTrack;
    
    UMatineeTrackInstAtom();
};

