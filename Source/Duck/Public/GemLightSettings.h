#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GemLightSetting.h"
#include "GemLightSettings.generated.h"

UCLASS(Blueprintable)
class DUCK_API UGemLightSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGemLightSetting> Settings;
    
    UGemLightSettings();
};

