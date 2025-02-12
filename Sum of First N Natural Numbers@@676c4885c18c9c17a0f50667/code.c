// Your code here...
#include <stdio.h>

int main() {
    int n, sum = 0;

    // Taking input
    scanf("%d", &n);

    // Corrected loop (starting from 1 instead of 0)
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    // Corrected printf statement
    printf("%d\n", sum);

    return 0;
}
