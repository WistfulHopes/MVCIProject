#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNode_Base -FallbackName=AnimNode_Base
#include "EDuckAnimNodeType.h"
#include "Animation/AnimNodeBase.h"
#include "AnimNode_DuckBase.generated.h"

class UDuckCharaAnimInstance;

USTRUCT(BlueprintType)
struct DUCK_API FAnimNode_DuckBase : public FAnimNode_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDuckAnimNodeType AnimNodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDuckCharaAnimInstance* AnimInstance;
    
    FAnimNode_DuckBase();
};

