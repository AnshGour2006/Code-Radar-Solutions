#include <stdio.h>

void second_largest(int arr[], int n) {
    int largest = arr[0];
    int second_largest = arr[0];
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
}

int main() {
    int n;
    scanf("%d", &n);
    
    if (n < 2) {
        return 1;
    }
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    second_largest(arr, n);
    
    return 0;
}
