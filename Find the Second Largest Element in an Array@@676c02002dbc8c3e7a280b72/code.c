#include <stdio.h>

int secondLargest(int arr[], int n) {
    if (n < 2) return -1; // If less than 2 elements, no second largest

    int first = arr[0], second = -1;

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    int result = secondLargest(arr, n);
    if (result == -1)
        printf("No second largest element\n");
    else
        printf("%d\n", result);

    return 0;
}
