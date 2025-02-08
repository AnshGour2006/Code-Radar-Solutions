#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   char ch;
   printf("enter a character \n");
   scanf("%c",&ch);
   if(ch>=97 && ch<=122){
    printf("Uppercase");
   }
   else{
    printf("Lowercase")
   }
}