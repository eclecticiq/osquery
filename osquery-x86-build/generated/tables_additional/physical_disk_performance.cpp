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
osquery::QueryData genPhysicalDiskPerformance(QueryContext& context);
}

class physicalDiskPerformanceTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("avg_disk_bytes_per_read", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("avg_disk_bytes_per_write", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("avg_disk_read_queue_length", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("avg_disk_write_queue_length", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("avg_disk_sec_per_read", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("avg_disk_sec_per_write", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("current_disk_queue_length", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("percent_disk_read_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("percent_disk_write_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("percent_disk_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("percent_idle_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genPhysicalDiskPerformance(context);

    return results;
  }

};


REGISTER(physicalDiskPerformanceTablePlugin, "table", "physical_disk_performance");

/// END[GENTABLE]

}