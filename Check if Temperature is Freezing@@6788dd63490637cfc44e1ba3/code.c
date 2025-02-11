#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int temperature;
    scanf("%d",&temperature);
    if(temperature<=0){
        printf("Freezing\n");
    }
    else{
        printf("Above Freezing\n");
    }
}