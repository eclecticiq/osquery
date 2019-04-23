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

auto aslRegister = []() {
/// BEGIN[GENTABLE]
  class aslTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("time", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time_nano_sec", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("host", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sender", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("facility", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pid", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("level", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("message", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ref_pid", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ref_proc", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("extra", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("asl",
      std::make_shared<aslTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}