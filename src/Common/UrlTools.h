
// Copyright (c) 2017-2019, Urbancash developers
//
// This file is part of Urbancash.
//
// Urbancash is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// Urbancash is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with Urbancash. If not, see <http://www.gnu.org/licenses/>.


#pragma once

#include <stdint.h>
#include <string>

namespace Common {

bool parseUrlAddress(const std::string& url, std::string& host, uint16_t& port, std::string& path, bool& ssl);

}
