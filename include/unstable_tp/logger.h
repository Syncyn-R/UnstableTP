#pragma once
#include <unstable_tp/symbol.h>
#include <littlehooker/littlehooker.h>

enum log_level {
    INFO = 2u,
    WARN = 4u,
    UNKNOWN = 6u,
    ERR = 8u
};

void server_logger(const char *msg, enum log_level level);
