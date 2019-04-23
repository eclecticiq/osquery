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
osquery::QueryData genRoutes(QueryContext& context);
}

class routesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("destination", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("netmask", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("gateway", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("source", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("flags", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("interface", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("mtu", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("metric", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::CACHEABLE |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    if (isCached(kCacheStep, context)) {
      return getCache();
    }
    auto results = tables::genRoutes(context);
    setCache(kCacheStep, kCacheInterval, context, results);

    return results;
  }

};


REGISTER(routesTablePlugin, "table", "routes");

/// END[GENTABLE]

}