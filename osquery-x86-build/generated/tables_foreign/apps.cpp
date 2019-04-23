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

auto appsRegister = []() {
/// BEGIN[GENTABLE]
  class appsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bundle_executable", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bundle_identifier", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bundle_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bundle_short_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bundle_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bundle_package_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("environment", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("element", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("compiler", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("development_region", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("display_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("info_string", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("minimum_system_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("category", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("applescript_enabled", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("copyright", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("last_opened_time", DOUBLE_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("apps",
      std::make_shared<appsTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}