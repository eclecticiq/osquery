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
osquery::QueryData genShims(QueryContext& context);
}

class appcompatShimsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("executable", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("install_time", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("sdb_id", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genShims(context);

    return results;
  }

};


REGISTER(appcompatShimsTablePlugin, "table", "appcompat_shims");


namespace tables {
osquery::QueryData genArpCache(QueryContext& context);
}

class arpCacheTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("address", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("mac", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("interface", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("permanent", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genArpCache(context);

    return results;
  }

};


REGISTER(arpCacheTablePlugin, "table", "arp_cache");


namespace tables {
osquery::QueryData genAuthenticode(QueryContext& context);
}

class authenticodeTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::REQUIRED),
      std::make_tuple("original_program_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("serial_number", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("issuer_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("subject_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("result", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genAuthenticode(context);

    return results;
  }

};


REGISTER(authenticodeTablePlugin, "table", "authenticode");


namespace tables {
osquery::QueryData genAutoexec(QueryContext& context);
}

class autoexecTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::INDEX),
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("source", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genAutoexec(context);

    return results;
  }

};


REGISTER(autoexecTablePlugin, "table", "autoexec");


namespace tables {
osquery::QueryData genBitlockerInfo(QueryContext& context);
}

class bitlockerInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("device_id", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("drive_letter", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("persistent_volume_id", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("conversion_status", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("protection_status", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("encryption_method", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genBitlockerInfo(context);

    return results;
  }

};


REGISTER(bitlockerInfoTablePlugin, "table", "bitlocker_info");


namespace tables {
osquery::QueryData genCarbonBlackInfo(QueryContext& context);
}

class carbonBlackInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("sensor_id", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("config_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_store_files", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_module_loads", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_module_info", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_file_mods", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_reg_mods", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_net_conns", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_processes", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_cross_processes", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_emet_events", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_data_file_writes", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_process_user_context", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("collect_sensor_operations", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("log_file_disk_quota_mb", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("log_file_disk_quota_percentage", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("protection_disabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("sensor_ip_addr", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("sensor_backend_server", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("event_queue", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("binary_queue", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }

  std::vector<std::string> aliases() const override {
    return {
      "cb_info",
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genCarbonBlackInfo(context);

    return results;
  }

};


REGISTER(carbonBlackInfoTablePlugin, "table", "carbon_black_info");


namespace tables {
osquery::QueryData genCarves(QueryContext& context);
}

class carvesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("sha256", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("size", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("status", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("carve_guid", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("carve", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::USER_BASED |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genCarves(context);

    return results;
  }

};


REGISTER(carvesTablePlugin, "table", "carves");


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


namespace tables {
osquery::QueryData genChocolateyPackages(QueryContext& context);
}

class chocolateyPackagesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("summary", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("author", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("license", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genChocolateyPackages(context);

    return results;
  }

};


REGISTER(chocolateyPackagesTablePlugin, "table", "chocolatey_packages");


namespace tables {
osquery::QueryData genChromeExtensions(QueryContext& context);
}

class chromeExtensionsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::ADDITIONAL),
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("identifier", TEXT_TYPE, ColumnOptions::INDEX),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("locale", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("update_url", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("author", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("persistent", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::USER_BASED |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genChromeExtensions(context);

    return results;
  }

};


REGISTER(chromeExtensionsTablePlugin, "table", "chrome_extensions");


namespace tables {
osquery::QueryData genCPUID(QueryContext& context);
}

class cpuidTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("feature", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("output_register", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("output_bit", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("input_eax", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genCPUID(context);

    return results;
  }

};


REGISTER(cpuidTablePlugin, "table", "cpuid");


namespace tables {
osquery::QueryData genCurl(QueryContext& context);
}

class curlTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("url", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::REQUIRED),
      std::make_tuple("method", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("user_agent", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("response_code", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("round_trip_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("bytes", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("result", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genCurl(context);

    return results;
  }

};


REGISTER(curlTablePlugin, "table", "curl");


namespace tables {
osquery::QueryData genTLSCertificate(QueryContext& context);
}

class curlCertificateTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("hostname", TEXT_TYPE, ColumnOptions::REQUIRED),
      std::make_tuple("common_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("organization", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("organization_unit", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("serial_number", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("issuer_common_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("issuer_organization", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("issuer_organization_unit", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("valid_from", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("valid_to", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("sha256_fingerprint", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("sha1_fingerprint", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genTLSCertificate(context);

    return results;
  }

};


REGISTER(curlCertificateTablePlugin, "table", "curl_certificate");


namespace tables {
osquery::QueryData genDiskInfo(QueryContext& context);
}

class diskInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("partitions", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("disk_index", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("id", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("pnp_device_id", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("disk_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("manufacturer", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hardware_model", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("serial", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genDiskInfo(context);

    return results;
  }

};


REGISTER(diskInfoTablePlugin, "table", "disk_info");


namespace tables {
osquery::QueryData genDrivers(QueryContext& context);
}

class driversTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("device_id", TEXT_TYPE, ColumnOptions::INDEX),
      std::make_tuple("device_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("image", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("service", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("service_key", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("inf", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("class", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("provider", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("manufacturer", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("driver_key", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("date", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("signed", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genDrivers(context);

    return results;
  }

};


REGISTER(driversTablePlugin, "table", "drivers");


namespace tables {
osquery::QueryData genEtcHosts(QueryContext& context);
}

class etcHostsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("address", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hostnames", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }

  std::vector<std::string> aliases() const override {
    return {
      "hosts",
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::CACHEABLE |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    if (isCached(kCacheStep, context)) {
      return getCache();
    }
    auto results = tables::genEtcHosts(context);
    setCache(kCacheStep, kCacheInterval, context, results);

    return results;
  }

};


REGISTER(etcHostsTablePlugin, "table", "etc_hosts");


namespace tables {
osquery::QueryData genEtcProtocols(QueryContext& context);
}

class etcProtocolsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("number", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("alias", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("comment", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::CACHEABLE |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    if (isCached(kCacheStep, context)) {
      return getCache();
    }
    auto results = tables::genEtcProtocols(context);
    setCache(kCacheStep, kCacheInterval, context, results);

    return results;
  }

};


REGISTER(etcProtocolsTablePlugin, "table", "etc_protocols");


namespace tables {
osquery::QueryData genEtcServices(QueryContext& context);
}

class etcServicesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("port", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("protocol", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("aliases", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("comment", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::CACHEABLE |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    if (isCached(kCacheStep, context)) {
      return getCache();
    }
    auto results = tables::genEtcServices(context);
    setCache(kCacheStep, kCacheInterval, context, results);

    return results;
  }

};


REGISTER(etcServicesTablePlugin, "table", "etc_services");


namespace tables {
osquery::QueryData genGroups(QueryContext& context);
}

class groupsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::INDEX),
      std::make_tuple("gid_signed", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("groupname", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("group_sid", TEXT_TYPE, ColumnOptions::INDEX),
      std::make_tuple("comment", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genGroups(context);

    return results;
  }

};


REGISTER(groupsTablePlugin, "table", "groups");


namespace tables {
osquery::QueryData genHash(QueryContext& context);
}

class hashTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::REQUIRED),
      std::make_tuple("directory", TEXT_TYPE, ColumnOptions::REQUIRED),
      std::make_tuple("md5", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("sha1", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("sha256", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genHash(context);

    return results;
  }

};


REGISTER(hashTablePlugin, "table", "hash");


namespace tables {
osquery::QueryData genIEExtensions(QueryContext& context);
}

class ieExtensionsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("registry_path", TEXT_TYPE, ColumnOptions::INDEX),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::INDEX),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genIEExtensions(context);

    return results;
  }

};


REGISTER(ieExtensionsTablePlugin, "table", "ie_extensions");


namespace tables {
osquery::QueryData getIntelMEInfo(QueryContext& context);
}

class intelMeInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::getIntelMEInfo(context);

    return results;
  }

};


REGISTER(intelMeInfoTablePlugin, "table", "intel_me_info");


namespace tables {
osquery::QueryData genInterfaceAddresses(QueryContext& context);
}

class interfaceAddressesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("interface", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("address", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("mask", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("broadcast", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("point_to_point", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("friendly_name", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::CACHEABLE |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    if (isCached(kCacheStep, context)) {
      return getCache();
    }
    auto results = tables::genInterfaceAddresses(context);
    setCache(kCacheStep, kCacheInterval, context, results);

    return results;
  }

};


REGISTER(interfaceAddressesTablePlugin, "table", "interface_addresses");


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


namespace tables {
osquery::QueryData genKernelInfo(QueryContext& context);
}

class kernelInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("arguments", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("device", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::CACHEABLE |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    if (isCached(kCacheStep, context)) {
      return getCache();
    }
    auto results = tables::genKernelInfo(context);
    setCache(kCacheStep, kCacheInterval, context, results);

    return results;
  }

};


REGISTER(kernelInfoTablePlugin, "table", "kernel_info");


namespace tables {
osquery::QueryData genKvaSpeculative(QueryContext& context);
}

class kvaSpeculativeInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("kva_shadow_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("kva_shadow_user_global", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("kva_shadow_pcid", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("kva_shadow_inv_pcid", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("bp_mitigations", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("bp_system_pol_disabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("bp_microcode_disabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cpu_spec_ctrl_supported", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("ibrs_support_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("stibp_support_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cpu_pred_cmd_supported", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genKvaSpeculative(context);

    return results;
  }

};


REGISTER(kvaSpeculativeInfoTablePlugin, "table", "kva_speculative_info");


namespace tables {
osquery::QueryData genListeningPorts(QueryContext& context);
}

class listeningPortsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("pid", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("port", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("protocol", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("family", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("address", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("fd", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("socket", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("net_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::CACHEABLE |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    if (isCached(kCacheStep, context)) {
      return getCache();
    }
    auto results = tables::genListeningPorts(context);
    setCache(kCacheStep, kCacheInterval, context, results);

    return results;
  }

};


REGISTER(listeningPortsTablePlugin, "table", "listening_ports");


namespace tables {
osquery::QueryData genLoggedInUsers(QueryContext& context);
}

class loggedInUsersTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("user", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("tty", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("host", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("time", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("pid", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::CACHEABLE |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    if (isCached(kCacheStep, context)) {
      return getCache();
    }
    auto results = tables::genLoggedInUsers(context);
    setCache(kCacheStep, kCacheInterval, context, results);

    return results;
  }

};


REGISTER(loggedInUsersTablePlugin, "table", "logged_in_users");


namespace tables {
osquery::QueryData genLogicalDrives(QueryContext& context);
}

class logicalDrivesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("device_id", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("free_space", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("file_system", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("boot_partition", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genLogicalDrives(context);

    return results;
  }

};


REGISTER(logicalDrivesTablePlugin, "table", "logical_drives");


namespace tables {
osquery::QueryData genOSVersion(QueryContext& context);
}

class osVersionTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("major", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("minor", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("patch", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("build", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("platform", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("platform_like", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("codename", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genOSVersion(context);

    return results;
  }

};


REGISTER(osVersionTablePlugin, "table", "os_version");


namespace tables {
osquery::QueryData genInstalledPatches(QueryContext& context);
}

class patchesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("csname", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hotfix_id", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("caption", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("fix_comments", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("installed_by", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("install_date", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("installed_on", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genInstalledPatches(context);

    return results;
  }

};


REGISTER(patchesTablePlugin, "table", "patches");


namespace tables {
osquery::QueryData genPhysicalDiskPerformance(QueryContext& context);
}

class physicalDiskPerformanceTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("avg_disk_bytes_per_read", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("avg_disk_bytes_per_write", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("avg_disk_read_queue_length", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("avg_disk_write_queue_length", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("avg_disk_sec_per_read", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("avg_disk_sec_per_write", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("current_disk_queue_length", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("percent_disk_read_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("percent_disk_write_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("percent_disk_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("percent_idle_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genPhysicalDiskPerformance(context);

    return results;
  }

};


REGISTER(physicalDiskPerformanceTablePlugin, "table", "physical_disk_performance");


namespace tables {
osquery::QueryData genPipes(QueryContext& context);
}

class pipesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::INDEX),
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("instances", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("max_instances", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("flags", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genPipes(context);

    return results;
  }

};


REGISTER(pipesTablePlugin, "table", "pipes");


namespace tables {
osquery::QueryData genPlatformInfo(QueryContext& context);
}

class platformInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("vendor", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("date", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("revision", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("address", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("size", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("volume_size", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("extra", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genPlatformInfo(context);

    return results;
  }

};


REGISTER(platformInfoTablePlugin, "table", "platform_info");


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


namespace tables {
osquery::QueryData genOpenSockets(QueryContext& context);
}

class processOpenSocketsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("pid", INTEGER_TYPE, ColumnOptions::INDEX),
      std::make_tuple("fd", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("socket", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("family", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("protocol", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("local_address", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("remote_address", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("local_port", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("remote_port", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("state", TEXT_TYPE, ColumnOptions::HIDDEN),
      std::make_tuple("net_namespace", TEXT_TYPE, ColumnOptions::HIDDEN),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genOpenSockets(context);

    return results;
  }

};


REGISTER(processOpenSocketsTablePlugin, "table", "process_open_sockets");


namespace tables {
osquery::QueryData genPrograms(QueryContext& context);
}

class programsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("install_location", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("install_source", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("language", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("publisher", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("uninstall_string", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("install_date", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("identifying_number", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }

  std::vector<std::string> aliases() const override {
    return {
      "programs_and_features",
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genPrograms(context);

    return results;
  }

};


REGISTER(programsTablePlugin, "table", "programs");


namespace tables {
osquery::QueryData genPythonPackages(QueryContext& context);
}

class pythonPackagesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("summary", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("author", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("license", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genPythonPackages(context);

    return results;
  }

};


REGISTER(pythonPackagesTablePlugin, "table", "python_packages");


namespace tables {
osquery::QueryData genRegistry(QueryContext& context);
}

class registryTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("key", TEXT_TYPE, ColumnOptions::ADDITIONAL),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::INDEX),
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("data", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("mtime", BIGINT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genRegistry(context);

    return results;
  }

};


REGISTER(registryTablePlugin, "table", "registry");


namespace tables {
osquery::QueryData genRoutes(QueryContext& context);
}

class routesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("destination", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("netmask", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("gateway", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("source", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("flags", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("interface", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("mtu", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("metric", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::CACHEABLE |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    if (isCached(kCacheStep, context)) {
      return getCache();
    }
    auto results = tables::genRoutes(context);
    setCache(kCacheStep, kCacheInterval, context, results);

    return results;
  }

};


REGISTER(routesTablePlugin, "table", "routes");


namespace tables {
osquery::QueryData genScheduledTasks(QueryContext& context);
}

class scheduledTasksTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("action", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("state", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hidden", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("last_run_time", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("next_run_time", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("last_run_message", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("last_run_code", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genScheduledTasks(context);

    return results;
  }

};


REGISTER(scheduledTasksTablePlugin, "table", "scheduled_tasks");


namespace tables {
osquery::QueryData genServices(QueryContext& context);
}

class servicesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("service_type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("display_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("status", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("pid", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("start_type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("win32_exit_code", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("service_exit_code", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("module_path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("user_account", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genServices(context);

    return results;
  }

};


REGISTER(servicesTablePlugin, "table", "services");


namespace tables {
osquery::QueryData genShares(QueryContext& context);
}

class sharedResourcesTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("install_date", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("status", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("allow_maximum", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("maximum_allowed", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genShares(context);

    return results;
  }

};


REGISTER(sharedResourcesTablePlugin, "table", "shared_resources");


namespace tables {
osquery::QueryData genStartupItems(QueryContext& context);
}

class startupItemsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("args", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("source", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("status", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("username", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::CACHEABLE |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    if (isCached(kCacheStep, context)) {
      return getCache();
    }
    auto results = tables::genStartupItems(context);
    setCache(kCacheStep, kCacheInterval, context, results);

    return results;
  }

};


REGISTER(startupItemsTablePlugin, "table", "startup_items");


namespace tables {
osquery::QueryData genSystemInfo(QueryContext& context);
}

class systemInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("hostname", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("uuid", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cpu_type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cpu_subtype", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cpu_brand", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cpu_physical_cores", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cpu_logical_cores", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("cpu_microcode", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("physical_memory", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hardware_vendor", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hardware_model", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hardware_version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hardware_serial", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("computer_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("local_hostname", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genSystemInfo(context);

    return results;
  }

};


REGISTER(systemInfoTablePlugin, "table", "system_info");


namespace tables {
osquery::QueryData genUptime(QueryContext& context);
}

class uptimeTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("days", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hours", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("minutes", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("seconds", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("total_seconds", BIGINT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genUptime(context);

    return results;
  }

};


REGISTER(uptimeTablePlugin, "table", "uptime");


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


namespace tables {
osquery::QueryData genUserGroups(QueryContext& context);
}

class userGroupsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::INDEX),
      std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::INDEX),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genUserGroups(context);

    return results;
  }

};


REGISTER(userGroupsTablePlugin, "table", "user_groups");


namespace tables {
osquery::QueryData genVideoInfo(QueryContext& context);
}

class videoInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("color_depth", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("driver", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("driver_date", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("driver_version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("manufacturer", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("model", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("series", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("video_mode", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genVideoInfo(context);

    return results;
  }

};


REGISTER(videoInfoTablePlugin, "table", "video_info");


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


namespace tables {

class WindowsEventSubscriber {
 public:
  void genTable(RowYield& yield, QueryContext& context);
};
}

class windowsEventsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("datetime", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("source", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("provider_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("provider_guid", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("eventid", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("task", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("level", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("keywords", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("data", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
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


REGISTER(windowsEventsTablePlugin, "table", "windows_events");


namespace tables {
osquery::QueryData genBiosInfo(QueryContext& context);
}

class wmiBiosInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genBiosInfo(context);

    return results;
  }

};


REGISTER(wmiBiosInfoTablePlugin, "table", "wmi_bios_info");


namespace tables {
osquery::QueryData genWmiCliConsumers(QueryContext& context);
}

class wmiCliEventConsumersTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("command_line_template", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("executable_path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("class", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("relative_path", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genWmiCliConsumers(context);

    return results;
  }

};


REGISTER(wmiCliEventConsumersTablePlugin, "table", "wmi_cli_event_consumers");


namespace tables {
osquery::QueryData genWmiFilters(QueryContext& context);
}

class wmiEventFiltersTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("query", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("query_language", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("class", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("relative_path", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genWmiFilters(context);

    return results;
  }

};


REGISTER(wmiEventFiltersTablePlugin, "table", "wmi_event_filters");


namespace tables {
osquery::QueryData genFilterConsumer(QueryContext& context);
}

class wmiFilterConsumerBindingTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("consumer", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("filter", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("class", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("relative_path", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genFilterConsumer(context);

    return results;
  }

};


REGISTER(wmiFilterConsumerBindingTablePlugin, "table", "wmi_filter_consumer_binding");


namespace tables {
osquery::QueryData genScriptConsumers(QueryContext& context);
}

class wmiScriptEventConsumersTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("scripting_engine", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("script_file_name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("script_text", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("class", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("relative_path", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genScriptConsumers(context);

    return results;
  }

};


REGISTER(wmiScriptEventConsumersTablePlugin, "table", "wmi_script_event_consumers");



}