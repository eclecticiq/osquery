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
osquery::QueryData genInterfaceDetails(QueryContext& context);
}

class interfaceDetailsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("interface", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("mac", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("mtu", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("metric", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("flags", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("ipackets", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("opackets", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("ibytes", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("obytes", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("ierrors", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("oerrors", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("idrops", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("odrops", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collisions", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("last_change", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("link_speed", BIGINT_TYPE, ColumnOptions::HIDDEN),
      std::make_tuple("pci_slot", TEXT_TYPE, ColumnOptions::HIDDEN),
      std::make_tuple("friendly_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("manufacturer", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("connection_id", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("connection_status", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("physical_adapter", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("speed", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("service", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("dhcp_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("dhcp_lease_expires", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("dhcp_lease_obtained", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("dhcp_server", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("dns_domain", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("dns_domain_suffix_search_order", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("dns_host_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("dns_server_search_order", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::CACHEABLE |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    if (isCached(kCacheStep, context)) {
      return getCache();
    }
    auto results = tables::genInterfaceDetails(context);
    setCache(kCacheStep, kCacheInterval, context, results);

    return results;
  }

};


REGISTER(interfaceDetailsTablePlugin, "table", "interface_details");

/// END[GENTABLE]

}