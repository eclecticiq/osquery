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
osquery::QueryData genProcessMemoryMap(QueryContext& context);
}

class processMemoryMapTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("pid", INTEGER_TYPE, ColumnOptions::INDEX),
      std::make_tuple("start", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("end", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("permissions", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("offset", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("device", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("inode", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("pseudo", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genProcessMemoryMap(context);

    return results;
  }

};


REGISTER(processMemoryMapTablePlugin, "table", "process_memory_map");

/// END[GENTABLE]

}