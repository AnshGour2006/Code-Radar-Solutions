#include <stdio.h>

int main() {
    int a, b;
    char operator;
    scanf("%d %d %c", &a, &b, &operator);
    if (operator == '+') {
        printf("%d\n", a + b);
    } else if (operator == '-') {
        printf("%d\n", a - b);
    } else if (operator == '*') {
        printf("%d\n", a * b);
    } else if (operator == '/') {
        if (b != 0) {
            printf("%d\n", a / b);
        } else {
            printf("Error: Division by zero.\n");
        }
    } else {
        printf("Error:Division by zero\n");
    }

    return 0;
}
