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
osquery::QueryData genOpenSockets(QueryContext& context);
}

class processOpenSocketsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("pid", INTEGER_TYPE, ColumnOptions::INDEX),
      std::make_tuple("fd", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("socket", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("family", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("protocol", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("local_address", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("remote_address", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("local_port", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("remote_port", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("state", TEXT_TYPE, ColumnOptions::HIDDEN),
      std::make_tuple("net_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genOpenSockets(context);

    return results;
  }

};


REGISTER(processOpenSocketsTablePlugin, "table", "process_open_sockets");

/// END[GENTABLE]

}