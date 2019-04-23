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

/// BEGIN[GENTABLE]
namespace tables {
osquery::QueryData genTime(QueryContext& context);
}

class timeTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("weekday", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("year", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("month", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("day", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hour", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("minutes", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("seconds", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("timezone", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("local_time", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("local_timezone", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("unix_time", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("timestamp", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("datetime", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("iso_8601", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  ColumnAliasSet columnAliases() const override {
    return {
      {"local_time", {"localtime"}},
      {"datetime", {"date_time"}},
    };
  }

  TableAttributes attributes() const override {
    return       TableAttributes::UTILITY |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genTime(context);

    return results;
  }

};


REGISTER_INTERNAL(timeTablePlugin, "table", "time");

/// END[GENTABLE]

}