#include "logger.h"

void log_info(const char* message) {
    if(message == NULL) {return;}
    printf("[INFO] %s\n", message);
}

void log_warn(const char* message) {
    if(message == NULL) {return;}
    printf("[WARN] %s\n", message);
}

void log_error(const char* message) {
    if(message == NULL) {return;}
    printf("[ERROR] %s\n", message);
}

int main(){
    log_info("App started");
    log_warn("Low memory");
    log_error("Crash occurred");
    return 0;
}