#pragma once
#include "DuckModule.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "EMovieFadeInType.h"
#include "EMovieFadeOutType.h"
#include "MoviePlayBase.generated.h"

class UManaComponent;
class UManaTexture;

UCLASS(Blueprintable)
class DUCK_API AMoviePlayBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UManaComponent* mpManaComponent;
    
public:
    AMoviePlayBase();
    UFUNCTION(BlueprintCallable)
    void UpdateManualTimerSyncSound();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Stop();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetMovieFadeType(EMovieFadeInType InType, EMovieFadeOutType OutType, float OutWaitTime);
    
    UFUNCTION(BlueprintCallable)
    void SetLoop(bool IsLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Resume();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Prepare(UManaTexture* pTex, bool IsLoop);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool Play();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Pause();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartPlayBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEndPlayBP();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPreparing() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPrepareEnd() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool IsPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMovieLastFrame() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DestroyFadeByEnd();
    
};

