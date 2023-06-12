#pragma once
#include "DuckModule.h"
#include "InLobbyBattleResult.generated.h"

USTRUCT(BlueprintType)
struct DUCK_API FInLobbyBattleResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 win;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 lose;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Draw;
    
    FInLobbyBattleResult();
};

