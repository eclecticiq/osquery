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

class PowershellEventSubscriber {
 public:
  void genTable(RowYield& yield, QueryContext& context);
};
}

class powershellEventsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("datetime", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("script_block_id", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("script_block_count", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("script_text", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("script_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("script_path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cosine_similarity", DOUBLE_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::EVENT_BASED |      TableAttributes::NONE;
  }

  bool usesGenerator() const override { return true; }

  void generator(RowYield& yield, QueryContext& context) override {
    if (EventFactory::exists(getName())) {
      auto subscriber = EventFactory::getEventSubscriber(getName());
      return subscriber->genTable(yield, context);
    } else {
      LOG(ERROR) << "Subscriber table missing: " << getName();
    }
  }

};


REGISTER(powershellEventsTablePlugin, "table", "powershell_events");

/// END[GENTABLE]

}