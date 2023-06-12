#pragma once
#include "DuckModule.h"
#include "DuckKPIChapter.h"
#include "DuckKPIStory.generated.h"

USTRUCT(BlueprintType)
struct DUCKANALYTICS_API FDuckKPIStory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDuckKPIChapter> Chapter;
    
    FDuckKPIStory();
};

