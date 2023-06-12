#pragma once
#include "DuckModule.h"
#include "DuckHUDBase.h"
#include "BattleHUD.generated.h"

class ADuckCharaVisualManager;

UCLASS(Blueprintable, NonTransient)
class DUCK_API ABattleHUD : public ADuckHUDBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADuckCharaVisualManager* mpVisualManager;
    
public:
    ABattleHUD();
};

