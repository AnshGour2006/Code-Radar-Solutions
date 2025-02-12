#include<stdio.h>
int main(){
    int age, citizen;
    
    // Example values
    age = 20;        // Set the age
    citizen = 0;     // Set citizen as non-citizen (0 for non-citizen)
    
    if(age >= 18 && citizen == 1){
        printf("Eligible\n");  // Citizen and age condition
    }
    else if(age >= 18 && citizen == 0){
        printf("Not Eligible\n");  // Age is fine, but non-citizen
    }
    else{
        printf("Not Eligible\n");  // Underage condition
    }
    return 0;
}
