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
osquery::QueryData genCerts(QueryContext& context);
}

class certificatesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("common_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("subject", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("issuer", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("ca", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("self_signed", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("not_valid_before", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("not_valid_after", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("signing_algorithm", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("key_algorithm", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("key_strength", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("key_usage", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("subject_key_id", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("authority_key_id", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("sha1", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("serial", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::CACHEABLE |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    if (isCached(kCacheStep, context)) {
      return getCache();
    }
    auto results = tables::genCerts(context);
    setCache(kCacheStep, kCacheInterval, context, results);

    return results;
  }

};


REGISTER(certificatesTablePlugin, "table", "certificates");

/// END[GENTABLE]

}