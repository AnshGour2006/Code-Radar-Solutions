#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double num;
    scanf("%lf",&num);
    printf("You entered: %.2lf",num);
    return 0;
}