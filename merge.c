#include "merge.h"

void merge(int* x, int* y, int* z, int n, int m, int* newSize) {
    int duplicates = 0;
    
    int i = 0;
    int j = 0;
    int k = 0;

    while (i < n || j < m) {
        if (j >= m || (i < n && x[i] < y[j])) {
            z[k] = x[i];
            i++;
            k++;
        } else if (i >= n || (j < m && y[j] < x[i])) {
            z[k] = y[j];
            j++;
            k++;
        } else {
            i++;
            j++;
            duplicates++;
        }
    }

    *newSize = n + m - duplicates * 2;
}