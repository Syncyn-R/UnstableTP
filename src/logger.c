#include <unstable_tp/logger.h>

void server_logger(const char *msg, enum log_level level)
{
    TLCALL(S_BedrockLog__log_va,
        char (*)(unsigned int a1, char a2, int a3, int a4, unsigned int a5, const char *a6, int a7, const char *a8),
        0, 1, 0, 12, level, "HOOKER->LOG", 114514, msg);
}
