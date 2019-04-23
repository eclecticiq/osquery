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

auto lldpNeighborsRegister = []() {
/// BEGIN[GENTABLE]
  class lldpNeighborsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("interface", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rid", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_id_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_sysname", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_sys_description", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_bridge_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_bridge_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_router_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_router_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_repeater_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_repeater_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_wlan_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_wlan_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_tel_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_tel_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_docsis_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_docsis_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_station_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_station_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_other_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_other_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_mgmt_ips", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_id_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_description", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_ttl", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_mfs", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_aggregation_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_supported", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_mau_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_10baset_hd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_10baset_fd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_100basetx_hd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_100basetx_fd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_100baset2_hd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_100baset2_fd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_100baset4_hd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_100baset4_fd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_1000basex_hd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_1000basex_fd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_1000baset_hd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_1000baset_fd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_device_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_mdi_supported", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_mdi_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_paircontrol_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_pairs", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_class", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_8023at_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_8023at_power_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_8023at_power_source", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_8023at_power_priority", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_8023at_power_allocated", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_8023at_power_requested", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_device_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_capability_capabilities", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_capability_policy", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_capability_location", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_capability_mdi_pse", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_capability_mdi_pd", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_capability_inventory", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_policies", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("vlans", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pvid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ppvids_supported", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ppvids_enabled", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pids", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("lldp_neighbors",
      std::make_shared<lldpNeighborsTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}