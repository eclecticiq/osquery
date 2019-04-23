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

auto virtualMemoryInfoRegister = []() {
/// BEGIN[GENTABLE]
  class virtualMemoryInfoTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("free", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("active", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inactive", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("speculative", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("throttled", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("wired", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("purgeable", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("faults", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("copy", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("zero_fill", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("reactivated", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("purged", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("file_backed", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("anonymous", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uncompressed", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("compressor", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("decompressed", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("compressed", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("page_ins", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("page_outs", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("swap_ins", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("swap_outs", BIGINT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("virtual_memory_info",
      std::make_shared<virtualMemoryInfoTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}