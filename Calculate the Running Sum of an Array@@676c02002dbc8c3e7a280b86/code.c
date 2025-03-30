// Your code here...
#include<stdio.h>
void running_array(int arr[],int n){
    if(n<=1){
        return;
    }
    for(int i=1;i<n;i++){
        arr[i]=arr[i]+arr[i-1];
    }
}
int main(){
    int n;
     scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    running_array(arr,n);
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}