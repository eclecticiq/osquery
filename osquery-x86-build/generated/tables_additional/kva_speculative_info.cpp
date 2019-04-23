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

/// END[GENTABLE]

}