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

auto shadowRegister = []() {
/// BEGIN[GENTABLE]
  class shadowTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("password_status", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("hash_alg", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("last_change", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("min", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("max", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("warning", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inactive", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("expire", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("flag", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("username", TEXT_TYPE, ColumnOptions::INDEX),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("shadow",
      std::make_shared<shadowTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}