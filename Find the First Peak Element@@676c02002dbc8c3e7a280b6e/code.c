#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n-1;i++){
        scanf("%d",&arr[i])
    }
    int max=-1;
    for(int i=0;i<n-1;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    printf("%d\n",max);
    return 0;

}