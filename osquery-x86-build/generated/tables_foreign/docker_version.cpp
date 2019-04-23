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

auto dockerVersionRegister = []() {
/// BEGIN[GENTABLE]
  class dockerVersionTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("api_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("min_api_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("git_commit", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("go_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("os", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("arch", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("kernel_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("build_time", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_version",
      std::make_shared<dockerVersionTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}