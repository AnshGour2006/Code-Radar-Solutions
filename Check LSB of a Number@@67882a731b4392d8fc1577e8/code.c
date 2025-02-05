#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    scanf("%d",&num);
    if(num & 1){
        printf("Set\n",num);
    }
   else{
    printf("Not Set");
   }

    return 0;
}