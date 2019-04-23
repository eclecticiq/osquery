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

auto kernelPanicsRegister = []() {
/// BEGIN[GENTABLE]
  class kernelPanicsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("registers", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("frame_backtrace", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("module_backtrace", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("dependencies", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("os_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("kernel_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("system_model", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uptime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("last_loaded", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("last_unloaded", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("kernel_panics",
      std::make_shared<kernelPanicsTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}