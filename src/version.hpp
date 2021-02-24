// Copyright (c) 2012-2018, The CryptoNote developers, The Bytecoin developers, The Zurocoin developers.
// Licensed under the GNU Lesser General Public License. See LICENSE for details.

#pragma once

// defines are for Windows resource compiler
#define zurocoin_VERSION_WINDOWS_COMMA 3, 18, 5, 9
#define zurocoin_VERSION_STRING "3.0.4"

#ifndef RC_INVOKED  // Windows resource compiler

namespace zurocoin {
inline const char *app_version() { return zurocoin_VERSION_STRING; }
}

#endif
