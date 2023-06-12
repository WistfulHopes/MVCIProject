#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DuckCharaSound.generated.h"

class ADuckCharaVisualManager;

UCLASS(Blueprintable)
class DUCK_API UDuckCharaSound : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADuckCharaVisualManager* mpVisualManager;
    
public:
    UDuckCharaSound();
};

