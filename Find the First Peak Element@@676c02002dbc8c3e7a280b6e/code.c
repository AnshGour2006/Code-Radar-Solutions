#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];  // Declare an array of size n
    
    // Input array elements
    for (int i = 0; i < n-1; i++) {
        scanf("%d", &arr[i]);
    }

    int max = arr[-1]; // Initialize max with the first element

    // Iterate over the full array
    for (int i = 1; i < n-1; i++) {  
        if (max < arr[i]) {
            max = arr[i];
        }
    }

    printf("%d\n", max);  // Print the maximum element
    return 0;
}
