// Copyright (c) 2012-2016, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2016-2020, The Urbancash developers
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
// along with Urbancash.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {

struct CheckpointData {
  uint32_t height;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = {
{    0, "dd2bb2c2c8454305922532763b00f54aaf41f957460850695c37c68275fbd629"},
{    1, "7f93dd93e6fdca122f8bfcffe42efd17707ec1f8a994248a7f1c62a139234d70"},
{    2, "4b1ccf950b1d76cd77f81b98b996547c2930d07d31b9b22a7fdfb6b4d4858647"},
{ 1000, "67406b1b11a57816ef9d4a20bf546e7988ff1dd0a3c588f74a3a50bd80c7410f"},
{ 4300, "19ee3bf64d977b08febd39c2ccddc92abff98d7935553156eb8be76f6c31b7bf"},
{10000, "3af83fb7a7e06aef3e12b9ec64a5147a2eb234622c5b0b749c2c18ac8ebd47d5"},
{30605, "aefed229fa56f2c3118c06b81f009832c00e98d919d5c6376776252518bf6247"},
{42999, "ae959b06239eecc3edd1c6ef769387303444297b05fd80e6269172fb647a2afc"},
{250832, "3678dce500e0b6b9d833e180f2b18e731833a9d2e44029afc61c4af8a11ffc30"},
{250833, "1d671173158933cbcf2ea3c47cd54cb4b8468388b1d250eec16749f0f23ad056"}
};

  
}
