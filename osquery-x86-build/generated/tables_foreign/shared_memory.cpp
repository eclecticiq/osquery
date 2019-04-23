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

auto sharedMemoryRegister = []() {
/// BEGIN[GENTABLE]
  class sharedMemoryTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("shmid", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("owner_uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("creator_uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("creator_pid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("atime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("dtime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ctime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("permissions", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("attached", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("status", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("locked", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("shared_memory",
      std::make_shared<sharedMemoryTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}