// Copyright (c) 2014-2024, The Monero Project
//
// All rights reserved.
//
// Redistribution and use in source and binary forms, with or without modification, are
// permitted provided that the following conditions are met:
//
// 1. Redistributions of source code must retain the above copyright notice, this list of
//    conditions and the following disclaimer.
//
// 2. Redistributions in binary form must reproduce the above copyright notice, this list
//    of conditions and the following disclaimer in the documentation and/or other
//    materials provided with the distribution.
//
// 3. Neither the name of the copyright holder nor the names of its contributors may be
//    used to endorse or promote products derived from this software without specific
//    prior written permission.
//
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY
// EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
// MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL
// THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
// PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
// INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
// STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF
// THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

#include "hardforks.h"

#undef MONERO_DEFAULT_LOG_CATEGORY
#define MONERO_DEFAULT_LOG_CATEGORY "blockchain.hardforks"

const hardfork_t mainnet_hard_forks[] = {
  { 1, 1, 0, 1341378000 },
  { 2, 2, 0, 1442763710 },
  { 3, 3, 0, 1458558528 },
  { 4, 4, 0, 1483574400 },
  { 5, 5, 0, 1489520158 }, 
  { 6, 6, 0, 1503046577 },
  { 7, 7, 0, 1521303150 },
  { 8, 8, 0, 1535889547 },
  { 9, 9, 0, 1535889548 },
  { 10, 10, 0, 1549792439 },
  { 11, 11, 0, 1550225678 },
  { 12, 12, 0, 1571419280 },
  { 13, 13, 0, 1598180817 },
  { 14, 14, 0, 1598180818 },
  { 15, 15, 0, 1656629117 },
  { 16, 16, 0, 1656629118 },
  { 17, 36649, 0, 1741015100 }, // 2025-03-03, difficulty algorithm hard-fork
  { 18, 39200, 0, 1741175257 }  // 2025-03-05, notarized proof-of-work
};
const size_t num_mainnet_hard_forks = sizeof(mainnet_hard_forks) / sizeof(mainnet_hard_forks[0]);
const uint64_t mainnet_hard_fork_version_1_till = 1009826;

const hardfork_t testnet_hard_forks[] = {
  { 1, 1, 0, 1341378000 },
  { 2, 2, 0, 1442763710 },
  { 3, 3, 0, 1458558528 },
  { 4, 4, 0, 1483574400 },
  { 5, 5, 0, 1489520158 }, 
  { 6, 6, 0, 1503046577 },
  { 7, 7, 0, 1521303150 },
  { 8, 8, 0, 1535889547 },
  { 9, 9, 0, 1535889548 },
  { 10, 10, 0, 1549792439 },
  { 11, 11, 0, 1550225678 },
  { 12, 12, 0, 1571419280 },
  { 13, 13, 0, 1598180817 },
  { 14, 14, 0, 1598180818 },
  { 15, 15, 0, 1656629117 },
  { 16, 16, 0, 1656629118 },
};
const size_t num_testnet_hard_forks = sizeof(testnet_hard_forks) / sizeof(testnet_hard_forks[0]);
const uint64_t testnet_hard_fork_version_1_till = 624633;

const hardfork_t stagenet_hard_forks[] = {
  { 1, 1, 0, 1341378000 },
  { 2, 2, 0, 1442763710 },
  { 3, 3, 0, 1458558528 },
  { 4, 4, 0, 1483574400 },
  { 5, 5, 0, 1489520158 }, 
  { 6, 6, 0, 1503046577 },
  { 7, 7, 0, 1521303150 },
  { 8, 8, 0, 1535889547 },
  { 9, 9, 0, 1535889548 },
  { 10, 10, 0, 1549792439 },
  { 11, 11, 0, 1550225678 },
  { 12, 12, 0, 1571419280 },
  { 13, 13, 0, 1598180817 },
  { 14, 14, 0, 1598180818 },
  { 15, 15, 0, 1656629117 },
  { 16, 16, 0, 1656629118 },
};
const size_t num_stagenet_hard_forks = sizeof(stagenet_hard_forks) / sizeof(stagenet_hard_forks[0]);
