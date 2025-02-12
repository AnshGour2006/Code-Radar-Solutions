#include <stdio.h>

int main() {
    int age, citizen;
    
    // Take input for age and citizenship
    scanf("%d", &age);
    scanf("%d", &citizen);

    // Corrected condition
    if (age >= 18 && citizen == 1) {
        printf("Eligible\n");
    } else {  // No condition needed here
        printf("Not Eligible\n");
    }
    
    return 0;
}
