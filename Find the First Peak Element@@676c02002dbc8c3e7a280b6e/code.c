#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    if (n <= 0) {
        printf("-1\n"); // If no valid elements exist, return -1
        return 0;
    }

    int arr[n]; // Declare an array of size n

    // Take input
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[-1]; // Initialize max with the first element

    // Iterate over all elements to find max
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("%d\n", max); // Print the maximum number
    return 0;
}
