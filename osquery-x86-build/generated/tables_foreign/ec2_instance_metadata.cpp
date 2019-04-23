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

auto ec2InstanceMetadataRegister = []() {
/// BEGIN[GENTABLE]
  class ec2InstanceMetadataTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("instance_id", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("instance_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("architecture", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("region", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("availability_zone", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("local_hostname", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("local_ipv4", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mac", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("security_groups", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("iam_arn", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ami_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("reservation_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("account_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ssh_public_key", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("ec2_instance_metadata",
      std::make_shared<ec2InstanceMetadataTablePlugin>(), false);
  }
/// END[GENTABLE]
};

}
}