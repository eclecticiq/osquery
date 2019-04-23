/**
 *  Copyright (c) 2014-present, Facebook, Inc.
 *  All rights reserved.
 *
 *  This source code is licensed under both the Apache 2.0 license (found in the
 *  LICENSE file in the root directory of this source tree) and the GPLv2 (found
 *  in the COPYING file in the root directory of this source tree).
 *  You may select, at your option, one of the above-listed licenses.
 */

/*
** This file is generated. Do not modify it manually!
*/

#include <osquery/events.h>
#include <osquery/logger.h>
#include <osquery/tables.h>

namespace osquery {
namespace tables {

auto dockerInfoRegister = []() {
/// BEGIN[GENTABLE]
  class dockerInfoTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("containers", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("containers_running", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("containers_paused", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("containers_stopped", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("images", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("storage_driver", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory_limit", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("swap_limit", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("kernel_memory", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu_cfs_period", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu_cfs_quota", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu_shares", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu_set", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ipv4_forwarding", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bridge_nf_iptables", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bridge_nf_ip6tables", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("oom_kill_disable", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("logging_driver", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cgroup_driver", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("kernel_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("os", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("os_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("architecture", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpus", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("http_proxy", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("https_proxy", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("no_proxy", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("server_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("root_dir", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_info",
      std::make_shared<dockerInfoTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}