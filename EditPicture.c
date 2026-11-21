#include <stdio.h>

void kernel(int n, int arr[n][n]) {
    if (arr == NULL) return;

    for (int j = 0; j < n; j++) {
        for (int i = 0; i < n; i++) {
            arr[j][i] = 0;
        }
    }
}