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
osquery::QueryData genCrashLogs(QueryContext& context);
}

class windowsCrashesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("datetime", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("module", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("tid", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("process_uptime", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("stack_trace", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("exception_code", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("exception_message", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("exception_address", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("registers", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("command_line", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("current_directory", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("username", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("machine_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("major_version", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("minor_version", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("build_number", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("crash_path", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genCrashLogs(context);

    return results;
  }

};


REGISTER(windowsCrashesTablePlugin, "table", "windows_crashes");

/// END[GENTABLE]

}