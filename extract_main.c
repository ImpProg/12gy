#include <stdio.h>
#include <stdlib.h>
#include "extract.h"

int main() {
    {
        char input[] = "This is [f-o] to demo [a-z] my [a-b] [b-b] program [b-d]";
        char* result = extract(input);
        printf("%s\n", result);
        free(result);
    }

    {
        char input[] = "This is another demo";
        char* result = extract(input);
        printf("%s\n", result);
        free(result);
    }

    {
        char input[] = "[a-z]";
        char* result = extract(input);
        printf("%s\n", result);
        free(result);
    }

    {
        char input[] = "[a-c].[x-z].[d-f]";
        char* result = extract(input);
        printf("%s\n", result);
        free(result);
    }

    return 0;
}