#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(num1==num2){
        printf("Equal\n");
    }
    else if(num1>num2){
        printf("First\n");
    }
    else{
        printf("Second\n");
    }

}