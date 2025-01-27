#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char str[];
    scanf("%s",&str)
    printf("You entered: %s",str);
    return 0;
}