#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DuckCharaLockedMotionSetting.h"
#include "DuckCharaLockedMotionAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UDuckCharaLockedMotionAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuckCharaLockedMotionSetting> setting;
    
    UDuckCharaLockedMotionAsset();
};

