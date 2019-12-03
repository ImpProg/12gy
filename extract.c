#include "extract.h"

char* extract(char* text) {
    int length = strlen(text);
    int num = 0;
    
    for (char* ch = text; *ch; ch++) {
        if (*ch == '[') {
            num++;
        }
    }

    char* result = calloc(length + num * 26 + 1, sizeof(char));
    int i = 0;
    for (char* ch = text; *ch; ch++) {
        if (*ch == '[') {
            char start = *(++ch);
            ++ch;
            char stop = *(++ch);
            for (char j = start; j <= stop; ++j) {
                result[i++] = j;
            }
            ch++;
        } else {
            result[i++] = *ch;
        }
    }

    return result;
}