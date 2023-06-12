#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BattleSettingAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UBattleSettingAsset : public UObject {
    GENERATED_BODY()
public:
    UBattleSettingAsset();
};

