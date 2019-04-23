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

auto packageReceiptsRegister = []() {
/// BEGIN[GENTABLE]
  class packageReceiptsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("package_id", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("package_filename", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::HIDDEN),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("location", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("install_time", DOUBLE_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("installer_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::ADDITIONAL),
      };
    }

    std::vector<std::string> aliases() const override {
      return {
        "packages",
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("package_receipts",
      std::make_shared<packageReceiptsTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}