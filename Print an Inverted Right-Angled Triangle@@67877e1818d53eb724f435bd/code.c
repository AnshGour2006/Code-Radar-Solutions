// Your code here...
#include<stdio.h>
int main()
int n;
scanf("%d",&n)
    for(int i=0;i<n;i++){
        for(int j=)
    }
    return 0;

}#include <stdio.h>

int main() {
    int n;

    // Get the height of the triangle from the user
    scanf("%d", &n);

    // Loop for each row of the triangle
    for (int i = n; i >= 1; i--) {
        // Loop for printing spaces before stars
        for (int j = 0; j < n - i; j++) {
            printf(" ");
        }
        // Loop for printing stars
        for (int j = 0; j < 2 * i - 1; j++) {
            printf("*");
        }
        // Move to the next line after each row
        printf("\n");
    }

    return 0;
}
