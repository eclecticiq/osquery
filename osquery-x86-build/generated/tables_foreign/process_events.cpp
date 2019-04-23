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

auto processEventsRegister = []() {
/// BEGIN[GENTABLE]
  class processEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mode", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cmdline", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cmdline_size", BIGINT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("env", TEXT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("env_count", BIGINT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("env_size", BIGINT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("cwd", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("auid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("euid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("egid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("owner_uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("owner_gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("atime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mtime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ctime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("btime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("overflows", TEXT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("parent", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uptime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("status", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }


  ColumnAliasSet columnAliases() const override {
    return {
      {"env", {"environment"}},
      {"env_count", {"environment_count"}},
      {"env_size", {"environment_size"}},
      {"atime", {"access_time"}},
      {"mtime", {"modify_time"}},
      {"ctime", {"change_time"}},
      {"btime", {"create_time"}},
    };
  }

    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("process_events",
      std::make_shared<processEventsTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}