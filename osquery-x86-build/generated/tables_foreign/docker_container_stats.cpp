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

auto dockerContainerStatsRegister = []() {
/// BEGIN[GENTABLE]
  class dockerContainerStatsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::REQUIRED),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pids", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("read", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("preread", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("interval", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("disk_read", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("disk_write", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("num_procs", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu_total_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu_kernelmode_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu_usermode_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("system_cpu_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("online_cpus", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pre_cpu_total_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pre_cpu_kernelmode_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pre_cpu_usermode_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pre_system_cpu_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pre_online_cpus", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory_max_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory_limit", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("network_rx_bytes", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("network_tx_bytes", BIGINT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_container_stats",
      std::make_shared<dockerContainerStatsTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}