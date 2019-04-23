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

auto socketEventsRegister = []() {
/// BEGIN[GENTABLE]
  class socketEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("action", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("fd", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("auid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("success", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("family", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("protocol", INTEGER_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("local_address", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("remote_address", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("local_port", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("remote_port", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("socket", TEXT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uptime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("socket_events",
      std::make_shared<socketEventsTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}