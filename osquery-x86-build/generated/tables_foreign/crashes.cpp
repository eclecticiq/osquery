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

auto crashesRegister = []() {
/// BEGIN[GENTABLE]
  class crashesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("crash_path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("identifier", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("parent", BIGINT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("responsible", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", INTEGER_TYPE, ColumnOptions::ADDITIONAL),
        std::make_tuple("datetime", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("crashed_thread", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("stack_trace", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("exception_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("exception_codes", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("exception_notes", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("registers", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("crashes",
      std::make_shared<crashesTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}