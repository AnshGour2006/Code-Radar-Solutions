
#include <stdio.h>
#include <math.h>

int main() {
    int n, i, isPrime = 1;

    // Input number
    scanf("%d", &n);

    // 1 is not prime
    if (n <= 1) {
        isPrime = 0;
    }
    // 2 and 3 are prime
    else if (n == 2 || n == 3) {
        isPrime = 1;
    }
    // Exclude even numbers and multiples of 3
    else if (n % 2 == 0 || n % 3 == 0) {
        isPrime = 0;
    } 
    else {
        // Check from 5 to sqrt(n), skipping even numbers
        for (i = 5; i <= sqrt(n); i += 2) {
            if (n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    // Output result
    if (isPrime) {
        printf("%dPrime\n", n);
    } else {
        printf("%dNot Prime \n", n);
    }

    return 0;
}
