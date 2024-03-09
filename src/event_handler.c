#include <unstable_tp/logger.h>
#include <unstable_tp/event_handler.h>

void event_on_server_init_logger()
{
    server_logger(INFO, "Test");
}