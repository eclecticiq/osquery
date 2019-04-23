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

auto mdDevicesRegister = []() {
/// BEGIN[GENTABLE]
  class mdDevicesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("device_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("status", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("raid_level", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chunk_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("raid_disks", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("nr_raid_disks", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("working_disks", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("active_disks", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("failed_disks", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("spare_disks", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("superblock_state", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("superblock_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("superblock_update_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bitmap_on_mem", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bitmap_chunk_size", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bitmap_external_file", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("recovery_progress", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("recovery_finish", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("recovery_speed", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("resync_progress", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("resync_finish", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("resync_speed", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("reshape_progress", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("reshape_finish", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("reshape_speed", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("check_array_progress", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("check_array_finish", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("check_array_speed", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("unused_devices", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("other", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("md_devices",
      std::make_shared<mdDevicesTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}