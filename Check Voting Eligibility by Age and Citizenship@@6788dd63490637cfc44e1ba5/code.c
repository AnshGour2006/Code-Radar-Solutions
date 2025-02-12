#include<stdio.h>
int main(){
    int age = 20, citizen = 1;  // example values
    if(age >= 18 && citizen == 1){
        printf("Eligible");
    }
    else{
        printf("Not Eligible");
    }
    return 0;
}
