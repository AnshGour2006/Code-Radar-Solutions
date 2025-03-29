#include <stdio.h>

void even_odd(int arr[], int n, int even_count, int odd_count) {
    even_count = 0;
    odd_count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("%d %d\n", even_count, odd_count);
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    even_odd(arr, n, 0, 0);
}
