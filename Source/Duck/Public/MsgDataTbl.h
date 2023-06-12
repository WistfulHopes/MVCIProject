#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "MsgDataTbl.generated.h"

UCLASS(Blueprintable)
class DUCK_API UMsgDataTbl : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> MsgData;
    
    UMsgDataTbl();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetMsgText(int32 index) const;
    
};

