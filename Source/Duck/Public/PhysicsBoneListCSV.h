#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TableRowBase -FallbackName=TableRowBase
#include "PhysicsBoneListCSV.generated.h"

USTRUCT(BlueprintType)
struct FPhysicsBoneListCSV : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString BONE_NAME;
    
    DUCK_API FPhysicsBoneListCSV();
};

