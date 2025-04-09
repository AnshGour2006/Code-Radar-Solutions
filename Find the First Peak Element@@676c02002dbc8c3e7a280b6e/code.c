#include<stdio.h>
int firstPeak(int arr[],int n){
    int num=0;
    for(int i=0;i<n-2;i++){
        if(arr[i]<arr[i+1] && arr[i+1]>arr[i+2])
        num=arr[i];

    }
    return num;
}




int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
  int result=firstPeak(arr,n);
  printf("%d",result);
}