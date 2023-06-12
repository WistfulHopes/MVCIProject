#pragma once
#include "DuckModule.h"
#include "LoadAssets.h"
#include "LoadBtlCmnVersionAssets.generated.h"

UCLASS(Blueprintable)
class DUCK_API ULoadBtlCmnVersionAssets : public ULoadAssets {
    GENERATED_BODY()
public:
    ULoadBtlCmnVersionAssets();
};

