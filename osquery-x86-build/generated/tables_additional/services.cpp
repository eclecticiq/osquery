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
osquery::QueryData genServices(QueryContext& context);
}

class servicesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("service_type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("display_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("status", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("pid", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("start_type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("win32_exit_code", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("service_exit_code", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("module_path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("user_account", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genServices(context);

    return results;
  }

};


REGISTER(servicesTablePlugin, "table", "services");

/// END[GENTABLE]

}