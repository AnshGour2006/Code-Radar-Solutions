// Your code here...
#include <stdio.h>
int main() {
    int a, b;

    // Taking input
    scanf("%d %d", &a, &b);

    // Swapping using XOR
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    // Printing output without extra text
    printf("%d %d\n", a, b);

    return 0;
}
