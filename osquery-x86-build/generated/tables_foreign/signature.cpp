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

auto signatureRegister = []() {
/// BEGIN[GENTABLE]
  class signatureTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::REQUIRED),
        std::make_tuple("signed", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("identifier", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cdhash", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("team_identifier", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("authority", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("signature",
      std::make_shared<signatureTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}