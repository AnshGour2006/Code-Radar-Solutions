#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i]);
    }
    int max=-1;
    for(int i=0;i<n-1;i++){
        if(max<arr[i]){
            return max;
        }
    }
}