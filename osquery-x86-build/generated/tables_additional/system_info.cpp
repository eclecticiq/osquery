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
osquery::QueryData genSystemInfo(QueryContext& context);
}

class systemInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("hostname", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("uuid", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cpu_type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cpu_subtype", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cpu_brand", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cpu_physical_cores", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cpu_logical_cores", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cpu_microcode", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("physical_memory", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hardware_vendor", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hardware_model", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hardware_version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hardware_serial", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("computer_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("local_hostname", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genSystemInfo(context);

    return results;
  }

};


REGISTER(systemInfoTablePlugin, "table", "system_info");

/// END[GENTABLE]

}