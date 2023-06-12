#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "RecordInput.h"
#include "RecordDataAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API URecordDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRecordInput> Data;
    
    URecordDataAsset();
};

