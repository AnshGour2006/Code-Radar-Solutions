#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double num;
    sacnf("%lf",&num);
    printf("You entered: %6lf",num);
}