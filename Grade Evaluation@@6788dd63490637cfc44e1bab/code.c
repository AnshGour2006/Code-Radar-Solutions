#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   char grade;
   scanf("%c",&grade);
   if(grade=='A'){
    printf("Excellent");
   }
   else if(grade=='B'){
    printf("Good");
   }
   else if(grade=='C'){
    printf("Average");
   }
   else if(grade=='D'){
    printf("Below");
   }
   else if(grade=='F'){
    printf("Fail");
   }
   else{
    printf("Invalid grade");
   }
    return 0;
}