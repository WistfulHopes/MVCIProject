#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ClothSetting.h"
#include "FacialMotionSetting.h"
#include "InverseKinematicsSetting.h"
#include "LookAtEyeSetting.h"
#include "LookAtHeadSetting.h"
#include "BoneControlSetting.generated.h"

UCLASS(Blueprintable)
class DUCK_API UBoneControlSetting : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtHeadSetting LookAtHeadSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLookAtEyeSetting LookAtEyeSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInverseKinematicsSetting InverseKinematicsSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFacialMotionSetting FacialMotionSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClothSetting ClothSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClothSetting> ClothSettingArrange;
    
    UBoneControlSetting();
};

