/***************************************************************************************************
 *  Copyright 2012 maidsafe.net limited                                                            *
 *                                                                                                 *
 *  The following source code is property of MaidSafe.net limited and is not meant for external    *
 *  use. The use of this code is governed by the licence file licence.txt found in the root of     *
 *  this directory and also on www.maidsafe.net.                                                   *
 *                                                                                                 *
 *  You are not free to copy, amend or otherwise use this source code without the explicit written *
 *  permission of the board of directors of MaidSafe.net.                                          *
 **************************************************************************************************/

#include "maidsafe/private/data_types/network_actors.h"

#include <string>

#include "maidsafe/common/test.h"


namespace maidsafe {

namespace test {

TEST(DataTypesTest, BEH_ConstructType) {
  EXPECT_NO_THROW(DataHolder data_holder);
}

}  // namespace test

}  // namespace maidsafe
