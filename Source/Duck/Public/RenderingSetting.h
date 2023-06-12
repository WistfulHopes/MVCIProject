#pragma once
#include "DuckModule.h"
#include "RenderingSetting.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FRenderingSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isShadowOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isDrawOpacityStencil;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isCastShadow;
    
    FRenderingSetting();
};

