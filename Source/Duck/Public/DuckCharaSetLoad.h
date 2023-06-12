#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "CharacterAssetMappingArray.h"
#include "DuckCharaSetLoad.generated.h"

class ADuckCharaMotion;

UCLASS(Blueprintable)
class DUCK_API UDuckCharaSetLoad : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FCharacterAssetMappingArray> CharacterAssetMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ADuckCharaMotion*> PreserveCharaMotion;
    
public:
    UDuckCharaSetLoad();
};

