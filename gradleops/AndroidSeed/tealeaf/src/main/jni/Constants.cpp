/*
 * Constants.cpp
 *
 *  Created on: Nov 6, 2015
 *      Author: gatanasov
 */

#include "Constants.h"

std::string Constants::APP_ROOT_FOLDER_PATH = "";
bool Constants::V8_CACHE_COMPILED_CODE = false;
std::string Constants::V8_STARTUP_FLAGS = "--no_incremental_marking --no_incremental_marking_wrappers --no_incremental_marking_steps --trace_gc_verbose --trace_gc_nvp --gc_global --send_idle_notification --log_all";
std::string Constants::V8_HEAP_SNAPSHOT_SCRIPT = "";
std::string Constants::V8_HEAP_SNAPSHOT_BLOB = "";