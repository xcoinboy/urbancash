// Copyright (c) 2012-2016, The CryptoNote developers, The Bytecoin developers
// Copyright (c) 2016-2018, The Karbowanec developers
//
// This file is part of UrbanCash.
//
// UrbanCash is free software: you can redistribute it and/or modify
// it under the terms of the GNU Lesser General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// UrbanCash is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public License
// along with UrbanCash.  If not, see <http://www.gnu.org/licenses/>.

#pragma once

#include <cstddef>
#include <initializer_list>

namespace CryptoNote {

struct CheckpointData {
  uint32_t height;
  const char* blockId;
};

const std::initializer_list<CheckpointData> CHECKPOINTS = { 
 {  2,  "71de746366af9ad6ddf7c8c88a6de84039fe5e26dede4bb2cd6dd0b83abb4844" },
 {  1000,  "055848912f146d8659b08a8617e61d8a17cdfef0186cdb5343be667a739591f1" },
 {  2000,  "a2f14601958edf4cffdd7c9bdf276fc2f8b6f8d56763f430b9eb8826559006fe" },
 {  2500,  "8e411c7f536ee3c66efccfdaceb3a2e0d68b62afbc4840f9b4df9e69f9384e8a" },
 {  3005,  "0f98fa61cf74fb1e4cf91fe840341aed161fe100798eb83418959067625f8074" },
 
};
  
}
