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
osquery::QueryData genProcesses(QueryContext& context);
}

class processesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::INDEX),
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cmdline", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("state", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cwd", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("root", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("euid", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("egid", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("suid", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("sgid", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("on_disk", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("wired_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("resident_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("total_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("user_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("system_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("disk_bytes_read", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("disk_bytes_written", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("start_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("parent", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("pgroup", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("threads", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("nice", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("is_elevated_token", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cgroup_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
      std::make_tuple("ipc_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
      std::make_tuple("mnt_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
      std::make_tuple("net_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
      std::make_tuple("pid_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
      std::make_tuple("user_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
      std::make_tuple("uts_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
    };
  }


  ColumnAliasSet columnAliases() const override {
    return {
      {"total_size", {"phys_footprint"}},
    };
  }

  TableAttributes attributes() const override {
    return       TableAttributes::CACHEABLE |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    if (isCached(kCacheStep, context)) {
      return getCache();
    }
    auto results = tables::genProcesses(context);
    setCache(kCacheStep, kCacheInterval, context, results);

    return results;
  }

};


REGISTER(processesTablePlugin, "table", "processes");

/// END[GENTABLE]

}