#pragma once
#include "DuckModule.h"
#include "LoadAssets.h"
#include "LoadProfCardCharaAssets.generated.h"

UCLASS(Blueprintable)
class DUCK_API ULoadProfCardCharaAssets : public ULoadAssets {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnLoadComplete, int32, index, int32, CharaNo, int32, CostumeNo);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadComplete mDeleateOnLoadComplete;
    
    ULoadProfCardCharaAssets();
    UFUNCTION(BlueprintCallable)
    bool AsyncLoadStart();
    
};

