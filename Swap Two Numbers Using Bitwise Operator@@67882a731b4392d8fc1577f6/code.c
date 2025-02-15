#include <stdio.h>

int main() {
    int a, b;

    // Fixed scanf statement
    scanf("%d %d", &a, &b);

    a = a ^ b;  // Step 1: a now holds the XOR of a and b
    b = a ^ b;  // Step 2: b gets the original value of a
    a = a ^ b;  // Step 3: a gets the original value of b

    printf("a = %d, b = %d\n", a, b);

    return 0;
}
