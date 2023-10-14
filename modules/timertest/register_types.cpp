#include "register_types.h"

#include "core/object/class_db.h"
#include "timer_test.h"

void initialize_timertest_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
	ClassDB::register_class<Timertest>();
}

void uninitialize_timertest_module(ModuleInitializationLevel p_level) {
	if (p_level != MODULE_INITIALIZATION_LEVEL_SCENE) {
			return;
	}
}
