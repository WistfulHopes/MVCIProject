#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DuckCharaMessageDetail.h"
#include "DuckCharaMessageDataAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UDuckCharaMessageDataAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 charaID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuckCharaMessageDetail> MessageList;
    
    UDuckCharaMessageDataAsset();
};

