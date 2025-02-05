#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num,shift,result;
    scanf("%d %d",&num,&shift);
    result=num<<shift;
    printf("%d",result);
    
}