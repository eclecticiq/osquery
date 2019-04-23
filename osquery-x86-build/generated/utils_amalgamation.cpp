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
osquery::QueryData genFile(QueryContext& context);
}

class fileTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::INDEX | ColumnOptions::REQUIRED),
      std::make_tuple("directory", TEXT_TYPE, ColumnOptions::REQUIRED),
      std::make_tuple("filename", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("inode", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("uid", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("gid", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("mode", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("device", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("size", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("block_size", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("atime", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("mtime", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("ctime", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("btime", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hard_links", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("symlink", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::UTILITY |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genFile(context);

    return results;
  }

};


REGISTER_INTERNAL(fileTablePlugin, "table", "file");


namespace tables {
osquery::QueryData genOsqueryEvents(QueryContext& context);
}

class osqueryEventsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("publisher", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("subscriptions", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("events", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("refreshes", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("active", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::UTILITY |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genOsqueryEvents(context);

    return results;
  }

};


REGISTER_INTERNAL(osqueryEventsTablePlugin, "table", "osquery_events");


namespace tables {
osquery::QueryData genOsqueryExtensions(QueryContext& context);
}

class osqueryExtensionsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("uuid", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("sdk_version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("path", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::UTILITY |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genOsqueryExtensions(context);

    return results;
  }

};


REGISTER_INTERNAL(osqueryExtensionsTablePlugin, "table", "osquery_extensions");


namespace tables {
osquery::QueryData genOsqueryFlags(QueryContext& context);
}

class osqueryFlagsTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("type", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("description", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("default_value", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("value", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("shell_only", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::UTILITY |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genOsqueryFlags(context);

    return results;
  }

};


REGISTER_INTERNAL(osqueryFlagsTablePlugin, "table", "osquery_flags");


namespace tables {
osquery::QueryData genOsqueryInfo(QueryContext& context);
}

class osqueryInfoTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("pid", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("uuid", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("instance_id", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("config_hash", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("config_valid", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("extensions", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("build_platform", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("build_distro", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("start_time", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("watcher", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::UTILITY |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genOsqueryInfo(context);

    return results;
  }

};


REGISTER_INTERNAL(osqueryInfoTablePlugin, "table", "osquery_info");


namespace tables {
osquery::QueryData genOsqueryPacks(QueryContext& context);
}

class osqueryPacksTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("platform", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("version", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("shard", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("discovery_cache_hits", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("discovery_executions", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("active", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::UTILITY |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genOsqueryPacks(context);

    return results;
  }

};


REGISTER_INTERNAL(osqueryPacksTablePlugin, "table", "osquery_packs");


namespace tables {
osquery::QueryData genOsqueryRegistry(QueryContext& context);
}

class osqueryRegistryTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("registry", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("owner_uuid", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("internal", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("active", INTEGER_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::UTILITY |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genOsqueryRegistry(context);

    return results;
  }

};


REGISTER_INTERNAL(osqueryRegistryTablePlugin, "table", "osquery_registry");


namespace tables {
osquery::QueryData genOsquerySchedule(QueryContext& context);
}

class osqueryScheduleTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("name", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("query", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("interval", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("executions", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("last_executed", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("blacklisted", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("output_size", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("wall_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("user_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("system_time", BIGINT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("average_memory", BIGINT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  TableAttributes attributes() const override {
    return       TableAttributes::UTILITY |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genOsquerySchedule(context);

    return results;
  }

};


REGISTER_INTERNAL(osqueryScheduleTablePlugin, "table", "osquery_schedule");


namespace tables {
osquery::QueryData genTime(QueryContext& context);
}

class timeTablePlugin : public TablePlugin {
 private:
  TableColumns columns() const override {
    return {
      std::make_tuple("weekday", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("year", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("month", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("day", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("hour", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("minutes", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("seconds", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("timezone", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("local_time", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("local_timezone", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("unix_time", INTEGER_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("timestamp", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("datetime", TEXT_TYPE, ColumnOptions::DEFAULT),
      std::make_tuple("iso_8601", TEXT_TYPE, ColumnOptions::DEFAULT),
    };
  }


  ColumnAliasSet columnAliases() const override {
    return {
      {"local_time", {"localtime"}},
      {"datetime", {"date_time"}},
    };
  }

  TableAttributes attributes() const override {
    return       TableAttributes::UTILITY |      TableAttributes::NONE;
  }

  QueryData generate(QueryContext& context) override {
    auto results = tables::genTime(context);

    return results;
  }

};


REGISTER_INTERNAL(timeTablePlugin, "table", "time");



}