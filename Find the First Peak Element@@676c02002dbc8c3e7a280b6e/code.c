#include <stdio.h>

int main() {
    int n, num, max = -1;
    scanf("%d", &n);

    if (n <= 0) { 
        printf("-1\n"); // No elements to compare
        return 0;
    }

    scanf("%d", &max); // Read the first number

    for (int i = 1; i < n; i++) {
        scanf("%d", &num);
        if (num > max) {
            max = num;
        }
    }

    printf("%d\n", max);
    return 0;
}
