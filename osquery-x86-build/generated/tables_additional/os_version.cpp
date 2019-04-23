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
osquery::QueryData genOSVersion(QueryContext& context);
}

class osVersionTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("major", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("minor", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("patch", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("build", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("platform", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("platform_like", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("codename", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genOSVersion(context);

    return results;
  }

};


REGISTER(osVersionTablePlugin, "table", "os_version");

/// END[GENTABLE]

}