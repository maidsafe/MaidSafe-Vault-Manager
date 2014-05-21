/*  Copyright 2014 MaidSafe.net limited

    This MaidSafe Software is licensed to you under (1) the MaidSafe.net Commercial License,
    version 1.0 or later, or (2) The General Public License (GPL), version 3, depending on which
    licence you accepted on initial access to the Software (the "Licences").

    By contributing code to the MaidSafe Software, or to this project generally, you agree to be
    bound by the terms of the MaidSafe Contributor Agreement, version 1.0, found in the root
    directory of this project at LICENSE, COPYING and CONTRIBUTOR respectively and also
    available at: http://www.maidsafe.net/licenses

    Unless required by applicable law or agreed to in writing, the MaidSafe Software distributed
    under the GPL Licence is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS
    OF ANY KIND, either express or implied.

    See the Licences for the specific language governing permissions and limitations relating to
    use of the MaidSafe Software.                                                                 */

#ifndef MAIDSAFE_VAULT_MANAGER_TOOLS_COMMANDS_CHOOSE_VAULT_COUNT_H_
#define MAIDSAFE_VAULT_MANAGER_TOOLS_COMMANDS_CHOOSE_VAULT_COUNT_H_

#include <future>

#include "maidsafe/common/types.h"

#include "maidsafe/vault_manager/tools/commands/commands.h"

namespace maidsafe {

namespace vault_manager {

namespace tools {

struct LocalNetworkController;

class ChooseVaultCount : public Command {
 public:
  explicit ChooseVaultCount(LocalNetworkController* local_network_controller);
  virtual void GetChoice();
  virtual void HandleChoice();

 private:
  void StartZeroStateRoutingNodes();
  void StartVaultManagerAndClientInterface();
  void StartFirstTwoVaults();
  void StartRemainingVaults();

  std::promise<void> zero_state_nodes_started_, finished_with_zero_state_nodes_;
  DiskUsage max_disk_usage_;
};

}  // namespace tools

}  // namespace vault_manager

}  // namespace maidsafe

#endif  // MAIDSAFE_VAULT_MANAGER_TOOLS_COMMANDS_CHOOSE_VAULT_COUNT_H_
