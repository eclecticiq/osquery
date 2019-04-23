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
osquery::QueryData genListeningPorts(QueryContext& context);
}

class listeningPortsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("pid", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("port", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("protocol", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("family", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("address", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("fd", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("socket", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("net_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::CACHEABLE |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    if (isCached(kCacheStep, context)) {
      return getCache();
    }
    auto results = tables::genListeningPorts(context);
    setCache(kCacheStep, kCacheInterval, context, results);

    return results;
  }

};


REGISTER(listeningPortsTablePlugin, "table", "listening_ports");

/// END[GENTABLE]

}