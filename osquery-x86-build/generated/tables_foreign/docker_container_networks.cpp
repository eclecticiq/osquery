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

auto dockerContainerNetworksRegister = []() {
/// BEGIN[GENTABLE]
  class dockerContainerNetworksTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("network_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("endpoint_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gateway", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ip_address", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ip_prefix_len", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ipv6_gateway", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ipv6_address", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ipv6_prefix_len", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mac_address", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_container_networks",
      std::make_shared<dockerContainerNetworksTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}