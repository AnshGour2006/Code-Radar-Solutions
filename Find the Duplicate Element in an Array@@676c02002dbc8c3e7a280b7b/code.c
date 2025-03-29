// Your code here...
#include<stdio.h>
int duplicate_element(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]==arr[i+1]){
            return arr[i];
        }
        else{
            return -1;
        }
    }
}
int main(){
    int n;
    int result;
    scanf("%d",&n);
   result= duplicate_element(arr,n);
   printf("%d",result);
return 0;
}