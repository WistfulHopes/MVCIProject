#pragma once
#include "DuckModule.h"
#include "TextureValue.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FTextureValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UTexture*> Textures;
    
    DUCK_API FTextureValue();
};

