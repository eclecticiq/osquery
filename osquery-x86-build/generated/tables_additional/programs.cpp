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
osquery::QueryData genPrograms(QueryContext& context);
}

class programsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("install_location", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("install_source", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("language", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("publisher", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("uninstall_string", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("install_date", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("identifying_number", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }

  std::vector<std::string> aliases() const override {
    return {
      "programs_and_features",
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genPrograms(context);

    return results;
  }

};


REGISTER(programsTablePlugin, "table", "programs");

/// END[GENTABLE]

}