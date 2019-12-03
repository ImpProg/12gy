#include <stdio.h>
#include <stdlib.h>
#include "merge.h"

void printArray(int* array, int size) {
    printf("\nSize: %d\n", size);
    for (int i = 0; i < size; ++i) {
        printf("%d\n", array[i]);
    }
}

int main() {
    int* arr1 = (int*) malloc(20 * sizeof(int));
    int* arr2 = (int*) malloc(20 * sizeof(int));
    int* result = (int*) malloc(40 * sizeof(int));
    int resultSize = 0;

    for (int i = 0; i < 20; ++i) {
        arr1[i] = i;
        arr2[i] = i + 20;
    }

    merge(arr1, arr2, result, 20, 20, &resultSize);
    printArray(result, resultSize);

    int arr3[] = {10, 15, 456, 600};
    int arr4[] = {1, 2, 5, 10, 15, 450, 789};
    int result2[20];
    merge(arr3, arr4, result2, 4, 7, &resultSize);
    printArray(result2, resultSize);
    
    free(arr1);
    free(arr2);
    free(result);

    return 0;
}