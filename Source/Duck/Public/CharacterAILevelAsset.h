#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "AILevelActionProb.h"
#include "AILevelAdvGuardProb.h"
#include "AILevelArlAfrPChgProb.h"
#include "AILevelCmbAfrPChgProb.h"
#include "AILevelGemProb.h"
#include "AILevelGemTime.h"
#include "AILevelGrdAfrActProb.h"
#include "AILevelGrdCancelProb.h"
#include "AILevelGuardProb.h"
#include "AILevelGuardTime.h"
#include "AILevelHypAfrPChgProb.h"
#include "AILevelNageNukeProb.h"
#include "AILevelNoPrtChgTime.h"
#include "AILevelOkiAtckProb.h"
#include "AILevelOkiUkemiProb.h"
#include "AILevelPrtChgProb.h"
#include "AILevelPrtChgTime.h"
#include "AILevelReflexValProb.h"
#include "AILevelStnAtkProb.h"
#include "AILevelStnAtkTime.h"
#include "AILevelWaitProb.h"
#include "AILevelWaitTime.h"
#include "CharacterAILevelAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UCharacterAILevelAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BattleVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelGrdCancelProb AILevelGrdCancelProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelNoPrtChgTime AILevelNoPrtChgTimeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelReflexValProb AILevelReflexValProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelNageNukeProb AILevelNageNukeProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelGrdAfrActProb AILevelGrdAfrActProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelOkiAtckProb AILevelOkiAtckProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelOkiUkemiProb AILevelOkiUkemiProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelHypAfrPChgProb AILevelHypAfrPChgProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelCmbAfrPChgProb AILevelCmbAfrPChgProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelArlAfrPChgProb AILevelArlAfrPChgProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelAdvGuardProb AILevelAdvGuardProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelStnAtkTime AILevelStnAtkTimeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelStnAtkProb AILevelStnAtkProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelPrtChgTime AILevelPrtChgTimeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelPrtChgProb AILevelPrtChgProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelGemTime AILevelGemTimeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelGemProb AILevelGemProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelWaitTime AILevelWaitTimeList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelWaitProb AILevelWaitProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelActionProb AILevelActionProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelGuardProb AILevelGuardProbList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAILevelGuardTime AILevelGuardTimeList;
    
    UCharacterAILevelAsset();
};

