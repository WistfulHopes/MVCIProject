#pragma once
#include "Engine.h"
#include "ELobby_Rule.h"
#include "ELobby_Style.h"
#include "LobbyRule.generated.h"

USTRUCT(BlueprintType)
struct FLobbyRule {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobby_Rule Rule;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELobby_Style Style;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Time;
    
    ONLINESUBSYSTEMDUCK_API FLobbyRule();
};

