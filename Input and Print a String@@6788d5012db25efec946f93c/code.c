#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   char word[100];
   scanf("%s",word);
   printf("You entered: %s",word);
}