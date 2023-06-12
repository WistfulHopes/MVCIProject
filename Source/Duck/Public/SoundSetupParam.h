#pragma once
#include "DuckModule.h"
#include "ESoundAttachBoneType.h"
#include "ESoundAttachCharaType.h"
#include "SoundSetupParam.generated.h"

class USoundAtomCue;

USTRUCT(BlueprintType)
struct DUCK_API FSoundSetupParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundAtomCue* AtomCue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundAttachBoneType AttachBoneType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESoundAttachCharaType AttachCharaType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttachPartsNo;
    
    FSoundSetupParam();
};

