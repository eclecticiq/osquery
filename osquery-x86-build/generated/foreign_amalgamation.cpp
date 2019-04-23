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

void registerForeignTables() {


  class accountPolicyDataTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("creation_time", DOUBLE_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("failed_login_count", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("failed_login_timestamp", DOUBLE_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("password_last_set_time", DOUBLE_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("account_policy_data",
      std::make_shared<accountPolicyDataTablePlugin>(), false);
  }

  class acpiTablesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("md5", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("acpi_tables",
      std::make_shared<acpiTablesTablePlugin>(), false);
  }

  class adConfigTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("domain", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("option", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("ad_config",
      std::make_shared<adConfigTablePlugin>(), false);
  }

  class alfTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("allow_signed_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("firewall_unload", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("global_state", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("logging_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("logging_option", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("stealth_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("alf",
      std::make_shared<alfTablePlugin>(), false);
  }

  class alfExceptionsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("state", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("alf_exceptions",
      std::make_shared<alfExceptionsTablePlugin>(), false);
  }

  class alfExplicitAuthsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("process", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("alf_explicit_auths",
      std::make_shared<alfExplicitAuthsTablePlugin>(), false);
  }

  class alfServicesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("service", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("process", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("state", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("alf_services",
      std::make_shared<alfServicesTablePlugin>(), false);
  }

  class appsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bundle_executable", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bundle_identifier", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bundle_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bundle_short_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bundle_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bundle_package_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("environment", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("element", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("compiler", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("development_region", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("display_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("info_string", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("minimum_system_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("category", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("applescript_enabled", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("copyright", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("last_opened_time", DOUBLE_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("apps",
      std::make_shared<appsTablePlugin>(), false);
  }

  class appSchemesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("scheme", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("handler", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("external", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("protected", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("app_schemes",
      std::make_shared<appSchemesTablePlugin>(), false);
  }

  class aptSourcesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("source", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("base_uri", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("release", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("maintainer", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("components", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("architectures", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("apt_sources",
      std::make_shared<aptSourcesTablePlugin>(), false);
  }

  class aslTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("time", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time_nano_sec", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("host", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sender", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("facility", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pid", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("level", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("message", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ref_pid", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ref_proc", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("extra", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("asl",
      std::make_shared<aslTablePlugin>(), false);
  }

  class augeasTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("node", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("label", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::ADDITIONAL),
      };
    }

    std::vector<std::string> aliases() const override {
      return {
        "configurations",
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("augeas",
      std::make_shared<augeasTablePlugin>(), false);
  }

  class authorizationsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("label", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("modified", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("allow_root", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("timeout", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("tries", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("authenticate_user", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("shared", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("comment", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("created", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("class", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("session_owner", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("authorizations",
      std::make_shared<authorizationsTablePlugin>(), false);
  }

  class authorizationMechanismsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("label", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("plugin", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mechanism", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("privileged", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("entry", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("authorization_mechanisms",
      std::make_shared<authorizationMechanismsTablePlugin>(), false);
  }

  class authorizedKeysTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::ADDITIONAL),
        std::make_tuple("algorithm", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("key_file", TEXT_TYPE, ColumnOptions::INDEX),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("authorized_keys",
      std::make_shared<authorizedKeysTablePlugin>(), false);
  }

  class blockDevicesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("parent", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("vendor", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("model", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("block_size", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uuid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("label", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("block_devices",
      std::make_shared<blockDevicesTablePlugin>(), false);
  }

  class browserPluginsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::ADDITIONAL),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("identifier", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sdk", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("development_region", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("native", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("disabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("browser_plugins",
      std::make_shared<browserPluginsTablePlugin>(), false);
  }

  class cpuTimeTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("core", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("user", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("nice", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("system", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("idle", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("iowait", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("irq", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("softirq", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("steal", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("guest", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("guest_nice", BIGINT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("cpu_time",
      std::make_shared<cpuTimeTablePlugin>(), false);
  }

  class crashesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("crash_path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("identifier", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("parent", BIGINT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("responsible", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", INTEGER_TYPE, ColumnOptions::ADDITIONAL),
        std::make_tuple("datetime", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("crashed_thread", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("stack_trace", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("exception_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("exception_codes", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("exception_notes", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("registers", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("crashes",
      std::make_shared<crashesTablePlugin>(), false);
  }

  class crontabTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("event", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("minute", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("hour", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("day_of_month", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("month", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("day_of_week", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("command", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("crontab",
      std::make_shared<crontabTablePlugin>(), false);
  }

  class cupsDestinationsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("option_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("option_value", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("cups_destinations",
      std::make_shared<cupsDestinationsTablePlugin>(), false);
  }

  class cupsJobsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("title", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("destination", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("user", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("format", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("completed_time", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("processing_time", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("creation_time", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("cups_jobs",
      std::make_shared<cupsJobsTablePlugin>(), false);
  }

  class debPackagesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("source", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("arch", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("revision", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("deb_packages",
      std::make_shared<debPackagesTablePlugin>(), false);
  }

  class deviceFileTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("device", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::REQUIRED),
        std::make_tuple("partition", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::REQUIRED),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::ADDITIONAL),
        std::make_tuple("filename", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inode", BIGINT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mode", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("block_size", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("atime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mtime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ctime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("hard_links", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("device_file",
      std::make_shared<deviceFileTablePlugin>(), false);
  }

  class deviceFirmwareTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("device", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("device_firmware",
      std::make_shared<deviceFirmwareTablePlugin>(), false);
  }

  class deviceHashTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("device", TEXT_TYPE, ColumnOptions::REQUIRED),
        std::make_tuple("partition", TEXT_TYPE, ColumnOptions::REQUIRED),
        std::make_tuple("inode", BIGINT_TYPE, ColumnOptions::REQUIRED),
        std::make_tuple("md5", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sha1", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sha256", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("device_hash",
      std::make_shared<deviceHashTablePlugin>(), false);
  }

  class devicePartitionsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("device", TEXT_TYPE, ColumnOptions::REQUIRED),
        std::make_tuple("partition", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("label", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("offset", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("blocks_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("blocks", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inodes", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("flags", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("device_partitions",
      std::make_shared<devicePartitionsTablePlugin>(), false);
  }

  class diskEncryptionTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uuid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("encrypted", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("user_uuid", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("disk_encryption",
      std::make_shared<diskEncryptionTablePlugin>(), false);
  }

  class diskEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("action", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("device", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uuid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ejectable", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mountable", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("writable", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("content", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("media_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("vendor", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("filesystem", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("checksum", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }


  ColumnAliasSet columnAliases() const override {
    return {
      {"device", {"bsd_name"}},
    };
  }

    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("disk_events",
      std::make_shared<diskEventsTablePlugin>(), false);
  }

  class dnsResolversTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("address", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("netmask", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("options", BIGINT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("dns_resolvers",
      std::make_shared<dnsResolversTablePlugin>(), false);
  }

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

  class dockerContainerLabelsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_container_labels",
      std::make_shared<dockerContainerLabelsTablePlugin>(), false);
  }

  class dockerContainerMountsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("source", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("destination", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("driver", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mode", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rw", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("propagation", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_container_mounts",
      std::make_shared<dockerContainerMountsTablePlugin>(), false);
  }

  class dockerContainerNetworksTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("network_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("endpoint_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gateway", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ip_address", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ip_prefix_len", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ipv6_gateway", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ipv6_address", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ipv6_prefix_len", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mac_address", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_container_networks",
      std::make_shared<dockerContainerNetworksTablePlugin>(), false);
  }

  class dockerContainerPortsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("host_ip", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("host_port", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_container_ports",
      std::make_shared<dockerContainerPortsTablePlugin>(), false);
  }

  class dockerContainerProcessesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::REQUIRED),
        std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cmdline", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("state", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("euid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("egid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("suid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sgid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("wired_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("resident_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("total_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("start_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("parent", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pgroup", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("threads", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("nice", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("user", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu", DOUBLE_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mem", DOUBLE_TYPE, ColumnOptions::DEFAULT),
      };
    }


  ColumnAliasSet columnAliases() const override {
    return {
      {"total_size", {"phys_footprint"}},
    };
  }

    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_container_processes",
      std::make_shared<dockerContainerProcessesTablePlugin>(), false);
  }

  class dockerContainerStatsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::REQUIRED),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pids", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("read", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("preread", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("interval", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("disk_read", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("disk_write", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("num_procs", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu_total_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu_kernelmode_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu_usermode_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("system_cpu_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("online_cpus", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pre_cpu_total_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pre_cpu_kernelmode_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pre_cpu_usermode_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pre_system_cpu_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pre_online_cpus", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory_max_usage", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory_limit", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("network_rx_bytes", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("network_tx_bytes", BIGINT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_container_stats",
      std::make_shared<dockerContainerStatsTablePlugin>(), false);
  }

  class dockerImagesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("created", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size_bytes", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("tags", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_images",
      std::make_shared<dockerImagesTablePlugin>(), false);
  }

  class dockerImageLabelsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_image_labels",
      std::make_shared<dockerImageLabelsTablePlugin>(), false);
  }

  class dockerInfoTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("containers", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("containers_running", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("containers_paused", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("containers_stopped", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("images", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("storage_driver", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory_limit", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("swap_limit", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("kernel_memory", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu_cfs_period", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu_cfs_quota", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu_shares", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpu_set", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ipv4_forwarding", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bridge_nf_iptables", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bridge_nf_ip6tables", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("oom_kill_disable", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("logging_driver", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cgroup_driver", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("kernel_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("os", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("os_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("architecture", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cpus", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("http_proxy", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("https_proxy", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("no_proxy", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("server_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("root_dir", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_info",
      std::make_shared<dockerInfoTablePlugin>(), false);
  }

  class dockerNetworksTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("driver", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("created", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("enable_ipv6", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("subnet", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gateway", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_networks",
      std::make_shared<dockerNetworksTablePlugin>(), false);
  }

  class dockerNetworkLabelsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("id", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_network_labels",
      std::make_shared<dockerNetworkLabelsTablePlugin>(), false);
  }

  class dockerVersionTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("api_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("min_api_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("git_commit", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("go_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("os", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("arch", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("kernel_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("build_time", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_version",
      std::make_shared<dockerVersionTablePlugin>(), false);
  }

  class dockerVolumesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("driver", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mount_point", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_volumes",
      std::make_shared<dockerVolumesTablePlugin>(), false);
  }

  class dockerVolumeLabelsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("docker_volume_labels",
      std::make_shared<dockerVolumeLabelsTablePlugin>(), false);
  }

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

  class ec2InstanceTagsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("instance_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("ec2_instance_tags",
      std::make_shared<ec2InstanceTagsTablePlugin>(), false);
  }

  class eventTapsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("event_tap_id", INTEGER_TYPE, ColumnOptions::INDEX),
        std::make_tuple("event_tapped", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("process_being_tapped", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("tapping_process", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("event_taps",
      std::make_shared<eventTapsTablePlugin>(), false);
  }

  class extendedAttributesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::REQUIRED),
        std::make_tuple("directory", TEXT_TYPE, ColumnOptions::REQUIRED),
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("base64", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("extended_attributes",
      std::make_shared<extendedAttributesTablePlugin>(), false);
  }

  class fanSpeedSensorsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("fan", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("actual", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("min", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("max", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("target", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("fan_speed_sensors",
      std::make_shared<fanSpeedSensorsTablePlugin>(), false);
  }

  class fbsdKmodsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("refs", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("address", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("fbsd_kmods",
      std::make_shared<fbsdKmodsTablePlugin>(), false);
  }

  class fileEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("target_path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("category", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("action", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("transaction_id", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inode", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mode", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("atime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mtime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ctime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("md5", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sha1", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sha256", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("hashed", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("file_events",
      std::make_shared<fileEventsTablePlugin>(), false);
  }

  class firefoxAddonsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::ADDITIONAL),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("identifier", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("creator", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("source_url", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("visible", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("active", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("disabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("autoupdate", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("native", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("location", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("firefox_addons",
      std::make_shared<firefoxAddonsTablePlugin>(), false);
  }

  class gatekeeperTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("assessments_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("dev_id_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("opaque_version", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("gatekeeper",
      std::make_shared<gatekeeperTablePlugin>(), false);
  }

  class gatekeeperApprovedAppsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("requirement", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ctime", DOUBLE_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mtime", DOUBLE_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("gatekeeper_approved_apps",
      std::make_shared<gatekeeperApprovedAppsTablePlugin>(), false);
  }

  class hardwareEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("action", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("driver", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("vendor", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("vendor_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("model", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("model_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("serial", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("revision", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("hardware_events",
      std::make_shared<hardwareEventsTablePlugin>(), false);
  }

  class homebrewPackagesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("homebrew_packages",
      std::make_shared<homebrewPackagesTablePlugin>(), false);
  }

  class iokitDevicetreeTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("class", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("id", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("parent", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("device_path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("service", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("busy_state", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("retain_count", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("depth", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("iokit_devicetree",
      std::make_shared<iokitDevicetreeTablePlugin>(), false);
  }

  class iokitRegistryTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("class", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("id", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("parent", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("busy_state", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("retain_count", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("depth", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("iokit_registry",
      std::make_shared<iokitRegistryTablePlugin>(), false);
  }

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

  class kernelExtensionsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("idx", INTEGER_TYPE, ColumnOptions::INDEX),
        std::make_tuple("refs", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("linked_against", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("kernel_extensions",
      std::make_shared<kernelExtensionsTablePlugin>(), false);
  }

  class kernelIntegrityTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("sycall_addr_modified", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("text_segment_hash", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("kernel_integrity",
      std::make_shared<kernelIntegrityTablePlugin>(), false);
  }

  class kernelModulesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("used_by", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("status", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("address", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("kernel_modules",
      std::make_shared<kernelModulesTablePlugin>(), false);
  }

  class kernelPanicsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("registers", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("frame_backtrace", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("module_backtrace", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("dependencies", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("os_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("kernel_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("system_model", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uptime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("last_loaded", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("last_unloaded", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("kernel_panics",
      std::make_shared<kernelPanicsTablePlugin>(), false);
  }

  class keychainAclsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("keychain_path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("authorizations", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("label", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("keychain_acls",
      std::make_shared<keychainAclsTablePlugin>(), false);
  }

  class keychainItemsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("label", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("comment", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("created", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("modified", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("keychain_items",
      std::make_shared<keychainItemsTablePlugin>(), false);
  }

  class knownHostsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::ADDITIONAL),
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("key_file", TEXT_TYPE, ColumnOptions::INDEX),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("known_hosts",
      std::make_shared<knownHostsTablePlugin>(), false);
  }

  class lastTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("username", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("tty", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pid", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("host", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("last",
      std::make_shared<lastTablePlugin>(), false);
  }

  class launchdTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("label", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("program", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("run_at_load", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("keep_alive", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("on_demand", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("disabled", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("username", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("groupname", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("stdout_path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("stderr_path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("start_interval", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("program_arguments", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("watch_paths", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("queue_directories", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inetd_compatibility", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("start_on_mount", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("root_directory", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("working_directory", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("process_type", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("launchd",
      std::make_shared<launchdTablePlugin>(), false);
  }

  class launchdOverridesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("label", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("launchd_overrides",
      std::make_shared<launchdOverridesTablePlugin>(), false);
  }

  class lldpNeighborsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("interface", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rid", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_id_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_sysname", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_sys_description", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_bridge_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_bridge_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_router_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_router_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_repeater_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_repeater_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_wlan_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_wlan_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_tel_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_tel_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_docsis_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_docsis_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_station_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_station_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_other_capability_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_other_capability_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chassis_mgmt_ips", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_id_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_description", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_ttl", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_mfs", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_aggregation_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_supported", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_mau_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_10baset_hd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_10baset_fd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_100basetx_hd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_100basetx_fd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_100baset2_hd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_100baset2_fd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_100baset4_hd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_100baset4_fd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_1000basex_hd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_1000basex_fd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_1000baset_hd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("port_autoneg_1000baset_fd_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_device_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_mdi_supported", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_mdi_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_paircontrol_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_pairs", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_class", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_8023at_enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_8023at_power_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_8023at_power_source", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_8023at_power_priority", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_8023at_power_allocated", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("power_8023at_power_requested", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_device_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_capability_capabilities", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_capability_policy", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_capability_location", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_capability_mdi_pse", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_capability_mdi_pd", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_capability_inventory", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("med_policies", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("vlans", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pvid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ppvids_supported", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ppvids_enabled", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pids", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("lldp_neighbors",
      std::make_shared<lldpNeighborsTablePlugin>(), false);
  }

  class loadAverageTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("period", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("average", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("load_average",
      std::make_shared<loadAverageTablePlugin>(), false);
  }

  class magicTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::REQUIRED),
        std::make_tuple("data", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mime_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mime_encoding", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("magic",
      std::make_shared<magicTablePlugin>(), false);
  }

  class managedPoliciesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("domain", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uuid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("username", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("manual", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("managed_policies",
      std::make_shared<managedPoliciesTablePlugin>(), false);
  }

  class mdfindTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("query", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("mdfind",
      std::make_shared<mdfindTablePlugin>(), false);
  }

  class mdDevicesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("device_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("status", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("raid_level", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("chunk_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("raid_disks", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("nr_raid_disks", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("working_disks", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("active_disks", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("failed_disks", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("spare_disks", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("superblock_state", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("superblock_version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("superblock_update_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bitmap_on_mem", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bitmap_chunk_size", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bitmap_external_file", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("recovery_progress", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("recovery_finish", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("recovery_speed", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("resync_progress", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("resync_finish", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("resync_speed", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("reshape_progress", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("reshape_finish", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("reshape_speed", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("check_array_progress", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("check_array_finish", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("check_array_speed", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("unused_devices", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("other", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("md_devices",
      std::make_shared<mdDevicesTablePlugin>(), false);
  }

  class mdDrivesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("md_device_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("drive_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("slot", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("state", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("md_drives",
      std::make_shared<mdDrivesTablePlugin>(), false);
  }

  class mdPersonalitiesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("md_personalities",
      std::make_shared<mdPersonalitiesTablePlugin>(), false);
  }

  class memoryDevicesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("handle", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("array_handle", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("form_factor", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("total_width", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("data_width", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("set", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("device_locator", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bank_locator", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory_type_details", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("max_speed", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("configured_clock_speed", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("manufacturer", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("serial_number", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("asset_tag", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("part_number", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("min_voltage", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("max_voltage", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("configured_voltage", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("memory_devices",
      std::make_shared<memoryDevicesTablePlugin>(), false);
  }

  class memoryInfoTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("memory_total", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("memory_free", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("buffers", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cached", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("swap_cached", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("active", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inactive", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("swap_total", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("swap_free", BIGINT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("memory_info",
      std::make_shared<memoryInfoTablePlugin>(), false);
  }

  class memoryMapTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("start", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("end", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("memory_map",
      std::make_shared<memoryMapTablePlugin>(), false);
  }

  class mountsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("device", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("device_alias", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("blocks_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("blocks", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("blocks_free", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("blocks_available", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inodes", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inodes_free", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("flags", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("mounts",
      std::make_shared<mountsTablePlugin>(), false);
  }

  class msrTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("processor_number", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("turbo_disabled", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("turbo_ratio_limit", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("platform_info", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("perf_ctl", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("perf_status", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("feature_control", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rapl_power_limit", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rapl_energy_status", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rapl_power_units", BIGINT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("msr",
      std::make_shared<msrTablePlugin>(), false);
  }

  class nfsSharesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("share", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("options", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("readonly", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("nfs_shares",
      std::make_shared<nfsSharesTablePlugin>(), false);
  }

  class npmPackagesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("author", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("license", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("directory", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("npm_packages",
      std::make_shared<npmPackagesTablePlugin>(), false);
  }

  class nvramTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("nvram",
      std::make_shared<nvramTablePlugin>(), false);
  }

  class operaExtensionsTablePlugin : public TablePlugin {
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


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("opera_extensions",
      std::make_shared<operaExtensionsTablePlugin>(), false);
  }

  class packageBomTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("filepath", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gid", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mode", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("modified_time", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::REQUIRED),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("package_bom",
      std::make_shared<packageBomTablePlugin>(), false);
  }

  class packageInstallHistoryTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("package_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("source", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("content_type", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("package_install_history",
      std::make_shared<packageInstallHistoryTablePlugin>(), false);
  }

  class packageReceiptsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("package_id", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("package_filename", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::HIDDEN),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("location", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("install_time", DOUBLE_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("installer_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::ADDITIONAL),
      };
    }

    std::vector<std::string> aliases() const override {
      return {
        "packages",
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("package_receipts",
      std::make_shared<packageReceiptsTablePlugin>(), false);
  }

  class pciDevicesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("pci_slot", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pci_class", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("driver", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("vendor", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("vendor_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("model", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("model_id", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("pci_devices",
      std::make_shared<pciDevicesTablePlugin>(), false);
  }

  class pkgPackagesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("flatsize", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("arch", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("pkg_packages",
      std::make_shared<pkgPackagesTablePlugin>(), false);
  }

  class plistTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("subkey", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::REQUIRED),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("plist",
      std::make_shared<plistTablePlugin>(), false);
  }

  class portageKeywordsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("package", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("keyword", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mask", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("unmask", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("portage_keywords",
      std::make_shared<portageKeywordsTablePlugin>(), false);
  }

  class portagePackagesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("package", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("slot", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("build_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("repository", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eapi", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("world", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("portage_packages",
      std::make_shared<portagePackagesTablePlugin>(), false);
  }

  class portageUseTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("package", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("use", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("portage_use",
      std::make_shared<portageUseTablePlugin>(), false);
  }

  class powerSensorsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("category", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("power_sensors",
      std::make_shared<powerSensorsTablePlugin>(), false);
  }

  class preferencesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("domain", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("subkey", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("forced", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("username", TEXT_TYPE, ColumnOptions::ADDITIONAL),
        std::make_tuple("host", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("preferences",
      std::make_shared<preferencesTablePlugin>(), false);
  }

  class processEnvsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("pid", INTEGER_TYPE, ColumnOptions::INDEX),
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("process_envs",
      std::make_shared<processEnvsTablePlugin>(), false);
  }

  class processEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mode", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cmdline", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cmdline_size", BIGINT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("env", TEXT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("env_count", BIGINT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("env_size", BIGINT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("cwd", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("auid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("euid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("egid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("owner_uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("owner_gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("atime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mtime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ctime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("btime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("overflows", TEXT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("parent", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uptime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("status", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }


  ColumnAliasSet columnAliases() const override {
    return {
      {"env", {"environment"}},
      {"env_count", {"environment_count"}},
      {"env_size", {"environment_size"}},
      {"atime", {"access_time"}},
      {"mtime", {"modify_time"}},
      {"ctime", {"change_time"}},
      {"btime", {"create_time"}},
    };
  }

    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("process_events",
      std::make_shared<processEventsTablePlugin>(), false);
  }

  class processFileEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("operation", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ppid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("executable", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("partial", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cwd", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("dest_path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("euid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("egid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uptime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("process_file_events",
      std::make_shared<processFileEventsTablePlugin>(), false);
  }

  class processOpenFilesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("fd", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("process_open_files",
      std::make_shared<processOpenFilesTablePlugin>(), false);
  }

  class prometheusMetricsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("target_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("metric_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("metric_value", DOUBLE_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("timestamp_ms", BIGINT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("prometheus_metrics",
      std::make_shared<prometheusMetricsTablePlugin>(), false);
  }

  class quicklookCacheTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rowid", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("fs_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("volume_id", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inode", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mtime", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("label", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("last_hit_date", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("hit_count", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("icon_mode", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cache_path", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("quicklook_cache",
      std::make_shared<quicklookCacheTablePlugin>(), false);
  }

  class rpmPackagesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("release", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("source", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sha1", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("arch", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("rpm_packages",
      std::make_shared<rpmPackagesTablePlugin>(), false);
  }

  class rpmPackageFilesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("package", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("username", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("groupname", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mode", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sha256", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("rpm_package_files",
      std::make_shared<rpmPackageFilesTablePlugin>(), false);
  }

  class safariExtensionsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::ADDITIONAL),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("identifier", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sdk", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("update_url", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("author", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("developer_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("safari_extensions",
      std::make_shared<safariExtensionsTablePlugin>(), false);
  }

  class sandboxesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("label", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("user", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("build_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bundle_path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("sandboxes",
      std::make_shared<sandboxesTablePlugin>(), false);
  }

  class shadowTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("password_status", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("hash_alg", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("last_change", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("min", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("max", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("warning", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inactive", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("expire", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("flag", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("username", TEXT_TYPE, ColumnOptions::INDEX),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("shadow",
      std::make_shared<shadowTablePlugin>(), false);
  }

  class sharedFoldersTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("shared_folders",
      std::make_shared<sharedFoldersTablePlugin>(), false);
  }

  class sharedMemoryTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("shmid", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("owner_uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("creator_uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("creator_pid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("atime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("dtime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ctime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("permissions", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("attached", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("status", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("locked", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("shared_memory",
      std::make_shared<sharedMemoryTablePlugin>(), false);
  }

  class sharingPreferencesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("screen_sharing", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("file_sharing", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("printer_sharing", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("remote_login", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("remote_management", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("remote_apple_events", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("internet_sharing", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bluetooth_sharing", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("disc_sharing", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("sharing_preferences",
      std::make_shared<sharingPreferencesTablePlugin>(), false);
  }

  class shellHistoryTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::ADDITIONAL),
        std::make_tuple("time", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("command", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("history_file", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("shell_history",
      std::make_shared<shellHistoryTablePlugin>(), false);
  }

  class signatureTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::REQUIRED),
        std::make_tuple("signed", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("identifier", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("cdhash", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("team_identifier", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("authority", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("signature",
      std::make_shared<signatureTablePlugin>(), false);
  }

  class sipConfigTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("config_flag", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("enabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("enabled_nvram", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("sip_config",
      std::make_shared<sipConfigTablePlugin>(), false);
  }

  class smbiosTablesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("number", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("handle", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("header_size", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("md5", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("smbios_tables",
      std::make_shared<smbiosTablesTablePlugin>(), false);
  }

  class smcKeysTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::ADDITIONAL),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("size", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("hidden", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("smc_keys",
      std::make_shared<smcKeysTablePlugin>(), false);
  }

  class socketEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("action", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("fd", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("auid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("success", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("family", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("protocol", INTEGER_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("local_address", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("remote_address", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("local_port", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("remote_port", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("socket", TEXT_TYPE, ColumnOptions::HIDDEN),
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uptime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("socket_events",
      std::make_shared<socketEventsTablePlugin>(), false);
  }

  class sudoersTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("header", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rule_details", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("sudoers",
      std::make_shared<sudoersTablePlugin>(), false);
  }

  class suidBinTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("username", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("groupname", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("permissions", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("suid_bin",
      std::make_shared<suidBinTablePlugin>(), false);
  }

  class syslogEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("datetime", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("host", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("severity", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("facility", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("tag", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("message", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }

    std::vector<std::string> aliases() const override {
      return {
        "syslog",
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("syslog_events",
      std::make_shared<syslogEventsTablePlugin>(), false);
  }

  class systemControlsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("oid", TEXT_TYPE, ColumnOptions::ADDITIONAL),
        std::make_tuple("subsystem", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("current_value", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("config_value", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("system_controls",
      std::make_shared<systemControlsTablePlugin>(), false);
  }

  class temperatureSensorsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("key", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("celsius", DOUBLE_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("fahrenheit", DOUBLE_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("temperature_sensors",
      std::make_shared<temperatureSensorsTablePlugin>(), false);
  }

  class timeMachineBackupsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("destination_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("backup_date", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("time_machine_backups",
      std::make_shared<timeMachineBackupsTablePlugin>(), false);
  }

  class timeMachineDestinationsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("alias", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("destination_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("consistency_scan_date", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("root_volume_uuid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bytes_available", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bytes_used", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("encryption", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("time_machine_destinations",
      std::make_shared<timeMachineDestinationsTablePlugin>(), false);
  }

  class usbDevicesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("usb_address", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("usb_port", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("vendor", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("vendor_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("model", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("model_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("serial", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("class", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("subclass", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("protocol", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("removable", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("usb_devices",
      std::make_shared<usbDevicesTablePlugin>(), false);
  }

  class userEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("auid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("pid", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("message", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("address", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("terminal", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uptime", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("user_events",
      std::make_shared<userEventsTablePlugin>(), false);
  }

  class userInteractionEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("user_interaction_events",
      std::make_shared<userInteractionEventsTablePlugin>(), false);
  }

  class userSshKeysTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::ADDITIONAL),
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("encrypted", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("user_ssh_keys",
      std::make_shared<userSshKeysTablePlugin>(), false);
  }

  class virtualMemoryInfoTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("free", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("active", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("inactive", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("speculative", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("throttled", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("wired", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("purgeable", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("faults", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("copy", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("zero_fill", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("reactivated", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("purged", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("file_backed", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("anonymous", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uncompressed", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("compressor", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("decompressed", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("compressed", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("page_ins", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("page_outs", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("swap_ins", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("swap_outs", BIGINT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("virtual_memory_info",
      std::make_shared<virtualMemoryInfoTablePlugin>(), false);
  }

  class wifiNetworksTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("ssid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("network_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("security_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("last_connected", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("passpoint", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("possibly_hidden", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("roaming", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("roaming_profile", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("captive_portal", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("auto_login", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("temporarily_disabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("disabled", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("wifi_networks",
      std::make_shared<wifiNetworksTablePlugin>(), false);
  }

  class wifiSurveyTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("interface", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ssid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bssid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("network_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("country_code", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rssi", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("noise", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("channel", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("channel_width", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("channel_band", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("wifi_survey",
      std::make_shared<wifiSurveyTablePlugin>(), false);
  }

  class wifiStatusTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("interface", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("ssid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("bssid", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("network_name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("country_code", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("security_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("rssi", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("noise", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("channel", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("channel_width", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("channel_band", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("transmit_rate", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("mode", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("wifi_status",
      std::make_shared<wifiStatusTablePlugin>(), false);
  }

  class xprotectEntriesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("launch_type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("identity", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("filename", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("filetype", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("optional", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("uses_pattern", INTEGER_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("xprotect_entries",
      std::make_shared<xprotectEntriesTablePlugin>(), false);
  }

  class xprotectMetaTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("identifier", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("developer_id", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("min_version", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("xprotect_meta",
      std::make_shared<xprotectMetaTablePlugin>(), false);
  }

  class xprotectReportsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("user_action", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("xprotect_reports",
      std::make_shared<xprotectReportsTablePlugin>(), false);
  }

  class yaraTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("path", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::REQUIRED),
        std::make_tuple("matches", TEXT_TYPE, ColumnOptions::INDEX),
        std::make_tuple("count", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("sig_group", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::ADDITIONAL),
        std::make_tuple("sigfile", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::ADDITIONAL),
        std::make_tuple("strings", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("tags", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("yara",
      std::make_shared<yaraTablePlugin>(), false);
  }

  class yaraEventsTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("target_path", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("category", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("action", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("transaction_id", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("matches", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("count", INTEGER_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("strings", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("tags", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("time", BIGINT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("eid", TEXT_TYPE, ColumnOptions::HIDDEN),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("yara_events",
      std::make_shared<yaraEventsTablePlugin>(), false);
  }

  class yumSourcesTablePlugin : public TablePlugin {
   private:
    TableColumns columns() const override {
      return {
        std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("baseurl", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("enabled", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gpgcheck", TEXT_TYPE, ColumnOptions::DEFAULT),
        std::make_tuple("gpgkey", TEXT_TYPE, ColumnOptions::DEFAULT),
      };
    }


    QueryData generate(QueryContext& request) override { return QueryData(); }
  };

  {
    auto registry = RegistryFactory::get().registry("table");
    registry->add("yum_sources",
      std::make_shared<yumSourcesTablePlugin>(), false);
  }


}

}