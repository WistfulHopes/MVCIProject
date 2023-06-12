#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "DuckCommandList.h"
#include "DuckMissionCommandList.h"
#include "CommandListAsset.generated.h"

UCLASS(Blueprintable)
class DUCK_API UCommandListAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDuckCommandList CommandList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDuckMissionCommandList MissionCommandList;
    
    UCommandListAsset();
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetUniqueName();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetUniqueCommand();
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetSpecialName();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetSpecialCommand();
    
    UFUNCTION(BlueprintCallable)
    TArray<FText> GetHyperName();
    
    UFUNCTION(BlueprintCallable)
    TArray<FString> GetHyperCommand();
    
};

