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

auto preferencesRegister = []() {
/// BEGIN[GENTABLE]
  class preferencesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("domain", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("subkey", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("forced", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("username", TEXT_TYPE, ColumnOptions::ADDITIONAL),
        std::make_tuple("host", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("preferences",
      std::make_shared<preferencesTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}