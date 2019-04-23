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
osquery::QueryData genDiskInfo(QueryContext& context);
}

class diskInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("partitions", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("disk_index", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("id", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("pnp_device_id", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("disk_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("manufacturer", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hardware_model", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("serial", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genDiskInfo(context);

    return results;
  }

};


REGISTER(diskInfoTablePlugin, "table", "disk_info");

/// END[GENTABLE]

}