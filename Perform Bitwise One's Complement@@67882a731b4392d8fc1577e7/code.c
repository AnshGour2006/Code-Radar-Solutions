#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num,result;
    scanf("%d %d",&num,&result);
    result=~num;
    printf("%d",result);
    return 0;
}