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

auto syslogEventsRegister = []() {
/// BEGIN[GENTABLE]
  class syslogEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("datetime", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("host", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("severity", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("facility", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("tag", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("message", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }

    std::vector<std::string> aliases() const override {
      return {
        "syslog",
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("syslog_events",
      std::make_shared<syslogEventsTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}