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

auto fileEventsRegister = []() {
/// BEGIN[GENTABLE]
  class fileEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("target_path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("category", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("action", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("transaction_id", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inode", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mode", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("atime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mtime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ctime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("md5", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sha1", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sha256", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("hashed", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("file_events",
      std::make_shared<fileEventsTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}