#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int num;
   scanf("%d",&num);
   if(num%5==0 && num%11==0){
    printf("Divisible\n");
   }
   else{
    printf("Not Divisible\n");
   }
    return 0;
}