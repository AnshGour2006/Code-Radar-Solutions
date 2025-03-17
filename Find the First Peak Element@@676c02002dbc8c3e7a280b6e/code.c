#include<stdio.h>

int peak(int arr[], int n) {
    // If the array has only one element, that element is the peak.
    if (n == 1) {
        return arr[0];
    }

    // Check if the first element is a peak
    if (arr[0] >= arr[1]) {
        return arr[0];
    }

    // Check if the last element is a peak
    if (arr[n - 1] >= arr[n - 2]) {
        return arr[n - 1];
    }

    // Check the middle elements for a peak
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return arr[i];
        }
    }

    return -1;  // Return -1 if no peak is found (shouldn't happen in most cases)
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    int result = peak(arr, n);
    printf("%d\n",result);
    
    return 0;
}
