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
osquery::QueryData genCarbonBlackInfo(QueryContext& context);
}

class carbonBlackInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("sensor_id", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("config_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_store_files", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_module_loads", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_module_info", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_file_mods", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_reg_mods", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_net_conns", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_processes", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_cross_processes", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_emet_events", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_data_file_writes", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_process_user_context", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_sensor_operations", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("log_file_disk_quota_mb", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("log_file_disk_quota_percentage", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("protection_disabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("sensor_ip_addr", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("sensor_backend_server", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("event_queue", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("binary_queue", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }

  std::vector<std::string> aliases() const override {
    return {
      "cb_info",
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genCarbonBlackInfo(context);

    return results;
  }

};


REGISTER(carbonBlackInfoTablePlugin, "table", "carbon_black_info");

/// END[GENTABLE]

}