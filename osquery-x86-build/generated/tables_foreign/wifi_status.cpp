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

auto wifiStatusRegister = []() {
/// BEGIN[GENTABLE]
  class wifiStatusTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("interface", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ssid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bssid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("network_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("country_code", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("security_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rssi", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("noise", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("channel", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("channel_width", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("channel_band", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("transmit_rate", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mode", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("wifi_status",
      std::make_shared<wifiStatusTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}