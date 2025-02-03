#include <stdio.h>
int main() {
    int num1,num2,num3;
    printf("enter a first number:\n");
    scanf("%d",&num1);
    printf("enter a second number:\n");
    scanf("%d",&num2);
    printf("enter a third number:\n");
    scanf("%d",&num3);
    double average=(num1+num2+num3)/3.0;
    printf("Average: %.2f\n",average);
    return 0;
}