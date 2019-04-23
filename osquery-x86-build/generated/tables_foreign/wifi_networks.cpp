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

auto wifiNetworksRegister = []() {
/// BEGIN[GENTABLE]
  class wifiNetworksTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("ssid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("network_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("security_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("last_connected", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("passpoint", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("possibly_hidden", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("roaming", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("roaming_profile", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("captive_portal", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("auto_login", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("temporarily_disabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("disabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("wifi_networks",
      std::make_shared<wifiNetworksTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}