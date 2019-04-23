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
osquery::QueryData genVideoInfo(QueryContext& context);
}

class videoInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("color_depth", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("driver", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("driver_date", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("driver_version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("manufacturer", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("model", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("series", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("video_mode", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genVideoInfo(context);

    return results;
  }

};


REGISTER(videoInfoTablePlugin, "table", "video_info");

/// END[GENTABLE]

}