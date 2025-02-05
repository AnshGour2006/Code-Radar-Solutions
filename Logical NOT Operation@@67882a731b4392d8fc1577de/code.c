#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a;
    sacnf("%d",&a);
    if(a>!0){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
}