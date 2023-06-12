#pragma once
#include "DuckModule.h"
#include "DemoMotionUpdateInf.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FDemoMotionUpdateInf {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 motion_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 motion_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float motion_frame;
    
    FDemoMotionUpdateInf();
};

