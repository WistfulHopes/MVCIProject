#pragma once
#include "DuckModule.h"
#include "LoadAssets.h"
#include "LoadBtlCharaAssets.generated.h"

UCLASS(Blueprintable)
class DUCK_API ULoadBtlCharaAssets : public ULoadAssets {
    GENERATED_BODY()
public:
    ULoadBtlCharaAssets();
};

