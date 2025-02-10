#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
char light;
scanf("%c",&char);
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
    printf("INvalid input");
}
    return 0;
}