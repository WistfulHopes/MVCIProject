#pragma once
#include "Engine.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "ECriFsLoaderStatus.h"
#include "CriFsLoaderComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CRIWARERUNTIME_API UCriFsLoaderComponent : public USceneComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_DELEGATE(FOnLoadError);
    DECLARE_DYNAMIC_DELEGATE(FOnLoadCompleted);
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadCompleted OnLoadCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnLoadError OnLoadError;
    
    UCriFsLoaderComponent();
    UFUNCTION(BlueprintCallable)
    void Load();
    
    UFUNCTION(BlueprintCallable)
    ECriFsLoaderStatus GetStatus();
    
    UFUNCTION(BlueprintCallable)
    TArray<uint8> GetDataArray();
    
};

