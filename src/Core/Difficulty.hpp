// Copyright (c) 2012-2018, The CryptoNote developers, The Bytecoin developers, The Zurocoin developers.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

#pragma once

#include <cstdint>
#include <vector>

#include "CryptoNote.hpp"

namespace zurocoin {

bool check_hash(const crypto::Hash &hash, Difficulty difficulty);
}
