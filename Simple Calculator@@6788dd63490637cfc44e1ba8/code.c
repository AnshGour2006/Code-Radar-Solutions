#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int a,b
    char opearator;
    scanf("%d %d %c",&a,&b,&opearator)l;
    if(opearator=='+'){
        printf("%d\n",a+b);
    }
    else if(opearator=='-'){
        printf("%d\n",a-b);
    }
   else if(opearator=='*'){
        printf("%d\n",a*b);
    }
   
    else if(opeartor=='/'){
        if(b!=0){
            printf("%d\n",a/b);
        }
    }
    else{
        printf("Invalid operator\n");
    }



    return 0;
}