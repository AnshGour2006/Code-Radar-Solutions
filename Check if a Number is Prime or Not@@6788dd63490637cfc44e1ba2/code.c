#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int num;
   scanf("%d",&num);
   if(!(num/2==0 && num/3)){
    printf("Not Prime\n");
   }
   else{
    printf("Pime\n");
   }
}