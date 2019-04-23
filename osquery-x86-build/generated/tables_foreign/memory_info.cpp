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

auto memoryInfoRegister = []() {
/// BEGIN[GENTABLE]
  class memoryInfoTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("memory_total", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory_free", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("buffers", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cached", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("swap_cached", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("active", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inactive", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("swap_total", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("swap_free", BIGINT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("memory_info",
      std::make_shared<memoryInfoTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}