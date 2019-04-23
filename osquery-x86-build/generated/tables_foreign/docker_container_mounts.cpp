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

auto dockerContainerMountsRegister = []() {
/// BEGIN[GENTABLE]
  class dockerContainerMountsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("source", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("destination", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("driver", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mode", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rw", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("propagation", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_container_mounts",
      std::make_shared<dockerContainerMountsTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}