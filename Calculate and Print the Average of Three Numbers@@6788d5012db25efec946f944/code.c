#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b,c;
    printf("enter a first number:\n");
    scanf("%d",&a);
    printf("enter a second number:\n");
    scanf("%d",&b);
    printf("enter a third number:\n");
    scanf("%d",&c);
    int average=(a+b+c)/3;
    printf("Average: %d",average);
    return 0;
}