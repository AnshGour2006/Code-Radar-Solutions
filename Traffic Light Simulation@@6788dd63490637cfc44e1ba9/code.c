#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
char light;
scanf("%c",&light);
if(light=='R'){
    printf("Stop");
}
else if(light=='G'){
    printf("Go");
}
else if(light=='Y'){
    printf("Slow Down");
}
else{
    printf("Invalid input");
}
    return 0;
}