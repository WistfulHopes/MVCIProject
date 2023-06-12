#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PreLoadAssetPathCSV.generated.h"

USTRUCT(BlueprintType)
struct FPreLoadAssetPathCSV : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PATH;
    
    DUCK_API FPreLoadAssetPathCSV();
};

