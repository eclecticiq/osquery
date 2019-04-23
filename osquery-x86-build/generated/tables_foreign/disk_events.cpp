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

auto diskEventsRegister = []() {
/// BEGIN[GENTABLE]
  class diskEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("action", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("device", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uuid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ejectable", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mountable", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("writable", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("content", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("media_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("vendor", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("filesystem", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("checksum", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }


  ColumnAliasSet columnAliases() const override {
    return {
      {"device", {"bsd_name"}},
    };
  }

    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("disk_events",
      std::make_shared<diskEventsTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}