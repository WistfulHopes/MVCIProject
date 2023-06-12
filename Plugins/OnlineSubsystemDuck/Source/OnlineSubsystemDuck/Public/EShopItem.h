#pragma once
#include "Engine.h"
#include "EShopItem.generated.h"

UENUM(BlueprintType)
enum class EShopItem : uint8 {
    SHOP_NORMAL,
    SHOP_DELUXE,
    SHOP_MAX UMETA(Hidden),
};

