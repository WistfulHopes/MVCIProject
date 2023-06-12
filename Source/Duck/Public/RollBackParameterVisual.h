#pragma once
#include "DuckModule.h"
#include "RollBackParameterActioninf.h"
#include "RollBackParameterActioninfArray.h"
#include "RollBackParameterCamera.h"
#include "RollBackVisualLockParameter.h"
#include "RollBackVisualVfxParameter.h"
#include "RollBackParameterVisual.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FRollBackParameterVisual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRollBackVisualVfxParameter> VfxParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRollBackParameterActioninfArray> OldParameterSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRollBackParameterActioninf> PreParameterSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRollBackVisualLockParameter> LockParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRollBackParameterCamera CameraParameter;
    
    FRollBackParameterVisual();
};

