#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    double num;
    scanf("%1f",&num);
    printf("You entered: %.61f",num);
}