// Your code here...
#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int num=1;
        for(int j=1;j<i+1;j++){
            printf("%d ",num);
            num++;
        }
        printf("\n");
    }
}