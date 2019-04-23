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

auto packageBomRegister = []() {
/// BEGIN[GENTABLE]
  class packageBomTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("filepath", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gid", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mode", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("modified_time", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::REQUIRED),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("package_bom",
      std::make_shared<packageBomTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}