#include "DuckModule.h"
#include "Invite.h"


UInvite* UInvite::SetUpInviteDelegate(UInvite* inviteObj) {
    return NULL;
}

UInvite* UInvite::SetUpInvite() {
    return NULL;
}

void UInvite::SetGameInviteReady(bool flag) {
}

bool UInvite::IsRewardWidgetActive() {
    return false;
}

bool UInvite::IsInviteAccepted() {
    return false;
}

UUserWidget* UInvite::GetRewardWidgetFromWorld() {
    return NULL;
}

EInviteProcessResult UInvite::GetInviteProcessResult() {
    return EInviteProcessResult::WAIT;
}

bool UInvite::GetGameInviteReady() {
    return false;
}

UInvite::UInvite() {
}


