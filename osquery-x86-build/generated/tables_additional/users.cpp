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
osquery::QueryData genUsers(QueryContext& context);
}

class usersTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::INDEX),
      std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("uid_signed", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("gid_signed", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("username", TEXT_TYPE, ColumnOptions::ADDITIONAL),
      std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("directory", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("shell", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("uuid", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genUsers(context);

    return results;
  }

};


REGISTER(usersTablePlugin, "table", "users");

/// END[GENTABLE]

}