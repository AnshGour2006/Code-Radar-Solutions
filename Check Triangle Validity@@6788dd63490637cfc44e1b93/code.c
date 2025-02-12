#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

// Function to check if a, b, c form a right-angled triangle
int is_right_triangle(int a, int b, int c) {
    // Find the largest side (hypotenuse)
    int max = a, side1 = b, side2 = c;
    if (b > max) {
        max = b;
        side1 = a;
        side2 = c;
    }
    if (c > max) {
        max = c;
        side1 = a;
        side2 = b;
    }
    
    // Check Pythagorean theorem
    return (max * max == side1 * side1 + side2 * side2);
}

int main() {
    int a, b, c;
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (is_right_triangle(a, b, c)) {
        printf("Valid\n");
    } else {
        printf("Invalid\n");
    }
    
    return 0;
}
