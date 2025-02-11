#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
   int costprice,sellingprice;
   scanf("%d %d",&costprice,&sellingprice);
   if(costprice<sellingprice){
    printf("Profit\n");
   }
   else if(costprice<sellingprice){
    printf("Loss\n");
   }
   else{
    printf("No Profit No Loss\n");
   }
}