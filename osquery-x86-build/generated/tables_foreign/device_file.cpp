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

auto deviceFileRegister = []() {
/// BEGIN[GENTABLE]
  class deviceFileTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("device", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::REQUIRED),
        std::make_tuple("partition", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::REQUIRED),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::ADDITIONAL),
        std::make_tuple("filename", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inode", BIGINT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mode", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("block_size", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("atime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mtime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ctime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("hard_links", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("device_file",
      std::make_shared<deviceFileTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}