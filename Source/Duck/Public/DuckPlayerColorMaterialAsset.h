#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DuckPlayerColorMaterialAsset.generated.h"

class UMaterialInterface;

UCLASS(Blueprintable)
class DUCK_API UDuckPlayerColorMaterialAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> Materials;
    
    UDuckPlayerColorMaterialAsset();
};

