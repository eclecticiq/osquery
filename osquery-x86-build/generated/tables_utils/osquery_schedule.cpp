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
osquery::QueryData genOsquerySchedule(QueryContext& context);
}

class osqueryScheduleTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("query", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("interval", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("executions", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("last_executed", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("blacklisted", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("output_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("wall_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("user_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("system_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("average_memory", BIGINT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::UTILITY |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genOsquerySchedule(context);

    return results;
  }

};


REGISTER_INTERNAL(osqueryScheduleTablePlugin, "table", "osquery_schedule");

/// END[GENTABLE]

}