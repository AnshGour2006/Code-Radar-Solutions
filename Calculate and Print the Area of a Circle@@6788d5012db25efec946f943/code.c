#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float radius,area;
    const float PI=3.14;
    scanf("%f",&radius);
    area=PI*radius*radius;
    printf("Area: %.2f",area);

}