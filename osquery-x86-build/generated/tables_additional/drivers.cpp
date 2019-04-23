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
osquery::QueryData genDrivers(QueryContext& context);
}

class driversTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("device_id", TEXT_TYPE, ColumnOptions::INDEX),
      std::make_tuple("device_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("image", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("service", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("service_key", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("inf", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("class", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("provider", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("manufacturer", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("driver_key", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("date", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("signed", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genDrivers(context);

    return results;
  }

};


REGISTER(driversTablePlugin, "table", "drivers");

/// END[GENTABLE]

}