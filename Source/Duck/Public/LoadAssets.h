#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LoadAssets.generated.h"

UCLASS(Blueprintable)
class DUCK_API ULoadAssets : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UObject*> mLoadAssetsObj;
    
public:
    ULoadAssets();
};

