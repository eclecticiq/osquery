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

auto launchdRegister = []() {
/// BEGIN[GENTABLE]
  class launchdTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("label", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("program", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("run_at_load", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("keep_alive", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("on_demand", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("disabled", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("username", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("groupname", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("stdout_path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("stderr_path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("start_interval", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("program_arguments", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("watch_paths", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("queue_directories", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inetd_compatibility", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("start_on_mount", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("root_directory", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("working_directory", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("process_type", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("launchd",
      std::make_shared<launchdTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}