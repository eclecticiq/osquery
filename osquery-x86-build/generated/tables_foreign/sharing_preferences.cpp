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

auto sharingPreferencesRegister = []() {
/// BEGIN[GENTABLE]
  class sharingPreferencesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("screen_sharing", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("file_sharing", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("printer_sharing", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("remote_login", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("remote_management", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("remote_apple_events", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("internet_sharing", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bluetooth_sharing", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("disc_sharing", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("sharing_preferences",
      std::make_shared<sharingPreferencesTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}