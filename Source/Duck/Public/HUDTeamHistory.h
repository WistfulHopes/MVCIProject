#pragma once
#include "DuckModule.h"
#include "EComboCompliment.h"
#include "EGemKind.h"
#include "ENoticeOpponent.h"
#include "ENoticeSelf.h"
#include "HUDTeamHistory.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FHUDTeamHistory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ENoticeOpponent mNoticeOpponentKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EComboCompliment mComboCompliment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ENoticeSelf> mNoticeKind;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EGemKind mUseGemKind;
    
    FHUDTeamHistory();
};

