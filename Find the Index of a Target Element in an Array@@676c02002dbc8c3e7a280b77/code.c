// Your code here...
#include <stdio.h>

int target_index(int arr[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == x) {
            return i; // Return the index
        }
    }
    return -1; // If element is not found
}

int main() {
    int n, x;
    
    // Input array size
   
    scanf("%d", &n);

    int arr[n]; // Declare array
    
    // Input array elements
  
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input target element
   
    scanf("%d", &x);

    // Call the function
    int index = target_index(arr, n, x);
    
    if (index != -1) {
        printf("%d\n", index);
    } else {
        printf("-1\n");
    }
    
    return 0;
}
