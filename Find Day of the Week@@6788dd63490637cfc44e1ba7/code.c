#include <stdio.h>

int main() {
    int days;
    
    // Input the day number
  
    scanf("%d", &days);

    // Switch case to determine the day
    switch (days) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 6:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Invalid\n");
    }

    return 0;
}
