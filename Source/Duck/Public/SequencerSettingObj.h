#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "SequencerSettingObj.generated.h"

UCLASS(Blueprintable)
class DUCK_API ASequencerSettingObj : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp, meta=(AllowPrivateAccess=true))
    float CameraNearClipPlane;
    
public:
    ASequencerSettingObj();
};

