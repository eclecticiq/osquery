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

auto iptablesRegister = []() {
/// BEGIN[GENTABLE]
  class iptablesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("filter_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chain", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("policy", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("target", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("protocol", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("src_port", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("dst_port", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("src_ip", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("src_mask", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("iniface", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("iniface_mask", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("dst_ip", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("dst_mask", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("outiface", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("outiface_mask", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("match", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("packets", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bytes", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("iptables",
      std::make_shared<iptablesTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}