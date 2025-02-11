#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    char sign1,sign2;
    scanf("%c %c",&sign1,&sign2);
    if(sign1=='+'&& sign2=='+' && sign1=='-' && sign2=='-'){
        printf("Same Sign");
    }
    else{
    printf("Different Sign");
    }
}