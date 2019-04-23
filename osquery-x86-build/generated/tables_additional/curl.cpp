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
osquery::QueryData genCurl(QueryContext& context);
}

class curlTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("url", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::REQUIRED),
      std::make_tuple("method", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("user_agent", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("response_code", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("round_trip_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("bytes", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("result", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genCurl(context);

    return results;
  }

};


REGISTER(curlTablePlugin, "table", "curl");

/// END[GENTABLE]

}