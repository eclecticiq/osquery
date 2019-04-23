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
osquery::QueryData genShares(QueryContext& context);
}

class sharedResourcesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("install_date", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("status", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("allow_maximum", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("maximum_allowed", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genShares(context);

    return results;
  }

};


REGISTER(sharedResourcesTablePlugin, "table", "shared_resources");

/// END[GENTABLE]

}