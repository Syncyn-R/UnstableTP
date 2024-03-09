#include "unstable_tp/plugin.h"

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


bool init_hooks(void)
{
    lh_enable_all_hook();
    return true;
}
