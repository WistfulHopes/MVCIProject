#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "LoadPackageData.generated.h"

class UObject;

UCLASS(Blueprintable)
class DUCK_API ULoadPackageData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ArrLoadData;
    
    ULoadPackageData();
};

