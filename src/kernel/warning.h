// Copyright (c) 2024-present The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef BITCOIN_KERNEL_WARNING_H
#define BITCOIN_KERNEL_WARNING_H

#include <util/translation.h>

namespace kernel
{
enum class Warning {
    UNKNOWN_NEW_RULES_ACTIVATED,
    LARGE_WORK_INVALID_CHAIN,
};
}
#endif // BITCOIN_KERNEL_WARNING_H
