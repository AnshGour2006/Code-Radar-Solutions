#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num,bit_size,msb_mask;
    scanf("%d",&num);
    bit_size=sizeof(int)*8;
    msb_mask=1<<(bit_size-1);
    if(num & msb_mask){
        printf("Set");
    }
    else{
        printf("Non Set");
    }
    return 0;
}