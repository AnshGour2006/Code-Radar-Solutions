#include<stdio.h>
int main(){
    int days;
    scanf("%d",&days);
    switch (days) {
    case constant1:
        if(days==1){
            printf("Monday\n")
        }
        break;
    case constant2:
       if(days==2){
        printf("Tuesday\n")
       }
        break;
    case constant3:
        if(days==3){
            printf("Wednesday\n");
        }
        break;
}

    return 0;
}