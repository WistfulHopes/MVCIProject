#pragma once
#include "DuckModule.h"
#include "EMsgBtlTrgCategory.h"
#include "DuckMsgTargetInfo.generated.h"

USTRUCT(BlueprintType)
struct FDuckMsgTargetInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMsgBtlTrgCategory Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<int32> ArrCharaID;
    
    DUCK_API FDuckMsgTargetInfo();
};

