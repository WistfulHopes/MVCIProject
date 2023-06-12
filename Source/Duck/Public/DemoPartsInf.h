#pragma once
#include "DuckModule.h"
#include "DemoMotionUpdateInf.h"
#include "DemoPartsInf.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FDemoPartsInf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 attach_bone_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 attached_bone_index;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDemoMotionUpdateInf motion_inf;
    
    FDemoPartsInf();
};

