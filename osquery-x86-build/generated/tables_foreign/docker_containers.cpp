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

auto dockerContainersRegister = []() {
/// BEGIN[GENTABLE]
  class dockerContainersTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("image", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("image_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("command", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("created", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("state", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("status", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("config_entrypoint", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("started_at", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("finished_at", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("privileged", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("security_options", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("env_variables", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cgroup_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("ipc_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("mnt_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("net_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("pid_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("user_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("uts_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_containers",
      std::make_shared<dockerContainersTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}