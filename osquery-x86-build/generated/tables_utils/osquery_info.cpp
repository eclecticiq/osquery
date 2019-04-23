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
osquery::QueryData genOsqueryInfo(QueryContext& context);
}

class osqueryInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("pid", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("uuid", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("instance_id", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("config_hash", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("config_valid", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("extensions", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("build_platform", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("build_distro", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("start_time", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("watcher", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::UTILITY |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genOsqueryInfo(context);

    return results;
  }

};


REGISTER_INTERNAL(osqueryInfoTablePlugin, "table", "osquery_info");

/// END[GENTABLE]

}