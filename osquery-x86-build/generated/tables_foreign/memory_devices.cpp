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

auto memoryDevicesRegister = []() {
/// BEGIN[GENTABLE]
  class memoryDevicesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("handle", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("array_handle", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("form_factor", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("total_width", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("data_width", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("set", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("device_locator", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bank_locator", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory_type_details", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("max_speed", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("configured_clock_speed", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("manufacturer", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("serial_number", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("asset_tag", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("part_number", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("min_voltage", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("max_voltage", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("configured_voltage", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("memory_devices",
      std::make_shared<memoryDevicesTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}