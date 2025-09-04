#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* duplicate_string(const char* input) {
    char* copy = malloc(strlen(input) + 1); // added memory allocation for copy.
    if (copy == NULL) {
        return NULL; // malloc failure handling
    }
    strcpy(copy, input); // <-- bug here
    return copy;
}

int main() {
    char* word = duplicate_string("internship");
    printf("%s\n", word);

    char* word2 = duplicate_string("Hello World");
    printf("%s\n", word2);
    free(word2);
    free(word);
    return 0;
}
