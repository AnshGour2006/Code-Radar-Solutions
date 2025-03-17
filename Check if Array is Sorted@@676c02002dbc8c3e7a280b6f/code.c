#include <stdio.h>

int isSorted(int arr[], int n) {
    // Traverse the array and check if each element is less than or equal to the next
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return 0; // Array is not sorted in non-decreasing order
        }
    }
    return 1; // Array is sorted in non-decreasing order
}

int main() {
    int n;

    // Input the size of the array
    scanf("%d", &n);

    int arr[n];

    // Input the elements of the array
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is sorted in non-decreasing order
    if (isSorted(arr, n)) {
        printf("Sorted\n");
    } else {
        printf("Not Sorted\n");
    }

    return 0;
}
