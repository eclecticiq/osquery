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

auto processFileEventsRegister = []() {
/// BEGIN[GENTABLE]
  class processFileEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("operation", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ppid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("executable", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("partial", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cwd", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("dest_path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("euid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("egid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uptime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("process_file_events",
      std::make_shared<processFileEventsTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}