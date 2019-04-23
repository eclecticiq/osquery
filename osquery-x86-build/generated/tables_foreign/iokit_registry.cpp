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

auto iokitRegistryRegister = []() {
/// BEGIN[GENTABLE]
  class iokitRegistryTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("class", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("id", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("parent", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("busy_state", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("retain_count", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("depth", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("iokit_registry",
      std::make_shared<iokitRegistryTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}