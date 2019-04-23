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

auto yaraRegister = []() {
/// BEGIN[GENTABLE]
  class yaraTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::REQUIRED),
        std::make_tuple("matches", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("count", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sig_group", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::ADDITIONAL),
        std::make_tuple("sigfile", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::ADDITIONAL),
        std::make_tuple("strings", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("tags", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("yara",
      std::make_shared<yaraTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}