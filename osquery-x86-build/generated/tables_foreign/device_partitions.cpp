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

auto devicePartitionsRegister = []() {
/// BEGIN[GENTABLE]
  class devicePartitionsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("device", TEXT_TYPE, ColumnOptions::REQUIRED),
        std::make_tuple("partition", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("label", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("offset", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("blocks_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("blocks", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inodes", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("flags", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("device_partitions",
      std::make_shared<devicePartitionsTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}