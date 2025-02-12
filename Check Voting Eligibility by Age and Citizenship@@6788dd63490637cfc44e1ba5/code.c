#include<stdio.h>
int main(){
    int age, citizen;
    
    if(age >= 18 && citizen == 1){
        printf("Eligible\n");  // Citizen and age condition
    }
    else (age < 18 && citizen == 0){
        printf("Not Eligible\n");  // Age is fine, but non-citizen
    }
    
    return 0;
}
