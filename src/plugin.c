#include <unstable_tp/plugin.h>
#include <unstable_tp/event_handler.h>

extern struct string string;
extern struct level *g_level;
extern struct db_storage *g_db_storage;

bool server_started = false;

/*
 * A two-dimensional array for storing players and their play sequences
 *
 * 0: player pointer
 * 1: Last played to position
 * 2: Start time
 */

TLHOOK(on_initialize_logging, void, S_ServerInit_Log, uintptr_t this)
{
	on_initialize_logging.original(this);
	event_on_server_init_logger();
}

bool init_hooks(void)
{
    on_initialize_logging.init(&on_initialize_logging);
    lh_enable_all_hook();
    return true;
}
