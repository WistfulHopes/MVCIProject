#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=TextBlock -FallbackName=TextBlock
#include "EForceJustification.h"
#include "TextBlock.h"
#include "UserNameTextBlock.generated.h"

UCLASS(Blueprintable)
class DUCK_API UUserNameTextBlock : public UTextBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsUseMaxXSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxXSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EForceJustification OverrideJustification;
    
    UUserNameTextBlock();
    UFUNCTION(BlueprintCallable)
    static void SetUserNameTrimSuffix(const FText& UserName);
    
};

