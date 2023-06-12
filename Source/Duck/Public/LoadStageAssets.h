#pragma once
#include "DuckModule.h"
#include "LoadAssets.h"
#include "LoadStageAssets.generated.h"

UCLASS(Blueprintable)
class DUCK_API ULoadStageAssets : public ULoadAssets {
    GENERATED_BODY()
public:
    ULoadStageAssets();
};

