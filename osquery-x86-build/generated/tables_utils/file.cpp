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
osquery::QueryData genFile(QueryContext& context);
}

class fileTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::REQUIRED),
      std::make_tuple("directory", TEXT_TYPE, ColumnOptions::REQUIRED),
      std::make_tuple("filename", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("inode", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("mode", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("device", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("block_size", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("atime", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("mtime", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("ctime", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("btime", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hard_links", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("symlink", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::UTILITY |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genFile(context);

    return results;
  }

};


REGISTER_INTERNAL(fileTablePlugin, "table", "file");

/// END[GENTABLE]

}