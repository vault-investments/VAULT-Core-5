// Copyright (c) 2020 The VAULT developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or https://www.opensource.org/licenses/mit-license.php.

#ifndef VAULT_SAPLING_TEST_FIXTURE_H
#define VAULT_SAPLING_TEST_FIXTURE_H

#include "test/test_vault.h"

/**
 * Testing setup that configures a complete environment for Sapling testing.
 */
struct SaplingTestingSetup : public TestingSetup {
    SaplingTestingSetup();
    ~SaplingTestingSetup();
};


#endif //VAULT_SAPLING_TEST_FIXTURE_H
