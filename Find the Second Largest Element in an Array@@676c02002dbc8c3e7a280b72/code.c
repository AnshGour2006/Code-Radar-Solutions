#include <stdio.h>
#include <limits.h> // Include for INT_MIN

int secondLargest(int arr[], int n) {
    if (n < 2) return -1; // If less than 2 elements, no second largest

    int first = INT_MIN, second = INT_MIN; // Handle negative numbers properly

    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    return (second == INT_MIN) ? -1 : second; // If no valid second largest, return -1
}

int main() {
    int n;
    scanf("%d", &n);

    int arr[n]; // Declare array of size n
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = secondLargest(arr, n); // Use the correct n

    if (result == -1)
        printf("-1\n");
    else
        printf("%d\n", result);

    return 0;
}
