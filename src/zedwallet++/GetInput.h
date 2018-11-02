// Copyright (c) 2018, The TurtleCoin Developers
// 
// Please see the included LICENSE file for more information.

#pragma once

#include <string>

#include <vector>

#include <WalletBackend/WalletBackend.h>

std::string yellowANSIMsg(std::string msg);

std::string getPrompt(std::shared_ptr<WalletBackend> walletBackend);

std::string getAddress(
    const std::string msg,
    const bool integratedAddressesAllowed,
    const bool cancelAllowed);

std::string getPaymentID(
    const std::string msg,
    const bool printWarning,
    const bool cancelAllowed);

std::tuple<bool, uint64_t> getAmountToAtomic(
    const std::string msg,
    const bool cancelAllowed);

template<typename T>
std::string getInput(
    const std::vector<T> &availableCommands,
    const std::string prompt);
