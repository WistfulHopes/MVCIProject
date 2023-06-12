#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EDuckLoadPrio.h"
#include "FlowPreLoader.generated.h"

class ULoadAssets;

UCLASS(Blueprintable)
class DUCK_API AFlowPreLoader : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ULoadAssets*> mArrLoadAssets;
    
public:
    AFlowPreLoader();
protected:
    UFUNCTION(BlueprintCallable)
    void RequestUnloadSpecifiedName(const FString& PackName);
    
    UFUNCTION(BlueprintCallable)
    void RequestUnload();
    
    UFUNCTION(BlueprintCallable)
    bool RequestAsyncLoad(const FString& PackName, EDuckLoadPrio Prio);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsAsyncLoadEnd() const;
    
};

