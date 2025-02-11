#include <stdio.h>

int main() {
    int month, year, days;

    // Input month and year
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    // Determine the number of days in the month
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            days = 31;
            break;
        case 4: case 6: case 9: case 11:
            days = 30;
            break;
        case 2:
            // Check for leap year
            if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
                days = 29;
            else
                days = 28;
            break;
        default:
            printf("Invalid month! Please enter a number between 1 and 12.\n");
            return 1; // Exit with an error code
    }

    // Output the number of days
    printf("Number of days in month %d of year %d: %d\n", month, year, days);
    
    return 0;
}
