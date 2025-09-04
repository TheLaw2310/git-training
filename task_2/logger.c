#include "logger.h"

int main(){
    log_info("App started");
    log_warn("Low memory");
    log_error("Crash occurred");
    return 0;
}