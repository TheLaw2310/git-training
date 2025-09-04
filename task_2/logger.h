#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//prototypes

void log_info(const char *message);
void log_warn(const char *message);
void log_error(const char *message);

//definitions

void log_info(const char* message) {
    char* mess = malloc(strlen(message) + 1);
    if(mess == NULL){
        exit(2);
    }
    if(message == NULL){
        exit(2);
    }
    mess = strncpy(mess, message, strlen(message) + 1);
    printf("[INFO] %s\n", mess);
}

void log_warn(const char* message) {
    char* mess = malloc(strlen(message) + 1);
    if(mess == NULL){
        exit(2);
    }
    if(message == NULL){
        exit(2);
    }
    mess = strncpy(mess, message, strlen(message) + 1);
    printf("[WARN] %s\n", mess);
}

void log_error(const char* message) {
    char* mess = malloc(strlen(message) + 1);
    if(mess == NULL){
        exit(2);
    }
    if(message == NULL){
        exit(2);
    }
    mess = strncpy(mess, message, strlen(message) + 1);
    printf("[ERROR] %s\n", mess);
}