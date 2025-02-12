#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    // Input number
    scanf("%d", &n);

    // 1 is not prime
    if (n <= 1) {
        isPrime = 0;
    } else {
        // Check divisibility from 2 to n-1
        for (i = 2; i < n; i++) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Output result
    if (isPrime) {
        printf("Prime\n", n);
    } else {
        printf("Not Prime\n", n);
    }

    return 0;
}
