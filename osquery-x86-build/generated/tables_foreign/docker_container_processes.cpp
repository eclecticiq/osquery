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

auto dockerContainerProcessesRegister = []() {
/// BEGIN[GENTABLE]
  class dockerContainerProcessesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::REQUIRED),
        std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cmdline", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("state", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("euid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("egid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("suid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sgid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("wired_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("resident_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("total_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("start_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("parent", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pgroup", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("threads", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("nice", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("user", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu", DOUBLE_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mem", DOUBLE_TYPE, ColumnOptions::DEFAULT),
      };
    }


  ColumnAliasSet columnAliases() const override {
    return {
      {"total_size", {"phys_footprint"}},
    };
  }

    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_container_processes",
      std::make_shared<dockerContainerProcessesTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}