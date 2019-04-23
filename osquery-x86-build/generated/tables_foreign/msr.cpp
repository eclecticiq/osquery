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

auto msrRegister = []() {
/// BEGIN[GENTABLE]
  class msrTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("processor_number", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("turbo_disabled", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("turbo_ratio_limit", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("platform_info", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("perf_ctl", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("perf_status", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("feature_control", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rapl_power_limit", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rapl_energy_status", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rapl_power_units", BIGINT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("msr",
      std::make_shared<msrTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}