#pragma once

#include "parser.h"

enum StakeInstructionKind {
    Initialize,
    Authorize,
    DelegateStake,
    Split,
    Withdraw,
    Deactivate,
    SetLockup,
};

typedef struct DelegateStakeInfo {
    Pubkey* stake_pubkey;
    Pubkey* vote_pubkey;
    Pubkey* authorized_pubkey;
} DelegateStakeInfo;

int parse_delegate_stake_instructions(Parser* parser, MessageHeader* header, DelegateStakeInfo* info);
