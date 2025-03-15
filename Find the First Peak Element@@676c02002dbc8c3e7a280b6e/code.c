#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    // Handle edge cases for arrays with less than 3 elements
    if (n == 1) {
        return arr[0]; // Only one element, it's the peak by default
    }

    // First element is a peak if it's greater than its next element
    if (arr[0] > arr[1]) {
        return arr[0];
    }

    // Last element is a peak if it's greater than its previous element
    if (arr[n - 1] > arr[n - 2]) {
        return arr[n - 1];
    }

    // Check for peaks in the middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i]; // Found a peak element
        }
    }

    // No peak element found
    return -1;
}

int main() {
    int n;

    // Input size of array
    scanf("%d", &n);

    int arr[n];

    // Input array elements

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and output the first peak element
    int peak = findFirstPeak(arr, n);
    if (peak != -1) {
        printf("%d\n", peak);
    } else {
        printf("-1\n");
    }

    return 0;
}