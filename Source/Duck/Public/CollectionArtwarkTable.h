#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CollectionArtwarkTableParam.h"
#include "CollectionArtwarkTable.generated.h"

UCLASS(Blueprintable)
class DUCK_API UCollectionArtwarkTable : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCollectionArtwarkTableParam> Param;
    
    UCollectionArtwarkTable();
};

