#pragma once
#include "DuckModule.h"
#include "DuckMatEffectsSetting.h"
#include "DuckMatEffectsSettingAll.h"
#include "EMaterialColorType.h"
#include "DuckMatColorType.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FDuckMatColorType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMaterialColorType ColorType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuckMatEffectsSettingAll> SettingAll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuckMatEffectsSetting> SettingMaterial;
    
    FDuckMatColorType();
};

