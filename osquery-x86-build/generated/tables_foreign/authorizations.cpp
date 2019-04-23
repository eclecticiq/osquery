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
namespace tables {

auto authorizationsRegister = []() {
/// BEGIN[GENTABLE]
  class authorizationsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("label", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("modified", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("allow_root", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("timeout", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("tries", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("authenticate_user", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("shared", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("comment", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("created", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("class", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("session_owner", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("authorizations",
      std::make_shared<authorizationsTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}