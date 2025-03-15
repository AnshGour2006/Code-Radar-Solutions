#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    // Edge case: If array has only one element, it is a peak
    if (n == 1) {
        return arr[0];
    }

    // Check first element
    if (arr[0] > arr[1]) {
        return arr[0];
    }

    // Check middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i];
        }
    }

    // Check last element
    if (arr[n - 1] > arr[n - 2]) {
        return arr[n - 1];
    }

    // No peak found (should not happen in a valid input)
    return -1;
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peak = findFirstPeak(arr, n);
    
    if (peak != -1) {
        printf("%d\n", peak);
    } else {
        printf("-1\n");
    }

    return 0;
}
