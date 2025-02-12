#include <stdio.h>

int main() {
    int month, days;

    // Input month
    scanf("%d", &month);

    // Determine the number of days in the month
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            days = 28; // Default to 28 days, leap year not considered here
            break;
        default:
            printf("Invalid month! Please enter a number between 1 and 12.\n");
            return 1; // Indicating error
    }


    printf("Number of days: %d\n", days);

    return 0;
}
